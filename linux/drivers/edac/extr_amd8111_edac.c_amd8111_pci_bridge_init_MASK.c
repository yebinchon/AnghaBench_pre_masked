
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct amd8111_pci_info {struct pci_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amd8111_pci_info *VAR_13)
{
 u32 VAR_14;
 struct pci_dev *VAR_15 = VAR_13->dev;




 FUNC_0(VAR_15, VAR_11, &VAR_14);
 if (VAR_14 & VAR_6)
  FUNC_1(VAR_15, VAR_11, VAR_14);


 FUNC_0(VAR_15, VAR_8, &VAR_14);
 if (VAR_14 & VAR_1)
  FUNC_1(VAR_15, VAR_8, VAR_14);




 FUNC_0(VAR_15, VAR_9, &VAR_14);
 if (VAR_14 & VAR_3)
  FUNC_1(VAR_15, VAR_9, VAR_14);


 FUNC_0(VAR_15, VAR_10, &VAR_14);
 if (VAR_14 & VAR_4)
  FUNC_1(VAR_15, VAR_10, VAR_14);


 if (VAR_12 == VAR_0) {

  FUNC_0(VAR_15, VAR_11, &VAR_14);
  VAR_14 |= VAR_7;
  FUNC_1(VAR_15, VAR_11, VAR_14);


  FUNC_0(VAR_15, VAR_8, &VAR_14);
  VAR_14 |= VAR_2;
  FUNC_1(VAR_15, VAR_8, VAR_14);


  FUNC_0(VAR_15, VAR_10, &VAR_14);
  VAR_14 |= VAR_5;
  FUNC_1(VAR_15, VAR_10, VAR_14);
 }
}
