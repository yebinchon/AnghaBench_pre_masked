
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct serio {char* phys; int dev; TYPE_2__ id; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_7__ {int version; int product; int vendor; int bustype; } ;
struct input_dev {TYPE_4__ dev; TYPE_3__ id; int phys; int name; } ;
struct TYPE_5__ {int state; scalar_t__ offset; scalar_t__ ibuf; } ;
struct fsia6b {struct input_dev* dev; int phys; TYPE_1__ packet; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int * VAR_10 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int,int,int,int) ;
 int FUNC_5 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_6 (struct fsia6b*) ;
 struct fsia6b* FUNC_7 (int,int ) ;
 int FUNC_8 (struct serio*) ;
 int FUNC_9 (struct serio*,struct serio_driver*) ;
 int FUNC_10 (struct serio*,struct fsia6b*) ;
 int FUNC_11 (int ,int,char*,char*) ;
 char* VAR_11 ;

__attribute__((used)) static int FUNC_12(struct serio *VAR_12, struct serio_driver *VAR_13)
{
 struct fsia6b *VAR_14;
 struct input_dev *VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = 0;

 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_4;

 VAR_14->packet.ibuf = 0;
 VAR_14->packet.offset = 0;
 VAR_14->packet.state = VAR_9;

 FUNC_10(VAR_12, VAR_14);

 VAR_15 = FUNC_1();
 if (!VAR_15) {
  VAR_16 = -VAR_4;
  goto fail1;
 }
 VAR_14->dev = VAR_15;

 FUNC_11(VAR_14->phys, sizeof(VAR_14->phys), "%s/input0", VAR_12->phys);

 VAR_15->name = VAR_2;
 VAR_15->phys = VAR_14->phys;
 VAR_15->id.bustype = VAR_1;
 VAR_15->id.vendor = VAR_8;
 VAR_15->id.product = VAR_12->id.id;
 VAR_15->id.version = 0x0100;
 VAR_15->dev.parent = &VAR_12->dev;

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++)
  FUNC_4(VAR_15, VAR_10[VAR_17],
         1000, 2000, 2, 2);


 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
  if (VAR_11[VAR_17] < '0' || VAR_11[VAR_17] > '3') {
   FUNC_0(&VAR_14->dev->dev,
    "Invalid switch configuration supplied for fsia6b.\n");
   VAR_16 = -VAR_3;
   goto fail2;
  }

  for (VAR_18 = '1'; VAR_18 <= VAR_11[VAR_17]; VAR_18++) {
   FUNC_5(VAR_15, VAR_5, VAR_0 + VAR_19);
   VAR_19++;
  }
 }

 VAR_16 = FUNC_9(VAR_12, VAR_13);
 if (VAR_16)
  goto fail2;

 VAR_16 = FUNC_3(VAR_14->dev);
 if (VAR_16)
  goto fail3;

 return 0;

fail3: FUNC_8(VAR_12);
fail2: FUNC_2(VAR_15);
fail1: FUNC_10(VAR_12, ((void*)0));
 FUNC_6(VAR_14);
 return VAR_16;
}
