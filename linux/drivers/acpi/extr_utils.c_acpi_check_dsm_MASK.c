
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__* pointer; } ;
struct TYPE_3__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_2__ buffer; TYPE_1__ integer; } ;
typedef int u64 ;
typedef int guid_t ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 union acpi_object* FUNC_1 (int ,int const*,int,int ,int *) ;

bool FUNC_2(acpi_handle VAR_2, const guid_t *VAR_3, u64 VAR_4, u64 VAR_5)
{
 int VAR_6;
 u64 VAR_7 = 0;
 union acpi_object *VAR_8;

 if (VAR_5 == 0)
  return 0;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, 0, ((void*)0));
 if (!VAR_8)
  return 0;


 if (VAR_8->type == VAR_1)
  VAR_7 = VAR_8->integer.value;
 else if (VAR_8->type == VAR_0)
  for (VAR_6 = 0; VAR_6 < VAR_8->buffer.length && VAR_6 < 8; VAR_6++)
   VAR_7 |= (((u64)VAR_8->buffer.pointer[VAR_6]) << (VAR_6 * 8));
 FUNC_0(VAR_8);





 if ((VAR_7 & 0x1) && (VAR_7 & VAR_5) == VAR_5)
  return 1;

 return 0;
}
