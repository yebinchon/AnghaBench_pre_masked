
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {unsigned long driver_data; } ;
struct pci_dev {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ,char*) ;
 int FUNC_2 (struct pci_dev*,struct pci_device_id const*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_6,
       const struct pci_device_id *VAR_7)
{
 unsigned long VAR_8 = 0;
 int VAR_9;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = VAR_7->driver_data;

 if (!VAR_5) {
  switch (VAR_8 & VAR_2) {
  case 129:
  case 130:
  case 128:
  case 131:
  case 136:
   FUNC_0(&VAR_6->dev,
     "SI support disabled by module param\n");
   return -VAR_0;
  }
 }
 if (!VAR_4) {
  switch (VAR_8 & VAR_2) {
  case 133:
  case 137:
  case 135:
  case 134:
  case 132:
   FUNC_0(&VAR_6->dev,
     "CIK support disabled by module param\n");
   return -VAR_0;
  }
 }

 if (FUNC_3(VAR_6))
  return -VAR_1;


 VAR_9 = FUNC_1(VAR_6, 0, "radeondrmfb");
 if (VAR_9)
  return VAR_9;

 return FUNC_2(VAR_6, VAR_7, &VAR_3);
}
