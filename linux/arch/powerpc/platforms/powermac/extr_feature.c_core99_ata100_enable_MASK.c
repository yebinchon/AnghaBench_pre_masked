
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct device_node*,int *,int *) ;
 int FUNC_7 (struct pci_dev*) ;
 struct pci_dev* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int) ;
 int VAR_3 ;

__attribute__((used)) static long
FUNC_11(struct device_node *VAR_4, long VAR_5)
{
 unsigned long VAR_6;
 struct pci_dev *VAR_7 = ((void*)0);
 u8 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_3 < 0x24)
  return -VAR_0;

 FUNC_0(VAR_6);
 if (VAR_5)
  FUNC_3(VAR_1, VAR_2);
 else
  FUNC_2(VAR_1, VAR_2);
 (void)FUNC_4(VAR_1);
 FUNC_1(VAR_6);
 FUNC_10(20);

 if (VAR_5) {
  if (FUNC_6(VAR_4, &VAR_8, &VAR_9) == 0)
   VAR_7 = FUNC_8(0, VAR_8, VAR_9);
  if (VAR_7 == ((void*)0))
   return 0;
  VAR_10 = FUNC_7(VAR_7);
  if (VAR_10 == 0)
   FUNC_9(VAR_7);
  FUNC_5(VAR_7);
  if (VAR_10)
   return VAR_10;
 }
 return 0;
}
