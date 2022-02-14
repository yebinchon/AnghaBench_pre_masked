
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_device**,int ,int,unsigned long long) ;
 int FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (int ,int*,unsigned long long*) ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (struct acpi_device*) ;

__attribute__((used)) static acpi_status FUNC_6(acpi_handle VAR_3, u32 VAR_4,
          void *VAR_5, void **VAR_6)
{
 struct acpi_device *VAR_7 = ((void*)0);
 int VAR_8;
 unsigned long long VAR_9;
 int VAR_10;

 FUNC_2(VAR_3, &VAR_7);
 if (VAR_7)
  goto out;

 VAR_10 = FUNC_3(VAR_3, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_2;

 if (VAR_8 == VAR_0) {
  FUNC_0(VAR_3);
  return VAR_2;
 }

 FUNC_1(&VAR_7, VAR_3, VAR_8, VAR_9);
 if (!VAR_7)
  return VAR_1;

 FUNC_5(VAR_7);
 FUNC_4(VAR_7);

 out:
 if (!*VAR_6)
  *VAR_6 = VAR_7;

 return VAR_2;
}
