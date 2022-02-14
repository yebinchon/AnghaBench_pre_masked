
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int type; } ;
struct serio {int phys; int name; TYPE_2__ dev; struct olpc_apsp* port_data; void* close; void* open; void* write; TYPE_1__ id; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct olpc_apsp {scalar_t__ irq; int * dev; struct serio* padio; struct serio* kbio; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct resource*) ;
 struct olpc_apsp* FUNC_6 (int *,int,int ) ;
 struct serio* FUNC_7 (int,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct olpc_apsp*) ;
 int FUNC_11 (int,int ,int ,char*,struct olpc_apsp*) ;
 int FUNC_12 (struct serio*) ;
 int FUNC_13 (struct serio*) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct serio *VAR_10, *VAR_11;
 struct olpc_apsp *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_6(&VAR_9->dev, sizeof(struct olpc_apsp), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->dev = &VAR_9->dev;

 VAR_13 = FUNC_9(VAR_9, VAR_2, 0);
 VAR_12->base = FUNC_5(&VAR_9->dev, VAR_13);
 if (FUNC_0(VAR_12->base)) {
  FUNC_3(&VAR_9->dev, "Failed to map WTM registers\n");
  return FUNC_1(VAR_12->base);
 }

 VAR_12->irq = FUNC_8(VAR_9, 0);
 if (VAR_12->irq < 0)
  return VAR_12->irq;


 VAR_10 = FUNC_7(sizeof(struct serio), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->id.type = VAR_4;
 VAR_10->write = VAR_8;
 VAR_10->open = VAR_6;
 VAR_10->close = VAR_5;
 VAR_10->port_data = VAR_12;
 VAR_10->dev.parent = &VAR_9->dev;
 FUNC_14(VAR_10->name, "sp keyboard", sizeof(VAR_10->name));
 FUNC_14(VAR_10->phys, "sp/serio0", sizeof(VAR_10->phys));
 VAR_12->kbio = VAR_10;
 FUNC_12(VAR_10);


 VAR_11 = FUNC_7(sizeof(struct serio), VAR_1);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto err_pad;
 }
 VAR_11->id.type = VAR_3;
 VAR_11->write = VAR_8;
 VAR_11->open = VAR_6;
 VAR_11->close = VAR_5;
 VAR_11->port_data = VAR_12;
 VAR_11->dev.parent = &VAR_9->dev;
 FUNC_14(VAR_11->name, "sp touchpad", sizeof(VAR_11->name));
 FUNC_14(VAR_11->phys, "sp/serio1", sizeof(VAR_11->phys));
 VAR_12->padio = VAR_11;
 FUNC_12(VAR_11);

 VAR_14 = FUNC_11(VAR_12->irq, VAR_7, 0, "olpc-apsp", VAR_12);
 if (VAR_14) {
  FUNC_3(&VAR_9->dev, "Failed to request IRQ\n");
  goto err_irq;
 }

 FUNC_4(VAR_12->dev, 1);
 FUNC_10(VAR_9, VAR_12);

 FUNC_2(&VAR_9->dev, "probed successfully.\n");
 return 0;

err_irq:
 FUNC_13(VAR_11);
err_pad:
 FUNC_13(VAR_10);
 return VAR_14;
}
