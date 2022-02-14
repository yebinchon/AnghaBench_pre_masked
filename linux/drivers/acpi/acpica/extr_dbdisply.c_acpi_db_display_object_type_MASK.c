
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {size_t count; TYPE_3__* ids; } ;
struct TYPE_6__ {int string; } ;
struct TYPE_5__ {int string; } ;
struct acpi_device_info {int valid; TYPE_4__ compatible_id_list; TYPE_2__ unique_id; TYPE_1__ hardware_id; int * lowest_dstates; int * highest_dstates; int flags; int address; } ;
typedef int acpi_status ;
typedef int acpi_size ;
typedef int acpi_handle ;
struct TYPE_7__ {int string; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_device_info*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct acpi_device_info**) ;
 int FUNC_6 (char*,size_t,...) ;
 int FUNC_7 (char*,int *,int) ;

void FUNC_8(char *VAR_3)
{
 acpi_size VAR_4;
 acpi_handle VAR_5;
 struct acpi_device_info *VAR_6;
 acpi_status VAR_7;
 u32 VAR_8;

 VAR_4 = FUNC_7(VAR_3, ((void*)0), 16);
 VAR_5 = FUNC_3(VAR_4);

 VAR_7 = FUNC_5(VAR_5, &VAR_6);
 if (FUNC_0(VAR_7)) {
  FUNC_6("Could not get object info, %s\n",
          FUNC_4(VAR_7));
  return;
 }

 FUNC_6("ADR: %8.8X%8.8X, Flags: %X\n",
         FUNC_1(VAR_6->address), VAR_6->flags);

 FUNC_6("S1D-%2.2X S2D-%2.2X S3D-%2.2X S4D-%2.2X\n",
         VAR_6->highest_dstates[0], VAR_6->highest_dstates[1],
         VAR_6->highest_dstates[2], VAR_6->highest_dstates[3]);

 FUNC_6("S0W-%2.2X S1W-%2.2X S2W-%2.2X S3W-%2.2X S4W-%2.2X\n",
         VAR_6->lowest_dstates[0], VAR_6->lowest_dstates[1],
         VAR_6->lowest_dstates[2], VAR_6->lowest_dstates[3],
         VAR_6->lowest_dstates[4]);

 if (VAR_6->valid & VAR_1) {
  FUNC_6("HID: %s\n", VAR_6->hardware_id.string);
 }

 if (VAR_6->valid & VAR_2) {
  FUNC_6("UID: %s\n", VAR_6->unique_id.string);
 }

 if (VAR_6->valid & VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_6->compatible_id_list.count; VAR_8++) {
   FUNC_6("CID %u: %s\n", VAR_8,
           VAR_6->compatible_id_list.ids[VAR_8].string);
  }
 }

 FUNC_2(VAR_6);
}
