
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mem_ctl_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct mem_ctl_info* FUNC_1 (int *) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 struct mem_ctl_info *VAR_2;

 FUNC_0(0, "\n");

 if (VAR_0)
  FUNC_3(VAR_0);

 if ((VAR_2 = FUNC_1(&VAR_1->dev)) == ((void*)0))
  return;

 FUNC_2(VAR_2);
}
