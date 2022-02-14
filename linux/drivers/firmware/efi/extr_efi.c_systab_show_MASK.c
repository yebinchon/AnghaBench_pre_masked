
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ mps; scalar_t__ acpi20; scalar_t__ acpi; scalar_t__ smbios3; scalar_t__ smbios; scalar_t__ hcdp; scalar_t__ boot_info; scalar_t__ uga; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_3,
      struct kobj_attribute *VAR_4, char *VAR_5)
{
 char *VAR_6 = VAR_5;

 if (!VAR_3 || !VAR_5)
  return -VAR_1;

 if (VAR_2.mps != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "MPS=0x%lx\n", VAR_2.mps);
 if (VAR_2.acpi20 != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "ACPI20=0x%lx\n", VAR_2.acpi20);
 if (VAR_2.acpi != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "ACPI=0x%lx\n", VAR_2.acpi);





 if (VAR_2.smbios3 != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "SMBIOS3=0x%lx\n", VAR_2.smbios3);
 if (VAR_2.smbios != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "SMBIOS=0x%lx\n", VAR_2.smbios);
 if (VAR_2.hcdp != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "HCDP=0x%lx\n", VAR_2.hcdp);
 if (VAR_2.boot_info != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "BOOTINFO=0x%lx\n", VAR_2.boot_info);
 if (VAR_2.uga != VAR_0)
  VAR_6 += FUNC_0(VAR_6, "UGA=0x%lx\n", VAR_2.uga);

 return VAR_6 - VAR_5;
}
