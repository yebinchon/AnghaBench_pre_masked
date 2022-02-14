
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {int* evbit; int keybit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int phys; int name; } ;
struct analog_port {int* axes; int buttons; int initial; int fuzz; TYPE_3__* gameport; } ;
struct analog {int mask; struct input_dev* dev; int * buttons; int phys; int name; } ;
struct TYPE_6__ {char* phys; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct analog*,int*,int ,int ) ;
 int* VAR_12 ;
 int* VAR_13 ;
 int * VAR_14 ;
 int FUNC_2 (struct analog*) ;
 int VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int,int,int,int ,int) ;
 int FUNC_7 (struct input_dev*,struct analog_port*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct analog_port *VAR_18, struct analog *VAR_19, int VAR_20)
{
 struct input_dev *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30;

 FUNC_2(VAR_19);
 FUNC_9(VAR_19->phys, sizeof(VAR_19->phys),
   "%s/input%d", VAR_18->gameport->phys, VAR_20);
 VAR_19->buttons = (VAR_19->mask & VAR_2) ? VAR_16 : VAR_14;

 VAR_19->dev = VAR_21 = FUNC_3();
 if (!VAR_21)
  return -VAR_6;

 VAR_21->name = VAR_19->name;
 VAR_21->phys = VAR_19->phys;
 VAR_21->id.bustype = VAR_5;
 VAR_21->id.vendor = VAR_9;
 VAR_21->id.product = VAR_19->mask >> 4;
 VAR_21->id.version = 0x0100;
 VAR_21->dev.parent = &VAR_18->gameport->dev;

 FUNC_7(VAR_21, VAR_18);

 VAR_21->open = VAR_15;
 VAR_21->close = VAR_11;

 VAR_21->evbit[0] = FUNC_0(VAR_8) | FUNC_0(VAR_7);

 for (VAR_22 = VAR_23 = 0; VAR_22 < 4; VAR_22++)
  if (VAR_19->mask & (1 << VAR_22)) {

   VAR_24 = VAR_10[VAR_23];
   VAR_27 = VAR_18->axes[VAR_22];
   VAR_28 = (VAR_18->axes[0] + VAR_18->axes[1]) >> 1;
   VAR_29 = VAR_28 - VAR_18->axes[VAR_22];
   VAR_29 = VAR_29 > 0 ? VAR_29 : -VAR_29;
   VAR_25 = (VAR_27 >> 3);
   VAR_26 = (VAR_27 >> 3);

   if ((VAR_22 == 2 || VAR_22 == 3) && (VAR_23 == 2 || VAR_23 == 3) && (VAR_29 > (VAR_28 >> 3)))
    VAR_27 = VAR_28;

   if (VAR_19->mask & VAR_4) {
    if (VAR_22 == 2) VAR_27 = VAR_18->axes[VAR_22];
    VAR_25 = VAR_27 - (VAR_27 >> 2);
    VAR_26 = (VAR_27 >> 4);
   }

   FUNC_6(VAR_21, VAR_24, VAR_25, (VAR_27 << 1) - VAR_25, VAR_18->fuzz, VAR_26);
   VAR_23++;
  }

 for (VAR_22 = VAR_23 = 0; VAR_22 < 3; VAR_22++)
  if (VAR_19->mask & VAR_12[VAR_22])
   for (VAR_27 = 0; VAR_27 < 2; VAR_27++) {
    VAR_24 = VAR_13[VAR_23++];
    FUNC_6(VAR_21, VAR_24, -1, 1, 0, 0);
   }

 for (VAR_22 = VAR_23 = 0; VAR_22 < 4; VAR_22++)
  if (VAR_19->mask & (0x10 << VAR_22))
   FUNC_8(VAR_19->buttons[VAR_23++], VAR_21->keybit);

 if (VAR_19->mask & VAR_0)
  for (VAR_22 = 0; VAR_22 < 2; VAR_22++)
   FUNC_8(VAR_19->buttons[VAR_23++], VAR_21->keybit);

 if (VAR_19->mask & VAR_3)
  for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
   FUNC_8(VAR_19->buttons[VAR_23++], VAR_21->keybit);

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  if (VAR_19->mask & (VAR_1 << VAR_22))
   FUNC_8(VAR_17[VAR_22], VAR_21->keybit);

 FUNC_1(VAR_19, VAR_18->axes, VAR_18->initial, VAR_18->buttons);

 VAR_30 = FUNC_5(VAR_19->dev);
 if (VAR_30) {
  FUNC_4(VAR_19->dev);
  return VAR_30;
 }

 return 0;
}
