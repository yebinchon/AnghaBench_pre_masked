
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct i7300_pvt {char* tmp_prt_buffer; } ;


 int FUNC_0 (int ,char*) ;
 struct mem_ctl_info* FUNC_1 (int *) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct mem_ctl_info*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct mem_ctl_info *VAR_2;
 char *VAR_3;

 FUNC_0(0, "\n");

 if (VAR_0)
  FUNC_3(VAR_0);

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (!VAR_2)
  return;

 VAR_3 = ((struct i7300_pvt *)VAR_2->pvt_info)->tmp_prt_buffer;


 FUNC_4(VAR_2);

 FUNC_5(VAR_3);
 FUNC_2(VAR_2);
}
