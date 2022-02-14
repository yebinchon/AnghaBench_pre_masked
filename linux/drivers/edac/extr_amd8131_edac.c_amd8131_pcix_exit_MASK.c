
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct amd8131_dev_info {struct pci_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amd8131_dev_info *VAR_9)
{
 u32 VAR_10;
 struct pci_dev *VAR_11 = VAR_9->dev;


 FUNC_0(VAR_11, VAR_4, &VAR_10);
 VAR_10 &= ~(VAR_1 | VAR_2 | VAR_0);
 FUNC_1(VAR_11, VAR_4, VAR_10);


 FUNC_0(VAR_11, VAR_7, &VAR_10);
 VAR_10 &= ~VAR_8;
 FUNC_1(VAR_11, VAR_7, VAR_10);


 FUNC_0(VAR_11, VAR_5, &VAR_10);
 VAR_10 &= ~VAR_3;
 FUNC_1(VAR_11, VAR_5, VAR_10);


 FUNC_0(VAR_11, VAR_6, &VAR_10);
 VAR_10 &= ~VAR_3;
 FUNC_1(VAR_11, VAR_6, VAR_10);
}
