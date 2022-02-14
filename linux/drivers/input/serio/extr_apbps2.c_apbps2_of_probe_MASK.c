
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct serio {int dummy; } ;
struct resource {int dummy; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct apbps2_priv {TYPE_2__* io; TYPE_6__* regs; } ;
struct TYPE_16__ {int reload; int ctrl; } ;
struct TYPE_13__ {int type; } ;
struct TYPE_14__ {int phys; int name; struct apbps2_priv* port_data; int write; int close; int open; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,char*,int,TYPE_6__*) ;
 TYPE_6__* FUNC_4 (TYPE_4__*,struct resource*) ;
 struct apbps2_priv* FUNC_5 (TYPE_4__*,int,int ) ;
 int FUNC_6 (TYPE_4__*,int,int ,int ,char*,struct apbps2_priv*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int ,int ) ;
 TYPE_2__* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ,char*,int*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct apbps2_priv*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,int,char*,int ) ;
 int FUNC_15 (int ,char*,int) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_11)
{
 struct apbps2_priv *VAR_12;
 int VAR_13, VAR_14;
 u32 VAR_15;
 struct resource *VAR_16;

 VAR_12 = FUNC_5(&VAR_11->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  FUNC_2(&VAR_11->dev, "memory allocation failed\n");
  return -VAR_1;
 }


 VAR_16 = FUNC_11(VAR_11, VAR_3, 0);
 VAR_12->regs = FUNC_4(&VAR_11->dev, VAR_16);
 if (FUNC_0(VAR_12->regs))
  return FUNC_1(VAR_12->regs);


 FUNC_7(0, &VAR_12->regs->ctrl);


 VAR_13 = FUNC_8(VAR_11->dev.of_node, 0);
 VAR_14 = FUNC_6(&VAR_11->dev, VAR_13, VAR_8,
    VAR_4, "apbps2", VAR_12);
 if (VAR_14) {
  FUNC_2(&VAR_11->dev, "request IRQ%d failed\n", VAR_13);
  return VAR_14;
 }


 if (FUNC_10(VAR_11->dev.of_node, "freq", &VAR_15)) {
  FUNC_2(&VAR_11->dev, "unable to get core frequency\n");
  return -VAR_0;
 }


 FUNC_7(VAR_15 / 10000, &VAR_12->regs->reload);

 VAR_12->io = FUNC_9(sizeof(struct serio), VAR_2);
 if (!VAR_12->io)
  return -VAR_1;

 VAR_12->io->id.type = VAR_5;
 VAR_12->io->open = VAR_9;
 VAR_12->io->close = VAR_6;
 VAR_12->io->write = VAR_10;
 VAR_12->io->port_data = VAR_12;
 FUNC_15(VAR_12->io->name, "APBPS2 PS/2", sizeof(VAR_12->io->name));
 FUNC_14(VAR_12->io->phys, sizeof(VAR_12->io->phys),
   "apbps2_%d", VAR_7++);

 FUNC_3(&VAR_11->dev, "irq = %d, base = 0x%p\n", VAR_13, VAR_12->regs);

 FUNC_13(VAR_12->io);

 FUNC_12(VAR_11, VAR_12);

 return 0;
}
