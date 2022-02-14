
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pci_dev {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_1, u64 VAR_2)
{
 return VAR_0 &&
  FUNC_1(&VAR_1->dev) &&
  VAR_2 >= FUNC_0(40);
}
