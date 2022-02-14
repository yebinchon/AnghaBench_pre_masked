
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpihid_map_entry {int * uid; int * hid; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 char* FUNC_1 (struct acpi_device*) ;
 char* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static inline int FUNC_4(struct device *VAR_1,
    struct acpihid_map_entry *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_0(VAR_1);
 const char *VAR_4, *VAR_5;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_2(VAR_3);

 if (!VAR_4 || !(*VAR_4))
  return -VAR_0;

 if (!VAR_5 || !(*VAR_5))
  return FUNC_3(VAR_4, VAR_2->hid);

 if (!(*VAR_2->uid))
  return FUNC_3(VAR_4, VAR_2->hid);

 return (FUNC_3(VAR_4, VAR_2->hid) || FUNC_3(VAR_5, VAR_2->uid));
}
