
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct pci_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{
 if ((VAR_3 == 0) && (VAR_4 == 1))
  return VAR_0;
 else if ((VAR_3 == 0) && (VAR_4 == 2))
  return VAR_1;

 return 0xff;
}
