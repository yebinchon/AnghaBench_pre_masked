
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cc_req_mgr_handle {scalar_t__ axi_completed; } ;
struct cc_drvdata {int irq; int comp_mask; struct cc_req_mgr_handle* request_mgr_handle; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct cc_drvdata*) ;
 int FUNC_2 (struct cc_drvdata*,int ) ;
 int FUNC_3 (struct cc_drvdata*,int ,int) ;
 int FUNC_4 (struct cc_drvdata*) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct device* FUNC_6 (struct cc_drvdata*) ;
 int FUNC_7 (struct cc_drvdata*) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_3)
{
 struct cc_drvdata *VAR_4 = (struct cc_drvdata *)VAR_3;
 struct cc_req_mgr_handle *VAR_5 =
      VAR_4->request_mgr_handle;
 struct device *VAR_6 = FUNC_6(VAR_4);
 u32 VAR_7;

 FUNC_5(VAR_6, "Completion handler called!\n");
 VAR_7 = (VAR_4->irq & VAR_4->comp_mask);




 FUNC_3(VAR_4, FUNC_0(VAR_0), VAR_7);



 VAR_5->axi_completed += FUNC_1(VAR_4);

 FUNC_5(VAR_6, "AXI completion after updated: %d\n",
  VAR_5->axi_completed);

 while (VAR_5->axi_completed) {
  do {
   VAR_4->irq |= FUNC_2(VAR_4, FUNC_0(VAR_2));
   VAR_7 = (VAR_4->irq & VAR_4->comp_mask);
   FUNC_7(VAR_4);




   VAR_5->axi_completed +=
      FUNC_1(VAR_4);
  } while (VAR_5->axi_completed > 0);

  FUNC_3(VAR_4, FUNC_0(VAR_0), VAR_7);

  VAR_5->axi_completed += FUNC_1(VAR_4);
 }




 FUNC_3(VAR_4, FUNC_0(VAR_1),
     FUNC_2(VAR_4, FUNC_0(VAR_1)) & ~VAR_4->comp_mask);

 FUNC_4(VAR_4);
 FUNC_5(VAR_6, "Comp. handler done.\n");
}
