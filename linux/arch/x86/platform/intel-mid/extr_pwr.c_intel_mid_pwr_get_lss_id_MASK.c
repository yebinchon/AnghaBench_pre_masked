
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

int FUNC_2(struct pci_dev *VAR_7)
{
 int VAR_8;
 u8 VAR_9;





 VAR_8 = FUNC_0(VAR_7, VAR_6);
 if (!VAR_8)
  return -VAR_0;


 FUNC_1(VAR_7, VAR_8 + VAR_3, &VAR_9);
 if (!(VAR_9 & VAR_4))
  return -VAR_1;

 VAR_9 &= ~VAR_4;
 if (VAR_9 >= VAR_5)
  return -VAR_2;

 return VAR_9;
}
