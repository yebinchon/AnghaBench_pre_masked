
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct host1x_syncpt {int dummy; } ;
struct TYPE_6__ {int num_syncpts; struct host1x_syncpt** syncpts; int class; struct device* dev; int * ops; int list; } ;
struct TYPE_4__ {TYPE_3__ base; int * ops; int version; int list; } ;
struct gr2d {int addr_regs; int clk; TYPE_1__ client; TYPE_2__* soc; } ;
struct TYPE_5__ {int version; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,int *) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_2__* FUNC_10 (struct device*) ;
 int FUNC_11 (struct platform_device*,struct gr2d*) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct host1x_syncpt **VAR_8;
 struct gr2d *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_8(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->soc = FUNC_10(VAR_7);

 VAR_8 = FUNC_8(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9->clk = FUNC_7(VAR_7, ((void*)0));
 if (FUNC_2(VAR_9->clk)) {
  FUNC_6(VAR_7, "cannot get clock\n");
  return FUNC_3(VAR_9->clk);
 }

 VAR_11 = FUNC_5(VAR_9->clk);
 if (VAR_11) {
  FUNC_6(VAR_7, "cannot turn on clock\n");
  return VAR_11;
 }

 FUNC_1(&VAR_9->client.base.list);
 VAR_9->client.base.ops = &VAR_4;
 VAR_9->client.base.dev = VAR_7;
 VAR_9->client.base.class = VAR_2;
 VAR_9->client.base.syncpts = VAR_8;
 VAR_9->client.base.num_syncpts = 1;

 FUNC_1(&VAR_9->client.list);
 VAR_9->client.version = VAR_9->soc->version;
 VAR_9->client.ops = &VAR_5;

 VAR_11 = FUNC_9(&VAR_9->client.base);
 if (VAR_11 < 0) {
  FUNC_6(VAR_7, "failed to register host1x client: %d\n", VAR_11);
  FUNC_4(VAR_9->clk);
  return VAR_11;
 }


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
  FUNC_12(VAR_3[VAR_10], VAR_9->addr_regs);

 FUNC_11(VAR_6, VAR_9);

 return 0;
}
