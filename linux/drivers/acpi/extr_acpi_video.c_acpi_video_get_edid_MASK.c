
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* pointer; } ;
union acpi_object {scalar_t__ type; TYPE_4__ buffer; } ;
struct TYPE_7__ {int lcd; int dvi; int tvout; int crt; } ;
struct TYPE_6__ {int _DDC; } ;
struct acpi_video_device {int device_id; TYPE_3__ flags; TYPE_2__ cap; } ;
struct acpi_video_bus {int attached_count; TYPE_1__* attached_array; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
struct TYPE_5__ {struct acpi_video_device* bind_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct acpi_video_bus* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_video_device*,union acpi_object**,int) ;

int FUNC_3(struct acpi_device *VAR_3, int VAR_4, int VAR_5,
   void **VAR_6)
{
 struct acpi_video_bus *VAR_7;
 struct acpi_video_device *VAR_8;
 union acpi_object *VAR_9 = ((void*)0);
 acpi_status VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_3 || !FUNC_1(VAR_3))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_3);

 for (VAR_11 = 0; VAR_11 < VAR_7->attached_count; VAR_11++) {
  VAR_8 = VAR_7->attached_array[VAR_11].bind_info;
  VAR_12 = 256;

  if (!VAR_8)
   continue;

  if (!VAR_8->cap._DDC)
   continue;

  if (VAR_4) {
   switch (VAR_4) {
   case 131:
    if (!VAR_8->flags.crt)
     continue;
    break;
   case 128:
    if (!VAR_8->flags.tvout)
     continue;
    break;
   case 130:
    if (!VAR_8->flags.dvi)
     continue;
    break;
   case 129:
    if (!VAR_8->flags.lcd)
     continue;
    break;
   }
  } else if (VAR_8->device_id != VAR_5) {
   continue;
  }

  VAR_10 = FUNC_2(VAR_8, &VAR_9, VAR_12);

  if (FUNC_0(VAR_10) || !VAR_9 ||
      VAR_9->type != VAR_0) {
   VAR_12 = 128;
   VAR_10 = FUNC_2(VAR_8, &VAR_9,
       VAR_12);
   if (FUNC_0(VAR_10) || !VAR_9 ||
       VAR_9->type != VAR_0) {
    continue;
   }
  }

  *VAR_6 = VAR_9->buffer.pointer;
  return VAR_12;
 }

 return -VAR_2;
}
