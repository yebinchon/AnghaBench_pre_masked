
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u8 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ vendor; scalar_t__ product; int bustype; } ;
struct TYPE_11__ {struct device* parent; } ;
struct input_dev {char* name; int* evbit; struct ff_device* ff; int ffbit; int keybit; TYPE_2__ id; TYPE_5__ dev; int close; int open; } ;
struct TYPE_9__ {char* name; int end; int * sibling; int * child; int * parent; int flags; scalar_t__ start; } ;
struct TYPE_7__ {int buf; } ;
struct iforce {struct input_dev* dev; TYPE_4__* type; TYPE_3__ device_memory; int xmit_data; TYPE_1__ xmit; int mem_mutex; int xmit_lock; int wait; } ;
struct ff_device {int playback; int (* set_autocenter ) (struct input_dev*,int ) ;int set_gain; int erase; int upload; } ;
struct device {int dummy; } ;
struct TYPE_10__ {scalar_t__ idvendor; scalar_t__ idproduct; char* name; scalar_t__* btn; short* abs; scalar_t__* ff; } ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 void* FUNC_3 (char*) ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 int FUNC_4 (struct iforce*,char*,int,char*) ;
 int VAR_11 ;
 int FUNC_5 (struct iforce*,char,char*,size_t*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct input_dev*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int *) ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*,int) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*,short,int,int,int,int) ;
 int FUNC_13 (struct input_dev*,struct iforce*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (short,int ) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct device *VAR_16, u16 VAR_17,
         struct iforce *VAR_18)
{
 struct input_dev *VAR_19;
 struct ff_device *VAR_20;
 u8 VAR_21[] = "CEOV";
 u8 VAR_22[VAR_7];
 size_t VAR_23;
 int VAR_24, VAR_25;
 int VAR_26 = 0;

 VAR_19 = FUNC_8();
 if (!VAR_19)
  return -VAR_1;

 FUNC_7(&VAR_18->wait);
 FUNC_16(&VAR_18->xmit_lock);
 FUNC_14(&VAR_18->mem_mutex);
 VAR_18->xmit.buf = VAR_18->xmit_data;
 VAR_18->dev = VAR_19;





 VAR_19->id.bustype = VAR_17;
 VAR_19->dev.parent = VAR_16;

 FUNC_13(VAR_19, VAR_18);

 VAR_19->name = "Unknown I-Force device";
 VAR_19->open = VAR_12;
 VAR_19->close = VAR_9;





 VAR_18->device_memory.name = "I-Force device effect memory";
 VAR_18->device_memory.start = 0;
 VAR_18->device_memory.end = 200;
 VAR_18->device_memory.flags = VAR_8;
 VAR_18->device_memory.parent = ((void*)0);
 VAR_18->device_memory.child = ((void*)0);
 VAR_18->device_memory.sibling = ((void*)0);





 for (VAR_24 = 0; VAR_24 < 20; VAR_24++)
  if (!FUNC_5(VAR_18, 'O', VAR_22, &VAR_23))
   break;

 if (VAR_24 == 20) {
  FUNC_1(&VAR_19->dev,
   "Timeout waiting for response from device.\n");
  VAR_25 = -VAR_0;
  goto fail;
 }





 if (!FUNC_5(VAR_18, 'M', VAR_22, &VAR_23) || VAR_23 < 3)
  VAR_19->id.vendor = FUNC_3(VAR_22 + 1);
 else
  FUNC_2(&VAR_18->dev->dev, "Device does not respond to id packet M\n");

 if (!FUNC_5(VAR_18, 'P', VAR_22, &VAR_23) || VAR_23 < 3)
  VAR_19->id.product = FUNC_3(VAR_22 + 1);
 else
  FUNC_2(&VAR_18->dev->dev, "Device does not respond to id packet P\n");

 if (!FUNC_5(VAR_18, 'B', VAR_22, &VAR_23) || VAR_23 < 3)
  VAR_18->device_memory.end = FUNC_3(VAR_22 + 1);
 else
  FUNC_2(&VAR_18->dev->dev, "Device does not respond to id packet B\n");

 if (!FUNC_5(VAR_18, 'N', VAR_22, &VAR_23) || VAR_23 < 2)
  VAR_26 = VAR_22[1];
 else
  FUNC_2(&VAR_18->dev->dev, "Device does not respond to id packet N\n");


 if (VAR_26 > VAR_6) {
  FUNC_2(&VAR_18->dev->dev, "Limiting number of effects to %d (device reports %d)\n",
         VAR_6, VAR_26);
  VAR_26 = VAR_6;
 }





 for (VAR_24 = 0; VAR_21[VAR_24]; VAR_24++)
  if (!FUNC_5(VAR_18, VAR_21[VAR_24], VAR_22, &VAR_23))
   FUNC_4(VAR_18, "info",
        (VAR_5 & 0xff00) | VAR_23, VAR_22);




 FUNC_6(VAR_19, 0);





 for (VAR_24 = 0; VAR_10[VAR_24].idvendor; VAR_24++)
  if (VAR_10[VAR_24].idvendor == VAR_19->id.vendor &&
      VAR_10[VAR_24].idproduct == VAR_19->id.product)
   break;

 VAR_18->type = VAR_10 + VAR_24;
 VAR_19->name = VAR_18->type->name;





 VAR_19->evbit[0] = FUNC_0(VAR_4) | FUNC_0(VAR_2) |
  FUNC_0(VAR_3);

 for (VAR_24 = 0; VAR_18->type->btn[VAR_24] >= 0; VAR_24++)
  FUNC_15(VAR_18->type->btn[VAR_24], VAR_19->keybit);

 for (VAR_24 = 0; VAR_18->type->abs[VAR_24] >= 0; VAR_24++) {

  signed short VAR_27 = VAR_18->type->abs[VAR_24];

  switch (VAR_27) {
  case 129:
  case 128:
  case 130:
   FUNC_12(VAR_19, VAR_27, -1920, 1920, 16, 128);
   FUNC_15(VAR_27, VAR_19->ffbit);
   break;

  case 131:
  case 137:
  case 138:
   FUNC_12(VAR_19, VAR_27, 0, 255, 0, 0);
   break;

  case 132:
   FUNC_12(VAR_19, VAR_27, -128, 127, 0, 0);
   break;

  case 136:
  case 135:
  case 134:
  case 133:
   FUNC_12(VAR_19, VAR_27, -1, 1, 0, 0);
   break;
  }
 }

 if (VAR_26) {

  for (VAR_24 = 0; VAR_18->type->ff[VAR_24] >= 0; VAR_24++)
   FUNC_15(VAR_18->type->ff[VAR_24], VAR_19->ffbit);

  VAR_25 = FUNC_9(VAR_19, VAR_26);
  if (VAR_25)
   goto fail;

  VAR_20 = VAR_19->ff;
  VAR_20->upload = VAR_15;
  VAR_20->erase = VAR_11;
  VAR_20->set_gain = VAR_14;
  VAR_20->set_autocenter = FUNC_6;
  VAR_20->playback = VAR_13;
 }




 VAR_25 = FUNC_11(VAR_18->dev);
 if (VAR_25)
  goto fail;

 return 0;

 fail: FUNC_10(VAR_19);
 return VAR_25;
}
