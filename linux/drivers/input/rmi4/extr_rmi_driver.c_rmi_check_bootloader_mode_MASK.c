
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmi_driver_data {int bootloader_mode; } ;
struct rmi_device {int dev; } ;
struct pdt_entry {int function_number; int function_version; int data_base_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 struct rmi_driver_data* FUNC_2 (int *) ;
 int FUNC_3 (struct rmi_device*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct rmi_device *VAR_0,
         const struct pdt_entry *VAR_1)
{
 struct rmi_driver_data *VAR_2 = FUNC_2(&VAR_0->dev);
 int VAR_3;
 u8 VAR_4;

 if (VAR_1->function_number == 0x34 && VAR_1->function_version > 1) {
  VAR_3 = FUNC_3(VAR_0, VAR_1->data_base_addr, &VAR_4);
  if (VAR_3) {
   FUNC_1(&VAR_0->dev,
    "Failed to read F34 status: %d.\n", VAR_3);
   return VAR_3;
  }

  if (VAR_4 & FUNC_0(7))
   VAR_2->bootloader_mode = 1;
 } else if (VAR_1->function_number == 0x01) {
  VAR_3 = FUNC_3(VAR_0, VAR_1->data_base_addr, &VAR_4);
  if (VAR_3) {
   FUNC_1(&VAR_0->dev,
    "Failed to read F01 status: %d.\n", VAR_3);
   return VAR_3;
  }

  if (VAR_4 & FUNC_0(6))
   VAR_2->bootloader_mode = 1;
 }

 return 0;
}
