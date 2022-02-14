
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int type; } ;
struct serio {TYPE_2__ dev; struct ps2if* port_data; int phys; int name; int close; int open; int write; TYPE_1__ id; } ;
struct resource {int dummy; } ;
struct ps2if {struct serio* io; int base; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct resource*) ;
 struct ps2if* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int ,int ,int ,struct ps2if*) ;
 struct serio* FUNC_8 (int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct ps2if*) ;
 int FUNC_12 (struct serio*) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct ps2if *VAR_10;
 struct resource *VAR_11;
 struct serio *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_6(&VAR_9->dev, sizeof(struct ps2if), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_10(VAR_9, VAR_3, 0);
 VAR_10->base = FUNC_5(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_14 = FUNC_9(VAR_9, 0);
 if (VAR_14 < 0)
  return -VAR_1;

 VAR_13 = FUNC_7(&VAR_9->dev, VAR_14, VAR_7, 0,
     VAR_9->name, VAR_10);
 if (VAR_13) {
  FUNC_2(&VAR_9->dev, "could not request IRQ %d\n", VAR_14);
  return VAR_13;
 }

 VAR_12 = FUNC_8(sizeof(struct serio), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->id.type = VAR_4;
 VAR_12->write = VAR_8;
 VAR_12->open = VAR_6;
 VAR_12->close = VAR_5;
 FUNC_13(VAR_12->name, FUNC_4(&VAR_9->dev), sizeof(VAR_12->name));
 FUNC_13(VAR_12->phys, FUNC_4(&VAR_9->dev), sizeof(VAR_12->phys));
 VAR_12->port_data = VAR_10;
 VAR_12->dev.parent = &VAR_9->dev;
 VAR_10->io = VAR_12;

 FUNC_3(&VAR_9->dev, "base %p, irq %d\n", VAR_10->base, VAR_14);

 FUNC_12(VAR_10->io);
 FUNC_11(VAR_9, VAR_10);

 return 0;
}
