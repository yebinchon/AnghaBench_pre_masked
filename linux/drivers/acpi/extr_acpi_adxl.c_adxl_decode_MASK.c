
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int type; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {TYPE_2__ integer; TYPE_1__ package; int type; } ;
typedef int u64 ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union acpi_object* FUNC_1 (int ,union acpi_object*) ;

int FUNC_2(u64 VAR_7, u64 VAR_8[])
{
 union acpi_object VAR_9[2], *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_5)
  return -VAR_4;

 VAR_9[0].type = VAR_1;
 VAR_9[0].package.count = 1;
 VAR_9[0].package.elements = &VAR_9[1];
 VAR_9[1].integer.type = VAR_0;
 VAR_9[1].integer.value = VAR_7;

 VAR_10 = FUNC_1(VAR_2, VAR_9);
 if (!VAR_10)
  return -VAR_3;

 VAR_11 = VAR_10->package.elements + 1;
 VAR_13 = VAR_11->package.count;
 if (VAR_13 != VAR_6) {
  FUNC_0(VAR_10);
  return -VAR_3;
 }
 VAR_11 = VAR_11->package.elements;

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  VAR_8[VAR_12] = VAR_11[VAR_12].integer.value;

 FUNC_0(VAR_10);

 return 0;
}
