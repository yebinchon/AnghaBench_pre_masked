
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_3__ {int release; int of_node; int * parent; } ;
struct TYPE_4__ {int n_links; TYPE_1__ dev; int link_config; int link_enable; int send_break; int term; int write; int read; int flags; } ;
struct fsi_master_gpio {TYPE_2__ master; int cmd_lock; int t_echo_delay; int t_send_delay; int no_delays; struct gpio_desc* gpio_mux; struct gpio_desc* gpio_enable; struct gpio_desc* gpio_trans; struct gpio_desc* gpio_data; struct gpio_desc* gpio_clk; int last_addr; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int VAR_5 ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;
 struct gpio_desc* FUNC_7 (int *,char*,int ) ;
 struct gpio_desc* FUNC_8 (int *,char*,int ) ;
 int VAR_7 ;
 int FUNC_9 (struct fsi_master_gpio*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct fsi_master_gpio*) ;
 struct fsi_master_gpio* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct platform_device*,struct fsi_master_gpio*) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_14)
{
 struct fsi_master_gpio *VAR_15;
 struct gpio_desc *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_12(sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->dev = &VAR_14->dev;
 VAR_15->master.dev.parent = VAR_15->dev;
 VAR_15->master.dev.of_node = FUNC_14(FUNC_3(VAR_15->dev));
 VAR_15->master.dev.release = VAR_11;
 VAR_15->last_addr = VAR_5;

 VAR_16 = FUNC_7(&VAR_14->dev, "clock", 0);
 if (FUNC_0(VAR_16)) {
  FUNC_2(&VAR_14->dev, "failed to get clock gpio\n");
  VAR_17 = FUNC_1(VAR_16);
  goto err_free;
 }
 VAR_15->gpio_clk = VAR_16;

 VAR_16 = FUNC_7(&VAR_14->dev, "data", 0);
 if (FUNC_0(VAR_16)) {
  FUNC_2(&VAR_14->dev, "failed to get data gpio\n");
  VAR_17 = FUNC_1(VAR_16);
  goto err_free;
 }
 VAR_15->gpio_data = VAR_16;


 VAR_16 = FUNC_8(&VAR_14->dev, "trans", 0);
 if (FUNC_0(VAR_16)) {
  FUNC_2(&VAR_14->dev, "failed to get trans gpio\n");
  VAR_17 = FUNC_1(VAR_16);
  goto err_free;
 }
 VAR_15->gpio_trans = VAR_16;

 VAR_16 = FUNC_8(&VAR_14->dev, "enable", 0);
 if (FUNC_0(VAR_16)) {
  FUNC_2(&VAR_14->dev, "failed to get enable gpio\n");
  VAR_17 = FUNC_1(VAR_16);
  goto err_free;
 }
 VAR_15->gpio_enable = VAR_16;

 VAR_16 = FUNC_8(&VAR_14->dev, "mux", 0);
 if (FUNC_0(VAR_16)) {
  FUNC_2(&VAR_14->dev, "failed to get mux gpio\n");
  VAR_17 = FUNC_1(VAR_16);
  goto err_free;
 }
 VAR_15->gpio_mux = VAR_16;






 VAR_15->no_delays = FUNC_5(&VAR_14->dev, "no-gpio-delays");


 VAR_15->t_send_delay = VAR_3;
 VAR_15->t_echo_delay = VAR_1;

 VAR_15->master.n_links = 1;
 VAR_15->master.flags = VAR_2;
 VAR_15->master.read = VAR_10;
 VAR_15->master.write = VAR_13;
 VAR_15->master.term = VAR_12;
 VAR_15->master.send_break = VAR_7;
 VAR_15->master.link_enable = VAR_9;
 VAR_15->master.link_config = VAR_8;
 FUNC_15(VAR_14, VAR_15);
 FUNC_13(&VAR_15->cmd_lock);

 FUNC_9(VAR_15);

 VAR_17 = FUNC_4(&VAR_14->dev, &VAR_6);
 if (VAR_17)
  goto err_free;

 VAR_17 = FUNC_10(&VAR_15->master);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, &VAR_6);
  FUNC_16(&VAR_15->master.dev);
  return VAR_17;
 }
 return 0;
 err_free:
 FUNC_11(VAR_15);
 return VAR_17;
}
