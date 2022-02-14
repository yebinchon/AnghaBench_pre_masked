
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tmdc_port {unsigned char mode; scalar_t__* abs; unsigned char absc; int* btnc; struct input_dev* dev; int * btn; int phys; int name; int * btno; } ;
struct tmdc_model {unsigned char id; scalar_t__* axes; unsigned char abs; int* btnc; char* name; int hats; int * btno; int * buttons; } ;
struct tmdc {TYPE_3__* gameport; struct tmdc_port** port; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {unsigned char product; int version; int vendor; int bustype; } ;
struct input_dev {int* evbit; int keybit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int phys; int name; } ;
struct TYPE_6__ {char* phys; int dev; } ;


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
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,scalar_t__,int,int,int,int) ;
 int FUNC_5 (struct input_dev*,struct tmdc*) ;
 int FUNC_6 (struct tmdc_port*) ;
 struct tmdc_port* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,char*,...) ;
 scalar_t__* VAR_11 ;
 int VAR_12 ;
 struct tmdc_model* VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_10(struct tmdc *VAR_15, int VAR_16, unsigned char *VAR_17)
{
 const struct tmdc_model *VAR_18;
 struct tmdc_port *VAR_19;
 struct input_dev *VAR_20;
 int VAR_21, VAR_22, VAR_23 = 0;
 int VAR_24;

 VAR_15->port[VAR_16] = VAR_19 = FUNC_7(sizeof (struct tmdc_port), VAR_5);
 VAR_20 = FUNC_1();
 if (!VAR_19 || !VAR_20) {
  VAR_24 = -VAR_1;
  goto fail;
 }

 VAR_19->mode = VAR_17[VAR_10];

 for (VAR_18 = VAR_13; VAR_18->id && VAR_18->id != VAR_19->mode; VAR_18++)
             ;

 VAR_19->abs = VAR_18->axes;
 VAR_19->btn = VAR_18->buttons;

 if (!VAR_18->id) {
  VAR_19->absc = VAR_17[VAR_9] >> 4;
  for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
   VAR_19->btnc[VAR_21] = VAR_21 < (VAR_17[VAR_9] & 0xf) ? 8 : 0;
 } else {
  VAR_19->absc = VAR_18->abs;
  for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
   VAR_19->btnc[VAR_21] = VAR_18->btnc[VAR_21];
 }

 for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
  VAR_19->btno[VAR_21] = VAR_18->btno[VAR_21];

 FUNC_9(VAR_19->name, sizeof(VAR_19->name), VAR_18->name,
   VAR_19->absc, (VAR_17[VAR_9] & 0xf) << 3, VAR_19->mode);
 FUNC_9(VAR_19->phys, sizeof(VAR_19->phys), "%s/input%d", VAR_15->gameport->phys, VAR_21);

 VAR_19->dev = VAR_20;

 VAR_20->name = VAR_19->name;
 VAR_20->phys = VAR_19->phys;
 VAR_20->id.bustype = VAR_0;
 VAR_20->id.vendor = VAR_4;
 VAR_20->id.product = VAR_18->id;
 VAR_20->id.version = 0x0100;
 VAR_20->dev.parent = &VAR_15->gameport->dev;

 FUNC_5(VAR_20, VAR_15);

 VAR_20->open = VAR_14;
 VAR_20->close = VAR_12;

 VAR_20->evbit[0] = FUNC_0(VAR_3) | FUNC_0(VAR_2);

 for (VAR_21 = 0; VAR_21 < VAR_19->absc && VAR_21 < VAR_6; VAR_21++)
  if (VAR_19->abs[VAR_21] >= 0)
   FUNC_4(VAR_20, VAR_19->abs[VAR_21], 8, 248, 2, 4);

 for (VAR_21 = 0; VAR_21 < VAR_18->hats && VAR_21 < VAR_7; VAR_21++)
  FUNC_4(VAR_20, VAR_11[VAR_21], -1, 1, 0, 0);

 for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {
  for (VAR_22 = 0; VAR_22 < VAR_19->btnc[VAR_21] && VAR_22 < VAR_8; VAR_22++)
   FUNC_8(VAR_19->btn[VAR_22 + VAR_23], VAR_20->keybit);
  VAR_23 += VAR_19->btnc[VAR_21];
 }

 VAR_24 = FUNC_3(VAR_19->dev);
 if (VAR_24)
  goto fail;

 return 0;

 fail: FUNC_2(VAR_20);
 FUNC_6(VAR_19);
 return VAR_24;
}
