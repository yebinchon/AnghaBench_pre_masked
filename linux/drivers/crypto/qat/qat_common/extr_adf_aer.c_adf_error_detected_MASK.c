
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct adf_accel_dev {int dummy; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct adf_accel_dev* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_3,
        pci_channel_state_t VAR_4)
{
 struct adf_accel_dev *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(&VAR_3->dev, "Acceleration driver hardware error detected.\n");
 if (!VAR_5) {
  FUNC_1(&VAR_3->dev, "Can't find acceleration device\n");
  return VAR_0;
 }

 if (VAR_4 == VAR_2) {
  FUNC_1(&VAR_3->dev, "Can't recover from device error\n");
  return VAR_0;
 }

 return VAR_1;
}
