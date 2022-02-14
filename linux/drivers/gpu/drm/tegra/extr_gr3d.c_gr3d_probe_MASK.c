
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct host1x_syncpt {int dummy; } ;
struct TYPE_12__ {int num_syncpts; struct host1x_syncpt** syncpts; int class; TYPE_3__* dev; int * ops; int list; } ;
struct TYPE_9__ {TYPE_4__ base; int * ops; int version; int list; } ;
struct gr3d {int addr_regs; TYPE_1__ client; TYPE_2__* soc; void* rst_secondary; void* clk_secondary; void* rst; void* clk; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {int version; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 void* FUNC_5 (TYPE_3__*,char*) ;
 void* FUNC_6 (TYPE_3__*,int,int ) ;
 void* FUNC_7 (TYPE_3__*,char*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct platform_device*,struct gr3d*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,void*,void*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct host1x_syncpt **VAR_10;
 struct gr3d *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_6(&VAR_8->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->soc = FUNC_9(&VAR_8->dev);

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11->clk = FUNC_5(&VAR_8->dev, ((void*)0));
 if (FUNC_2(VAR_11->clk)) {
  FUNC_4(&VAR_8->dev, "cannot get clock\n");
  return FUNC_3(VAR_11->clk);
 }

 VAR_11->rst = FUNC_7(&VAR_8->dev, "3d");
 if (FUNC_2(VAR_11->rst)) {
  FUNC_4(&VAR_8->dev, "cannot get reset\n");
  return FUNC_3(VAR_11->rst);
 }

 if (FUNC_10(VAR_9, "nvidia,tegra30-gr3d")) {
  VAR_11->clk_secondary = FUNC_5(&VAR_8->dev, "3d2");
  if (FUNC_2(VAR_11->clk_secondary)) {
   FUNC_4(&VAR_8->dev, "cannot get secondary clock\n");
   return FUNC_3(VAR_11->clk_secondary);
  }

  VAR_11->rst_secondary = FUNC_7(&VAR_8->dev,
        "3d2");
  if (FUNC_2(VAR_11->rst_secondary)) {
   FUNC_4(&VAR_8->dev, "cannot get secondary reset\n");
   return FUNC_3(VAR_11->rst_secondary);
  }
 }

 VAR_13 = FUNC_13(VAR_3, VAR_11->clk,
      VAR_11->rst);
 if (VAR_13 < 0) {
  FUNC_4(&VAR_8->dev, "failed to power up 3D unit\n");
  return VAR_13;
 }

 if (VAR_11->clk_secondary) {
  VAR_13 = FUNC_13(VAR_4,
       VAR_11->clk_secondary,
       VAR_11->rst_secondary);
  if (VAR_13 < 0) {
   FUNC_4(&VAR_8->dev,
    "failed to power up secondary 3D unit\n");
   return VAR_13;
  }
 }

 FUNC_1(&VAR_11->client.base.list);
 VAR_11->client.base.ops = &VAR_6;
 VAR_11->client.base.dev = &VAR_8->dev;
 VAR_11->client.base.class = VAR_2;
 VAR_11->client.base.syncpts = VAR_10;
 VAR_11->client.base.num_syncpts = 1;

 FUNC_1(&VAR_11->client.list);
 VAR_11->client.version = VAR_11->soc->version;
 VAR_11->client.ops = &VAR_7;

 VAR_13 = FUNC_8(&VAR_11->client.base);
 if (VAR_13 < 0) {
  FUNC_4(&VAR_8->dev, "failed to register host1x client: %d\n",
   VAR_13);
  return VAR_13;
 }


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++)
  FUNC_12(VAR_5[VAR_12], VAR_11->addr_regs);

 FUNC_11(VAR_8, VAR_11);

 return 0;
}
