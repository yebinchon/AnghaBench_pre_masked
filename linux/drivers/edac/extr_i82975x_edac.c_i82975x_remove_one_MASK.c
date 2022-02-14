
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mem_ctl_info {struct i82975x_pvt* pvt_info; } ;
struct i82975x_pvt {scalar_t__ mch_window; } ;


 int FUNC_0 (int ,char*) ;
 struct mem_ctl_info* FUNC_1 (int *) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct mem_ctl_info *VAR_1;
 struct i82975x_pvt *VAR_2;

 FUNC_0(0, "\n");

 VAR_1 = FUNC_1(&VAR_0->dev);
 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = VAR_1->pvt_info;
 if (VAR_2->mch_window)
  FUNC_3( VAR_2->mch_window );

 FUNC_2(VAR_1);
}
