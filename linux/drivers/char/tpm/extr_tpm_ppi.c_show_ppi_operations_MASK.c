
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int type; } ;
union acpi_object {TYPE_1__ integer; } ;
typedef int u32 ;
typedef int ssize_t ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 union acpi_object FUNC_1 (int,union acpi_object*) ;
 int VAR_0 ;
 int FUNC_2 (char**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 (char*,int ,char*,int,int,char*) ;
 union acpi_object* FUNC_5 (int ,int,int ,union acpi_object*,int ) ;
 int VAR_6 ;

__attribute__((used)) static ssize_t FUNC_6(acpi_handle VAR_7, char *VAR_8, u32 VAR_9,
       u32 VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 char *VAR_13 = VAR_8;
 union acpi_object *VAR_14, VAR_15;
 union acpi_object VAR_16 = FUNC_1(1, &VAR_15);

 static char *VAR_17[] = {
  "Not implemented",
  "BIOS only",
  "Blocked for OS by BIOS",
  "User required",
  "User not required",
 };

 if (!FUNC_3(VAR_7, &VAR_6, VAR_5,
       1 << VAR_4))
  return -VAR_2;

 VAR_15.integer.type = VAR_0;
 for (VAR_11 = VAR_9; VAR_11 <= VAR_10; VAR_11++) {
  VAR_15.integer.value = VAR_11;
  VAR_14 = FUNC_5(VAR_7, VAR_4,
       VAR_0, &VAR_16,
       VAR_5);
  if (!VAR_14) {
   return -VAR_1;
  } else {
   VAR_12 = VAR_14->integer.value;
   FUNC_0(VAR_14);
  }

  if (VAR_12 > 0 && VAR_12 < FUNC_2(VAR_17))
   VAR_13 += FUNC_4(VAR_13, VAR_3, "%d %d: %s\n",
      VAR_11, VAR_12, VAR_17[VAR_12]);
 }

 return VAR_13 - VAR_8;
}
