
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_video_device {scalar_t__ backlight; struct acpi_video_bus* video; struct acpi_device* dev; } ;
struct acpi_video_bus {struct input_dev* input; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct acpi_device*,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct acpi_video_device*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct input_dev*,int,int) ;
 int FUNC_5 (struct input_dev*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6(acpi_handle VAR_10, u32 VAR_11, void *VAR_12)
{
 struct acpi_video_device *VAR_13 = VAR_12;
 struct acpi_device *VAR_14 = ((void*)0);
 struct acpi_video_bus *VAR_15;
 struct input_dev *VAR_16;
 int VAR_17 = 0;

 if (!VAR_13)
  return;

 VAR_14 = VAR_13->dev;
 VAR_15 = VAR_13->video;
 VAR_16 = VAR_15->input;

 if (VAR_8 > 0) {
  if (VAR_13->backlight)
   FUNC_2(VAR_13->backlight,
            VAR_1);
  FUNC_1(VAR_14, VAR_11, 0);
  return;
 }

 switch (VAR_11) {
 case 132:
  FUNC_3(VAR_13, VAR_11);
  VAR_17 = VAR_4;
  break;
 case 129:
  FUNC_3(VAR_13, VAR_11);
  VAR_17 = VAR_3;
  break;
 case 131:
  FUNC_3(VAR_13, VAR_11);
  VAR_17 = VAR_2;
  break;
 case 128:
  FUNC_3(VAR_13, VAR_11);
  VAR_17 = VAR_5;
  break;
 case 130:
  FUNC_3(VAR_13, VAR_11);
  VAR_17 = VAR_6;
  break;
 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_11));
  break;
 }

 FUNC_1(VAR_14, VAR_11, 0);

 if (VAR_17 && (VAR_9 & VAR_7)) {
  FUNC_4(VAR_16, VAR_17, 1);
  FUNC_5(VAR_16);
  FUNC_4(VAR_16, VAR_17, 0);
  FUNC_5(VAR_16);
 }

 return;
}
