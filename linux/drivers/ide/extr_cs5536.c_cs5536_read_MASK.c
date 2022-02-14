
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, int VAR_4, u32 *VAR_5)
{
 if (FUNC_2(VAR_2)) {
  u32 VAR_6;

  FUNC_1(VAR_0 + VAR_4, *VAR_5, VAR_6);
  return 0;
 }

 return FUNC_0(VAR_3, VAR_1 + VAR_4 * 4, VAR_5);
}
