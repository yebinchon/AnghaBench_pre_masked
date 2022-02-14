
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct graphics_object_id {int dummy; } ;
struct dc_bios {int dummy; } ;
struct connector_device_tag_info {int dev_id; int acpi_device; } ;
struct bios_parser {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_5__ {int usDeviceID; int ulACPIDeviceEnum; } ;
struct TYPE_4__ {size_t ucNumberOfDevice; TYPE_2__* asDeviceTag; } ;
typedef int ATOM_OBJECT ;
typedef TYPE_1__ ATOM_CONNECTOR_DEVICE_TAG_RECORD ;
typedef TYPE_2__ ATOM_CONNECTOR_DEVICE_TAG ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct bios_parser*,int *,TYPE_1__**) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct bios_parser*,struct graphics_object_id) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static enum bp_result FUNC_7(
 struct dc_bios *VAR_3,
 struct graphics_object_id VAR_4,
 uint32_t VAR_5,
 struct connector_device_tag_info *VAR_6)
{
 struct bios_parser *VAR_7 = FUNC_0(VAR_3);
 ATOM_OBJECT *VAR_8;
 ATOM_CONNECTOR_DEVICE_TAG_RECORD *VAR_9 = ((void*)0);
 ATOM_CONNECTOR_DEVICE_TAG *VAR_10;

 if (!VAR_6)
  return VAR_0;


 VAR_8 = FUNC_4(VAR_7, VAR_4);

 if (!VAR_8) {
  FUNC_1();
  return VAR_0;
 }

 if (FUNC_2(VAR_7, VAR_8, &VAR_9)
  != VAR_2)
  return VAR_1;

 if (VAR_5 >= VAR_9->ucNumberOfDevice)
  return VAR_1;

 VAR_10 = &VAR_9->asDeviceTag[VAR_5];

 VAR_6->acpi_device = FUNC_6(VAR_10->ulACPIDeviceEnum);
 VAR_6->dev_id =
  FUNC_3(FUNC_5(VAR_10->usDeviceID));

 return VAR_2;
}
