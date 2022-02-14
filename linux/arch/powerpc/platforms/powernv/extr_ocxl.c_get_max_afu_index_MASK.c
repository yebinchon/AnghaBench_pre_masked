
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_6, int *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_4, 0);
 if (!VAR_8)
  return -VAR_3;

 FUNC_1(VAR_6, VAR_8 + VAR_5, &VAR_9);
 if (VAR_9 & VAR_2)
  *VAR_7 = (VAR_9 & VAR_0) >> VAR_1;
 else
  *VAR_7 = -1;
 return 0;
}
