
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* parent; } ;
struct TYPE_8__ {int type; } ;
struct serio {int name; TYPE_6__ dev; struct ams_delta_serio* port_data; int phys; int close; int open; TYPE_1__ id; } ;
struct TYPE_9__ {int platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct ams_delta_serio {struct serio* serio; int vcc; int fiq_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_6__*,char*,int ) ;
 char* FUNC_4 (TYPE_2__*) ;
 struct ams_delta_serio* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int,int ,int ,int ,struct ams_delta_serio*) ;
 struct serio* FUNC_8 (int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct ams_delta_serio*) ;
 int FUNC_11 (struct serio*) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_12)
{
 struct ams_delta_serio *VAR_13;
 struct serio *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_5(&VAR_12->dev, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->fiq_buffer = VAR_12->dev.platform_data;
 if (!VAR_13->fiq_buffer)
  return -VAR_1;

 VAR_13->vcc = FUNC_6(&VAR_12->dev, "vcc");
 if (FUNC_0(VAR_13->vcc)) {
  VAR_16 = FUNC_1(VAR_13->vcc);
  FUNC_2(&VAR_12->dev, "regulator request failed (%d)\n", VAR_16);
  if (VAR_16 == -VAR_2)
   VAR_16 = -VAR_5;
  return VAR_16;
 }

 VAR_15 = FUNC_9(VAR_12, 0);
 if (VAR_15 < 0)
  return -VAR_4;

 VAR_16 = FUNC_7(&VAR_12->dev, VAR_15, VAR_10,
          VAR_7, VAR_0, VAR_13);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_12->dev, "IRQ request failed (%d)\n", VAR_16);
  return VAR_16;
 }

 VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_3;

 VAR_13->serio = VAR_14;

 VAR_14->id.type = VAR_8;
 VAR_14->open = VAR_11;
 VAR_14->close = VAR_9;
 FUNC_12(VAR_14->name, "AMS DELTA keyboard adapter", sizeof(VAR_14->name));
 FUNC_12(VAR_14->phys, FUNC_4(&VAR_12->dev), sizeof(VAR_14->phys));
 VAR_14->dev.parent = &VAR_12->dev;
 VAR_14->port_data = VAR_13;

 FUNC_11(VAR_14);

 FUNC_10(VAR_12, VAR_13);

 FUNC_3(&VAR_14->dev, "%s\n", VAR_14->name);

 return 0;
}
