
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct acpi_video_bus {struct input_dev* input; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_video_bus* FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 (struct acpi_device*,int,int ) ;
 int FUNC_3 (struct acpi_video_bus*) ;
 int FUNC_4 (struct acpi_video_bus*) ;
 int FUNC_5 (struct input_dev*,int,int) ;
 int FUNC_6 (struct input_dev*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct acpi_device *VAR_6, u32 VAR_7)
{
 struct acpi_video_bus *VAR_8 = FUNC_1(VAR_6);
 struct input_dev *VAR_9;
 int VAR_10 = 0;

 if (!VAR_8 || !VAR_8->input)
  return;

 VAR_9 = VAR_8->input;

 switch (VAR_7) {
 case 128:

  VAR_10 = VAR_1;
  break;

 case 129:

  FUNC_3(VAR_8);
  FUNC_4(VAR_8);
  VAR_10 = VAR_1;
  break;

 case 132:
  VAR_10 = VAR_1;
  break;
 case 131:
  VAR_10 = VAR_2;
  break;
 case 130:
  VAR_10 = VAR_3;
  break;

 default:
  FUNC_0((VAR_0,
      "Unsupported event [0x%x]\n", VAR_7));
  break;
 }

 if (FUNC_2(VAR_6, VAR_7, 0))

  VAR_10 = 0;

 if (VAR_10 && (VAR_5 & VAR_4)) {
  FUNC_5(VAR_9, VAR_10, 1);
  FUNC_6(VAR_9);
  FUNC_5(VAR_9, VAR_10, 0);
  FUNC_6(VAR_9);
 }

 return;
}
