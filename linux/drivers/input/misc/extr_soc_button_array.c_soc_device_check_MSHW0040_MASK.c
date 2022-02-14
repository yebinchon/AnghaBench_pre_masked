
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {TYPE_1__ integer; } ;
typedef scalar_t__ u64 ;
struct device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_object* FUNC_2 (int ,int *,int ,int ,int *,int ) ;
 int FUNC_3 (struct device*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5)
{
 acpi_handle VAR_6 = FUNC_1(VAR_5);
 union acpi_object *VAR_7;
 u64 VAR_8 = 0;


 VAR_7 = FUNC_2(VAR_6, &VAR_4,
      VAR_3,
      VAR_2, ((void*)0),
      VAR_0);

 if (VAR_7) {
  VAR_8 = VAR_7->integer.value;
  FUNC_0(VAR_7);
 }






 if (VAR_8 == 0)
  return -VAR_1;

 FUNC_3(VAR_5, "OEM Platform Revision %llu\n", VAR_8);

 return 0;
}
