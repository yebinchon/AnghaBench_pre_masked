
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_device_id {int* aux_firmware_revision; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bmc_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,struct bmc_device*,struct ipmi_device_id*,int *,int *) ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;
 struct bmc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct bmc_device *VAR_3 = FUNC_2(VAR_0);
 struct ipmi_device_id VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(((void*)0), VAR_3, &VAR_4, ((void*)0), ((void*)0));
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_2, 21, "0x%02x 0x%02x 0x%02x 0x%02x\n",
   VAR_4.aux_firmware_revision[3],
   VAR_4.aux_firmware_revision[2],
   VAR_4.aux_firmware_revision[1],
   VAR_4.aux_firmware_revision[0]);
}
