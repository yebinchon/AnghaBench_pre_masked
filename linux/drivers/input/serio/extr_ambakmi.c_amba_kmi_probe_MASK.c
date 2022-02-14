
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int type; } ;
struct serio {int base; struct serio* io; int irq; int clk; TYPE_2__ dev; struct serio* port_data; int phys; int name; int close; int open; int write; TYPE_1__ id; } ;
struct amba_kmi_port {int base; struct amba_kmi_port* io; int irq; int clk; TYPE_2__ dev; struct amba_kmi_port* port_data; int phys; int name; int close; int open; int write; TYPE_1__ id; } ;
struct amba_id {int dummy; } ;
struct TYPE_6__ {int start; } ;
struct amba_device {int * irq; int dev; TYPE_3__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct amba_device*) ;
 int FUNC_3 (struct amba_device*,int *) ;
 int FUNC_4 (struct amba_device*,struct serio*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct serio*) ;
 struct serio* FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct serio*) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct amba_device *VAR_6,
 const struct amba_id *VAR_7)
{
 struct amba_kmi_port *VAR_8;
 struct serio *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_6, ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_10(sizeof(struct amba_kmi_port), VAR_1);
 VAR_9 = FUNC_10(sizeof(struct serio), VAR_1);
 if (!VAR_8 || !VAR_9) {
  VAR_10 = -VAR_0;
  goto out;
 }


 VAR_9->id.type = VAR_2;
 VAR_9->write = VAR_5;
 VAR_9->open = VAR_4;
 VAR_9->close = VAR_3;
 FUNC_13(VAR_9->name, FUNC_6(&VAR_6->dev), sizeof(VAR_9->name));
 FUNC_13(VAR_9->phys, FUNC_6(&VAR_6->dev), sizeof(VAR_9->phys));
 VAR_9->port_data = VAR_8;
 VAR_9->dev.parent = &VAR_6->dev;

 VAR_8->io = VAR_9;
 VAR_8->base = FUNC_7(VAR_6->res.start, FUNC_11(&VAR_6->res));
 if (!VAR_8->base) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_8->clk = FUNC_5(&VAR_6->dev, "KMIREFCLK");
 if (FUNC_0(VAR_8->clk)) {
  VAR_10 = FUNC_1(VAR_8->clk);
  goto unmap;
 }

 VAR_8->irq = VAR_6->irq[0];
 FUNC_4(VAR_6, VAR_8);

 FUNC_12(VAR_8->io);
 return 0;

 unmap:
 FUNC_8(VAR_8->base);
 out:
 FUNC_9(VAR_8);
 FUNC_9(VAR_9);
 FUNC_2(VAR_6);
 return VAR_10;
}
