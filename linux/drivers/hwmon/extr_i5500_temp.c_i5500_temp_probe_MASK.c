
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct device {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct device* FUNC_3 (int *,char*,int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_4,
       const struct pci_device_id *VAR_5)
{
 int VAR_6;
 struct device *VAR_7;
 u32 VAR_8;
 s8 VAR_9;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_4->dev, "Failed to enable device\n");
  return VAR_6;
 }

 FUNC_5(VAR_4, VAR_1, &VAR_9);
 FUNC_6(VAR_4, VAR_2, &VAR_8);
 if (VAR_9 == 0x7F && VAR_8 == 0x07D30D40) {
  FUNC_2(&VAR_4->dev, "Sensor seems to be disabled\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(&VAR_4->dev,
          "intel5500", ((void*)0),
          VAR_3);
 return FUNC_0(VAR_7);
}
