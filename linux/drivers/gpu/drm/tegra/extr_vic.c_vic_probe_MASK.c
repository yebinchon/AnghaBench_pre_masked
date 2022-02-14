
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * ops; int regs; struct device* dev; } ;
struct TYPE_9__ {int num_syncpts; struct host1x_syncpt** syncpts; int class; struct device* dev; int * ops; int list; } ;
struct TYPE_7__ {TYPE_3__ base; int * ops; int version; int list; } ;
struct vic {TYPE_5__ falcon; TYPE_1__ client; TYPE_2__* config; struct device* dev; int regs; int rst; int clk; } ;
struct resource {int dummy; } ;
struct device {int pm_domain; } ;
struct platform_device {struct device dev; } ;
struct host1x_syncpt {int dummy; } ;
struct TYPE_8__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_2__* FUNC_12 (struct device*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct vic*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (struct device*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct host1x_syncpt **VAR_10;
 struct resource *VAR_11;
 struct vic *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_9, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->config = FUNC_12(VAR_9);

 VAR_10 = FUNC_6(VAR_9, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_13(VAR_8, VAR_4, 0);
 if (!VAR_11) {
  FUNC_3(&VAR_8->dev, "failed to get registers\n");
  return -VAR_1;
 }

 VAR_12->regs = FUNC_5(VAR_9, VAR_11);
 if (FUNC_1(VAR_12->regs))
  return FUNC_2(VAR_12->regs);

 VAR_12->clk = FUNC_4(VAR_9, ((void*)0));
 if (FUNC_1(VAR_12->clk)) {
  FUNC_3(&VAR_8->dev, "failed to get clock\n");
  return FUNC_2(VAR_12->clk);
 }

 if (!VAR_9->pm_domain) {
  VAR_12->rst = FUNC_7(VAR_9, "vic");
  if (FUNC_1(VAR_12->rst)) {
   FUNC_3(&VAR_8->dev, "failed to get reset\n");
   return FUNC_2(VAR_12->rst);
  }
 }

 VAR_12->falcon.dev = VAR_9;
 VAR_12->falcon.regs = VAR_12->regs;
 VAR_12->falcon.ops = &VAR_6;

 VAR_13 = FUNC_9(&VAR_12->falcon);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_14(VAR_8, VAR_12);

 FUNC_0(&VAR_12->client.base.list);
 VAR_12->client.base.ops = &VAR_5;
 VAR_12->client.base.dev = VAR_9;
 VAR_12->client.base.class = VAR_3;
 VAR_12->client.base.syncpts = VAR_10;
 VAR_12->client.base.num_syncpts = 1;
 VAR_12->dev = VAR_9;

 FUNC_0(&VAR_12->client.list);
 VAR_12->client.version = VAR_12->config->version;
 VAR_12->client.ops = &VAR_7;

 VAR_13 = FUNC_10(&VAR_12->client.base);
 if (VAR_13 < 0) {
  FUNC_3(VAR_9, "failed to register host1x client: %d\n", VAR_13);
  goto exit_falcon;
 }

 FUNC_15(&VAR_8->dev);
 if (!FUNC_16(&VAR_8->dev)) {
  VAR_13 = FUNC_17(&VAR_8->dev);
  if (VAR_13 < 0)
   goto unregister_client;
 }

 return 0;

unregister_client:
 FUNC_11(&VAR_12->client.base);
exit_falcon:
 FUNC_8(&VAR_12->falcon);

 return VAR_13;
}
