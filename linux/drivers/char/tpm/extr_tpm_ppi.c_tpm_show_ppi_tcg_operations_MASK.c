
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int acpi_dev_handle; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 struct tpm_chip* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct tpm_chip *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_4->acpi_dev_handle, VAR_3, 0,
       VAR_0);
}
