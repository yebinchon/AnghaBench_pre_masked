
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct i82875p_pvt {scalar_t__ ovrfl_pdev; scalar_t__ ovrfl_window; } ;


 int FUNC_0 (int ,char*) ;
 struct mem_ctl_info* FUNC_1 (int *) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct mem_ctl_info *VAR_2;
 struct i82875p_pvt *VAR_3 = ((void*)0);

 FUNC_0(0, "\n");

 if (VAR_0)
  FUNC_3(VAR_0);

 if ((VAR_2 = FUNC_1(&VAR_1->dev)) == ((void*)0))
  return;

 VAR_3 = (struct i82875p_pvt *)VAR_2->pvt_info;

 if (VAR_3->ovrfl_window)
  FUNC_4(VAR_3->ovrfl_window);

 if (VAR_3->ovrfl_pdev) {



  FUNC_6(VAR_3->ovrfl_pdev);
  FUNC_5(VAR_3->ovrfl_pdev);
 }

 FUNC_2(VAR_2);
}
