
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct spacc_engine {int fifo_sz; int num_algs; int num_aeads; int stat_irq_thresh; scalar_t__ clk; int packet_timeout; TYPE_2__* aeads; TYPE_4__* dev; int registered_aeads; TYPE_3__* algs; int registered_algs; int complete; scalar_t__ in_flight; int in_progress; int completed; int pending; scalar_t__ regs; int hw_lock; int req_pool; int name; scalar_t__ hash_key_base; scalar_t__ cipher_ctx_base; int hash_pg_sz; int cipher_pg_sz; int max_ctxs; } ;
struct spacc_ddt {int dummy; } ;
struct resource {int start; } ;
struct TYPE_21__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_16__ {int cra_name; } ;
struct TYPE_20__ {TYPE_13__ alg; int entry; struct spacc_engine* engine; } ;
struct TYPE_18__ {int cra_name; } ;
struct TYPE_17__ {TYPE_1__ base; } ;
struct TYPE_19__ {TYPE_14__ alg; int entry; struct spacc_engine* engine; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_14__*) ;
 int FUNC_9 (TYPE_13__*) ;
 int FUNC_10 (int *) ;
 int VAR_24 ;
 int FUNC_11 (TYPE_4__*,char*,int ) ;
 int FUNC_12 (TYPE_4__*,char*,...) ;
 int FUNC_13 (TYPE_4__*,char*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*,int *) ;
 int FUNC_16 (TYPE_4__*,int *) ;
 struct spacc_engine* FUNC_17 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_18 (struct platform_device*,int ) ;
 scalar_t__ FUNC_19 (TYPE_4__*,int ,int ,int ,int ,struct spacc_engine*) ;
 int FUNC_20 (int ,TYPE_4__*,int,int,int ) ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int FUNC_21 (int *,int *) ;
 scalar_t__ FUNC_22 (struct device_node*,char*) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,struct spacc_engine*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int ,unsigned long) ;
 int FUNC_27 (int *,int ,int ) ;
 int FUNC_28 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_31)
{
 int VAR_32, VAR_33, VAR_34;
 struct resource *VAR_35;
 struct device_node *VAR_36 = VAR_31->dev.of_node;
 struct spacc_engine *VAR_37 = FUNC_17(&VAR_31->dev, sizeof(*VAR_37),
         VAR_5);
 if (!VAR_37)
  return -VAR_3;

 if (FUNC_22(VAR_36, "picochip,spacc-ipsec")) {
  VAR_37->max_ctxs = VAR_11;
  VAR_37->cipher_pg_sz = VAR_8;
  VAR_37->hash_pg_sz = VAR_10;
  VAR_37->fifo_sz = VAR_9;
  VAR_37->algs = VAR_26;
  VAR_37->num_algs = FUNC_0(VAR_26);
  VAR_37->aeads = VAR_25;
  VAR_37->num_aeads = FUNC_0(VAR_25);
 } else if (FUNC_22(VAR_36, "picochip,spacc-l2")) {
  VAR_37->max_ctxs = VAR_15;
  VAR_37->cipher_pg_sz = VAR_12;
  VAR_37->hash_pg_sz = VAR_14;
  VAR_37->fifo_sz = VAR_13;
  VAR_37->algs = VAR_27;
  VAR_37->num_algs = FUNC_0(VAR_27);
 } else {
  return -VAR_1;
 }

 VAR_37->name = FUNC_14(&VAR_31->dev);

 VAR_37->regs = FUNC_18(VAR_31, 0);
 if (FUNC_2(VAR_37->regs))
  return FUNC_3(VAR_37->regs);

 VAR_35 = FUNC_23(VAR_31, VAR_6, 0);
 if (!VAR_35) {
  FUNC_12(&VAR_31->dev, "no memory/irq resource for engine\n");
  return -VAR_4;
 }

 if (FUNC_19(&VAR_31->dev, VAR_35->start, VAR_30, 0,
        VAR_37->name, VAR_37)) {
  FUNC_12(VAR_37->dev, "failed to request IRQ\n");
  return -VAR_0;
 }

 VAR_37->dev = &VAR_31->dev;
 VAR_37->cipher_ctx_base = VAR_37->regs + VAR_16;
 VAR_37->hash_key_base = VAR_37->regs + VAR_17;

 VAR_37->req_pool = FUNC_20(VAR_37->name, VAR_37->dev,
  VAR_7 * sizeof(struct spacc_ddt), 8, VAR_23);
 if (!VAR_37->req_pool)
  return -VAR_3;

 FUNC_25(&VAR_37->hw_lock);

 VAR_37->clk = FUNC_5(&VAR_31->dev, "ref");
 if (FUNC_2(VAR_37->clk)) {
  FUNC_13(&VAR_31->dev, "clk unavailable\n");
  return FUNC_3(VAR_37->clk);
 }

 if (FUNC_6(VAR_37->clk)) {
  FUNC_13(&VAR_31->dev, "unable to prepare/enable clk\n");
  VAR_34 = -VAR_2;
  goto err_clk_put;
 }

 VAR_34 = FUNC_15(&VAR_31->dev, &VAR_24);
 if (VAR_34)
  goto err_clk_disable;







 VAR_37->stat_irq_thresh = (VAR_37->fifo_sz / 2);






 FUNC_28(VAR_37->stat_irq_thresh << VAR_19,
        VAR_37->regs + VAR_18);
 FUNC_28(VAR_22 | VAR_20,
        VAR_37->regs + VAR_21);

 FUNC_27(&VAR_37->packet_timeout, VAR_28, 0);

 FUNC_1(&VAR_37->pending);
 FUNC_1(&VAR_37->completed);
 FUNC_1(&VAR_37->in_progress);
 VAR_37->in_flight = 0;
 FUNC_26(&VAR_37->complete, VAR_29,
       (unsigned long)VAR_37);

 FUNC_24(VAR_31, VAR_37);

 VAR_34 = -VAR_1;
 FUNC_1(&VAR_37->registered_algs);
 for (VAR_32 = 0; VAR_32 < VAR_37->num_algs; ++VAR_32) {
  VAR_37->algs[VAR_32].engine = VAR_37;
  VAR_33 = FUNC_9(&VAR_37->algs[VAR_32].alg);
  if (!VAR_33) {
   FUNC_21(&VAR_37->algs[VAR_32].entry,
          &VAR_37->registered_algs);
   VAR_34 = 0;
  }
  if (VAR_33)
   FUNC_12(VAR_37->dev, "failed to register alg \"%s\"\n",
    VAR_37->algs[VAR_32].alg.cra_name);
  else
   FUNC_11(VAR_37->dev, "registered alg \"%s\"\n",
    VAR_37->algs[VAR_32].alg.cra_name);
 }

 FUNC_1(&VAR_37->registered_aeads);
 for (VAR_32 = 0; VAR_32 < VAR_37->num_aeads; ++VAR_32) {
  VAR_37->aeads[VAR_32].engine = VAR_37;
  VAR_33 = FUNC_8(&VAR_37->aeads[VAR_32].alg);
  if (!VAR_33) {
   FUNC_21(&VAR_37->aeads[VAR_32].entry,
          &VAR_37->registered_aeads);
   VAR_34 = 0;
  }
  if (VAR_33)
   FUNC_12(VAR_37->dev, "failed to register alg \"%s\"\n",
    VAR_37->aeads[VAR_32].alg.base.cra_name);
  else
   FUNC_11(VAR_37->dev, "registered alg \"%s\"\n",
    VAR_37->aeads[VAR_32].alg.base.cra_name);
 }

 if (!VAR_34)
  return 0;

 FUNC_10(&VAR_37->packet_timeout);
 FUNC_16(&VAR_31->dev, &VAR_24);
err_clk_disable:
 FUNC_4(VAR_37->clk);
err_clk_put:
 FUNC_7(VAR_37->clk);

 return VAR_34;
}
