
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int type; } ;
struct serio {int phys; int name; TYPE_2__ dev; struct ps2_gpio_data* port_data; int * write; int close; int open; TYPE_1__ id; } ;
struct ps2_gpio_data {int irq; int tx_cnt; int tx_mutex; int tx_done; int tx_work; int mode; struct device* dev; struct serio* serio; scalar_t__ write_enable; int gpio_clk; int gpio_data; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*) ;
 struct ps2_gpio_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int,int ,int ,int ,struct ps2_gpio_data*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct serio*) ;
 struct serio* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct ps2_gpio_data*) ;
 int VAR_7 ;
 int FUNC_13 (struct device*,struct ps2_gpio_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_14 (struct serio*) ;
 int FUNC_15 (int ,int ,int) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_12)
{
 struct ps2_gpio_data *VAR_13;
 struct serio *VAR_14;
 struct device *VAR_15 = &VAR_12->dev;
 int VAR_16;

 VAR_13 = FUNC_3(VAR_15, sizeof(struct ps2_gpio_data), VAR_3);
 VAR_14 = FUNC_9(sizeof(struct serio), VAR_3);
 if (!VAR_13 || !VAR_14) {
  VAR_16 = -VAR_2;
  goto err_free_serio;
 }

 VAR_16 = FUNC_13(VAR_15, VAR_13);
 if (VAR_16)
  goto err_free_serio;

 if (FUNC_6(VAR_13->gpio_data) ||
     FUNC_6(VAR_13->gpio_clk)) {
  FUNC_1(VAR_15, "GPIO data or clk are connected via slow bus\n");
  VAR_16 = -VAR_1;
  goto err_free_serio;
 }

 VAR_13->irq = FUNC_11(VAR_12, 0);
 if (VAR_13->irq < 0) {
  VAR_16 = VAR_13->irq;
  goto err_free_serio;
 }

 VAR_16 = FUNC_4(VAR_15, VAR_13->irq, VAR_8,
     VAR_4, VAR_0, VAR_13);
 if (VAR_16) {
  FUNC_1(VAR_15, "failed to request irq %d: %d\n",
   VAR_13->irq, VAR_16);
  goto err_free_serio;
 }


 FUNC_5(VAR_13->irq);

 VAR_14->id.type = VAR_6;
 VAR_14->open = VAR_9;
 VAR_14->close = VAR_7;



 VAR_14->write = VAR_13->write_enable ? VAR_11 : ((void*)0);
 VAR_14->port_data = VAR_13;
 VAR_14->dev.parent = VAR_15;
 FUNC_15(VAR_14->name, FUNC_2(VAR_15), sizeof(VAR_14->name));
 FUNC_15(VAR_14->phys, FUNC_2(VAR_15), sizeof(VAR_14->phys));

 VAR_13->serio = VAR_14;
 VAR_13->dev = VAR_15;
 VAR_13->mode = VAR_5;




 VAR_13->tx_cnt = 1;

 FUNC_0(&VAR_13->tx_work, VAR_10);
 FUNC_7(&VAR_13->tx_done);
 FUNC_10(&VAR_13->tx_mutex);

 FUNC_14(VAR_14);
 FUNC_12(VAR_12, VAR_13);

 return 0;

err_free_serio:
 FUNC_8(VAR_14);
 return VAR_16;
}
