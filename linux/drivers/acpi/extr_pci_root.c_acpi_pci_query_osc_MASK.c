
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_pci_root {int osc_support_set; int osc_control_set; TYPE_1__* device; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static acpi_status FUNC_2(struct acpi_pci_root *VAR_6,
     u32 VAR_7,
     u32 *VAR_8)
{
 acpi_status VAR_9;
 u32 VAR_10, VAR_11[3];

 VAR_7 &= VAR_2;
 VAR_7 |= VAR_6->osc_support_set;

 VAR_11[VAR_3] = VAR_4;
 VAR_11[VAR_5] = VAR_7;
 if (VAR_8) {
  *VAR_8 &= VAR_1;
  VAR_11[VAR_0] = *VAR_8 | VAR_6->osc_control_set;
 } else {

  VAR_11[VAR_0] = VAR_6->osc_control_set;
 }

 VAR_9 = FUNC_1(VAR_6->device->handle, VAR_11, &VAR_10);
 if (FUNC_0(VAR_9)) {
  VAR_6->osc_support_set = VAR_7;
  if (VAR_8)
   *VAR_8 = VAR_10;
 }
 return VAR_9;
}
