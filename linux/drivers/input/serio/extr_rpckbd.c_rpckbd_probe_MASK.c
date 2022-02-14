
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int type; } ;
struct serio {int rx_irq; int tx_irq; int phys; int name; struct serio* port_data; TYPE_2__ dev; int close; int open; int write; TYPE_1__ id; } ;
struct rpckbd_data {int rx_irq; int tx_irq; int phys; int name; struct rpckbd_data* port_data; TYPE_2__ dev; int close; int open; int write; TYPE_1__ id; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct serio*) ;
 struct serio* FUNC_1 (int,int ) ;
 int FUNC_2 (struct platform_device*,int) ;
 int FUNC_3 (struct platform_device*,struct serio*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct serio*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct rpckbd_data *VAR_8;
 struct serio *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_2(VAR_7, 0);
 if (VAR_11 <= 0)
  return VAR_11 < 0 ? VAR_11 : -VAR_1;

 VAR_10 = FUNC_2(VAR_7, 1);
 if (VAR_10 <= 0)
  return VAR_10 < 0 ? VAR_10 : -VAR_1;

 VAR_9 = FUNC_1(sizeof(struct serio), VAR_2);
 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
 if (!VAR_9 || !VAR_8) {
  FUNC_0(VAR_8);
  FUNC_0(VAR_9);
  return -VAR_0;
 }

 VAR_8->rx_irq = VAR_11;
 VAR_8->tx_irq = VAR_10;

 VAR_9->id.type = VAR_3;
 VAR_9->write = VAR_6;
 VAR_9->open = VAR_5;
 VAR_9->close = VAR_4;
 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->port_data = VAR_8;
 FUNC_5(VAR_9->name, "RiscPC PS/2 kbd port", sizeof(VAR_9->name));
 FUNC_5(VAR_9->phys, "rpckbd/serio0", sizeof(VAR_9->phys));

 FUNC_3(VAR_7, VAR_9);
 FUNC_4(VAR_9);
 return 0;
}
