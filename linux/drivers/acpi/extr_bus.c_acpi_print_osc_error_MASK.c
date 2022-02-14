
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int length; scalar_t__ pointer; } ;
struct acpi_osc_context {TYPE_1__ cap; int uuid_str; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(acpi_handle VAR_0,
     struct acpi_osc_context *VAR_1, char *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, "(%s): %s\n", VAR_1->uuid_str, VAR_2);

 FUNC_1("_OSC request data:");
 for (VAR_3 = 0; VAR_3 < VAR_1->cap.length; VAR_3 += sizeof(u32))
  FUNC_1(" %x", *((u32 *)(VAR_1->cap.pointer + VAR_3)));

 FUNC_1("\n");
}
