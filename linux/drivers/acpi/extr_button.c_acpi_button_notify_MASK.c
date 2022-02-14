
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct input_dev {int users; int keybit; int mutex; } ;
struct TYPE_2__ {int device_class; } ;
struct acpi_device {int dev; TYPE_1__ pnp; } ;
struct acpi_button {int pushed; int suspended; struct input_dev* input; int type; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ) ;
 struct acpi_button* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct input_dev*,int,int) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct acpi_device *VAR_4, u32 VAR_5)
{
 struct acpi_button *VAR_6 = FUNC_2(VAR_4);
 struct input_dev *VAR_7;
 int VAR_8;

 switch (VAR_5) {
 case 128:
  VAR_5 = 129;

 case 129:
  VAR_7 = VAR_6->input;
  if (VAR_6->type == VAR_0) {
   FUNC_8(&VAR_6->input->mutex);
   VAR_8 = VAR_6->input->users;
   FUNC_9(&VAR_6->input->mutex);
   if (VAR_8)
    FUNC_3(VAR_4, 1);
  } else {
   int VAR_9;

   FUNC_4(&VAR_4->dev);
   if (VAR_6->suspended)
    break;

   VAR_9 = FUNC_10(VAR_3, VAR_7->keybit) ?
      VAR_3 : VAR_2;
   FUNC_6(VAR_7, VAR_9, 1);
   FUNC_7(VAR_7);
   FUNC_6(VAR_7, VAR_9, 0);
   FUNC_7(VAR_7);

   FUNC_1(
     VAR_4->pnp.device_class,
     FUNC_5(&VAR_4->dev),
     VAR_5, ++VAR_6->pushed);
  }
  break;
 default:
  FUNC_0((VAR_1,
      "Unsupported event [0x%x]\n", VAR_5));
  break;
 }
}
