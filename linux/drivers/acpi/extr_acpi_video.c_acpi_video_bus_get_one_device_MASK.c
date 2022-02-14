
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_video_device_attrib {int display_type; scalar_t__ bios_can_detect; scalar_t__ device_id_scheme; } ;
struct TYPE_2__ {int crt; int tvout; int dvi; int lcd; int unknown; int bios; } ;
struct acpi_video_device {unsigned long long device_id; int entry; TYPE_1__ flags; int switch_brightness_work; struct acpi_device* dev; struct acpi_video_bus* video; } ;
struct acpi_video_bus {int device_list_lock; int video_device_list; } ;
struct acpi_device {struct acpi_video_device* driver_data; int handle; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (int ,char*,int *,unsigned long long*) ;
 int FUNC_5 (struct acpi_video_bus*,struct acpi_video_device*) ;
 int FUNC_6 (struct acpi_video_device*) ;
 struct acpi_video_device_attrib* FUNC_7 (struct acpi_video_bus*,unsigned long long) ;
 int FUNC_8 (struct acpi_video_bus*,unsigned long long) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct acpi_video_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int
FUNC_14(struct acpi_device *VAR_6,
         struct acpi_video_bus *VAR_7)
{
 unsigned long long VAR_8;
 int VAR_9, VAR_10;
 struct acpi_video_device *VAR_11;
 struct acpi_video_device_attrib *VAR_12;

 VAR_9 =
     FUNC_4(VAR_6->handle, "_ADR", ((void*)0), &VAR_8);

 if (FUNC_0(VAR_9))
  return 0;

 VAR_11 = FUNC_9(sizeof(struct acpi_video_device), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_13(FUNC_3(VAR_6), VAR_1);
 FUNC_13(FUNC_2(VAR_6), VAR_0);
 VAR_6->driver_data = VAR_11;

 VAR_11->device_id = VAR_8;
 VAR_11->video = VAR_7;
 VAR_11->dev = VAR_6;
 FUNC_1(&VAR_11->switch_brightness_work,
     VAR_4);

 VAR_12 = FUNC_7(VAR_7, VAR_8);

 if (VAR_12 && (VAR_12->device_id_scheme || VAR_5)) {
  switch (VAR_12->display_type) {
  case 134:
   VAR_11->flags.crt = 1;
   break;
  case 128:
   VAR_11->flags.tvout = 1;
   break;
  case 133:
   VAR_11->flags.dvi = 1;
   break;
  case 132:
   VAR_11->flags.lcd = 1;
   break;
  default:
   VAR_11->flags.unknown = 1;
   break;
  }
  if (VAR_12->bios_can_detect)
   VAR_11->flags.bios = 1;
 } else {

  VAR_10 = FUNC_8(VAR_7, VAR_8);

  switch (VAR_10 & 0xffe2ffff) {
  case 131:
   VAR_11->flags.crt = 1;
   break;
  case 130:
   VAR_11->flags.lcd = 1;
   break;
  case 129:
   VAR_11->flags.tvout = 1;
   break;
  default:
   VAR_11->flags.unknown = 1;
  }
 }

 FUNC_5(VAR_7, VAR_11);
 FUNC_6(VAR_11);

 FUNC_11(&VAR_7->device_list_lock);
 FUNC_10(&VAR_11->entry, &VAR_7->video_device_list);
 FUNC_12(&VAR_7->device_list_lock);

 return VAR_9;
}
