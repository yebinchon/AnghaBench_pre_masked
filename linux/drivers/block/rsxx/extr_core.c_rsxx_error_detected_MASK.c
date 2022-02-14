
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ revision; int dev; } ;
typedef int pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_5,
         enum pci_channel_state VAR_6)
{
 int VAR_7;

 if (VAR_5->revision < VAR_3)
  return VAR_2;

 if (VAR_6 == VAR_4) {
  FUNC_1(VAR_5);
  return VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_5->dev, "Slot reset setup failed\n");
  FUNC_1(VAR_5);
  return VAR_0;
 }

 return VAR_1;
}
