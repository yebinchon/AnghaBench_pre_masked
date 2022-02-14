
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_9__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_ssi_port {size_t port_id; TYPE_1__* pdev; int * dev; int wk_lock; int lock; int ssr_dma; int ssr_base; int sst_dma; int sst_base; int work; int errqueue_work; struct gpio_desc* wake_gpio; } ;
struct omap_ssi_controller {int dir; struct omap_ssi_port** port; } ;
struct hsi_port {int device; int release; int stop_tx; int start_tx; int flush; int setup; int async; } ;
struct hsi_controller {size_t num_ports; struct hsi_port** port; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 struct hsi_controller* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*,size_t) ;
 struct gpio_desc* FUNC_8 (TYPE_1__*,char*,int ) ;
 struct omap_ssi_port* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (struct hsi_port*,struct device_node*) ;
 struct omap_ssi_controller* FUNC_11 (struct hsi_controller*) ;
 int FUNC_12 (struct hsi_port*,struct omap_ssi_port*) ;
 int FUNC_13 (struct platform_device*,struct hsi_port*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *) ;
 int VAR_5 ;
 int FUNC_19 (struct omap_ssi_port*,int ) ;
 int VAR_6 ;
 int FUNC_20 (struct platform_device*,char*,int *,int *) ;
 int FUNC_21 (struct hsi_port*,struct platform_device*) ;
 int VAR_7 ;
 int FUNC_22 (struct omap_ssi_port*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_23 (struct hsi_port*,struct platform_device*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev.of_node;
 struct hsi_port *VAR_15;
 struct omap_ssi_port *VAR_16;
 struct hsi_controller *VAR_17 = FUNC_6(VAR_13->dev.parent);
 struct omap_ssi_controller *VAR_18 = FUNC_11(VAR_17);
 struct gpio_desc *VAR_19 = ((void*)0);
 u32 VAR_20;
 int VAR_21;

 FUNC_4(&VAR_13->dev, "init ssi port...\n");

 if (!VAR_17->port || !VAR_18->port) {
  FUNC_5(&VAR_13->dev, "ssi controller not initialized!\n");
  VAR_21 = -VAR_1;
  goto error;
 }


 for (VAR_20 = 0; VAR_20 < VAR_17->num_ports && VAR_18->port[VAR_20];
  VAR_20++)
  ;

 if (VAR_20 >= VAR_17->num_ports) {
  FUNC_5(&VAR_13->dev, "port id out of range!\n");
  VAR_21 = -VAR_1;
  goto error;
 }

 VAR_15 = VAR_17->port[VAR_20];

 if (!VAR_14) {
  FUNC_5(&VAR_13->dev, "missing device tree data\n");
  VAR_21 = -VAR_0;
  goto error;
 }

 VAR_19 = FUNC_8(&VAR_13->dev, "ti,ssi-cawake", VAR_4);
 if (FUNC_2(VAR_19)) {
  VAR_21 = FUNC_3(VAR_19);
  FUNC_5(&VAR_13->dev, "couldn't get cawake gpio (err=%d)!\n", VAR_21);
  goto error;
 }

 VAR_16 = FUNC_9(&VAR_15->device, sizeof(*VAR_16), VAR_3);
 if (!VAR_16) {
  VAR_21 = -VAR_2;
  goto error;
 }
 VAR_16->wake_gpio = VAR_19;
 VAR_16->pdev = &VAR_13->dev;
 VAR_16->port_id = VAR_20;

 FUNC_0(&VAR_16->errqueue_work, VAR_7);
 FUNC_1(&VAR_16->work, VAR_12);


 VAR_15->async = VAR_5;
 VAR_15->setup = VAR_9;
 VAR_15->flush = VAR_6;
 VAR_15->start_tx = VAR_10;
 VAR_15->stop_tx = VAR_11;
 VAR_15->release = VAR_8;
 FUNC_12(VAR_15, VAR_16);
 VAR_18->port[VAR_20] = VAR_16;

 FUNC_13(VAR_13, VAR_15);

 VAR_21 = FUNC_20(VAR_13, "tx", &VAR_16->sst_base,
  &VAR_16->sst_dma);
 if (VAR_21 < 0)
  goto error;
 VAR_21 = FUNC_20(VAR_13, "rx", &VAR_16->ssr_base,
  &VAR_16->ssr_dma);
 if (VAR_21 < 0)
  goto error;

 VAR_21 = FUNC_21(VAR_15, VAR_13);
 if (VAR_21 < 0)
  goto error;
 VAR_21 = FUNC_23(VAR_15, VAR_13);
 if (VAR_21 < 0)
  goto error;

 FUNC_22(VAR_16);
 FUNC_18(&VAR_16->lock);
 FUNC_18(&VAR_16->wk_lock);
 VAR_16->dev = &VAR_15->device;

 FUNC_17(VAR_16->pdev);
 FUNC_16(VAR_16->pdev, 250);
 FUNC_15(VAR_16->pdev);
 FUNC_10(VAR_15, VAR_14);

 FUNC_7(&VAR_13->dev, "ssi port %u successfully initialized\n", VAR_20);

 return 0;

error:
 return VAR_21;
}
