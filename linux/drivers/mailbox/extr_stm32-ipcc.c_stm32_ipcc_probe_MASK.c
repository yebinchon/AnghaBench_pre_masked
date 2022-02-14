
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {int txdone_irq; unsigned int num_chans; TYPE_2__* chans; int * ops; struct device* dev; } ;
struct stm32_ipcc {int proc_id; int* irqs; int wkp; unsigned int n_chans; scalar_t__ clk; TYPE_1__ controller; scalar_t__ reg_base; scalar_t__ reg_proc; int lock; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
typedef int irq_handler_t ;
struct TYPE_4__ {void* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,int ,int ,unsigned int,int) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,int) ;
 int FUNC_10 (struct device*,int) ;
 int FUNC_11 (struct device*,int) ;
 scalar_t__ FUNC_12 (struct device*,int *) ;
 scalar_t__ FUNC_13 (struct device*,struct resource*) ;
 TYPE_2__* FUNC_14 (struct device*,unsigned int,int,int ) ;
 struct stm32_ipcc* FUNC_15 (struct device*,int,int ) ;
 int FUNC_16 (struct device*,TYPE_1__*) ;
 int FUNC_17 (struct device*,int,int *,int ,int ,int ,struct stm32_ipcc*) ;
 scalar_t__ FUNC_18 (struct device_node*,char*) ;
 scalar_t__ FUNC_19 (struct device_node*,char*,int*) ;
 void* FUNC_20 (struct platform_device*,char const* const) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct stm32_ipcc*) ;
 void* FUNC_23 (scalar_t__) ;
 int FUNC_24 (int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_25 (int *,scalar_t__,int) ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_24)
{
 struct device *VAR_25 = &VAR_24->dev;
 struct device_node *VAR_26 = VAR_25->of_node;
 struct stm32_ipcc *VAR_27;
 struct resource *VAR_28;
 unsigned int VAR_29;
 int VAR_30;
 u32 VAR_31;
 static const char * const VAR_32[] = {"rx", "tx"};
 irq_handler_t VAR_33[] = {VAR_22, VAR_23};

 if (!VAR_26) {
  FUNC_5(VAR_25, "No DT found\n");
  return -VAR_1;
 }

 VAR_27 = FUNC_15(VAR_25, sizeof(*VAR_27), VAR_4);
 if (!VAR_27)
  return -VAR_2;

 FUNC_24(&VAR_27->lock);


 if (FUNC_19(VAR_26, "st,proc-id", &VAR_27->proc_id)) {
  FUNC_5(VAR_25, "Missing st,proc-id\n");
  return -VAR_1;
 }

 if (VAR_27->proc_id >= VAR_15) {
  FUNC_5(VAR_25, "Invalid proc_id (%d)\n", VAR_27->proc_id);
  return -VAR_0;
 }


 VAR_28 = FUNC_21(VAR_24, VAR_5, 0);
 VAR_27->reg_base = FUNC_13(VAR_25, VAR_28);
 if (FUNC_1(VAR_27->reg_base))
  return FUNC_2(VAR_27->reg_base);

 VAR_27->reg_proc = VAR_27->reg_base + VAR_27->proc_id * VAR_8;


 VAR_27->clk = FUNC_12(VAR_25, ((void*)0));
 if (FUNC_1(VAR_27->clk))
  return FUNC_2(VAR_27->clk);

 VAR_30 = FUNC_4(VAR_27->clk);
 if (VAR_30) {
  FUNC_5(VAR_25, "can not enable the clock\n");
  return VAR_30;
 }


 for (VAR_29 = 0; VAR_29 < VAR_7; VAR_29++) {
  VAR_27->irqs[VAR_29] = FUNC_20(VAR_24, VAR_32[VAR_29]);
  if (VAR_27->irqs[VAR_29] < 0) {
   if (VAR_27->irqs[VAR_29] != -VAR_3)
    FUNC_5(VAR_25, "no IRQ specified %s\n",
     VAR_32[VAR_29]);
   VAR_30 = VAR_27->irqs[VAR_29];
   goto err_clk;
  }

  VAR_30 = FUNC_17(VAR_25, VAR_27->irqs[VAR_29], ((void*)0),
      VAR_33[VAR_29], VAR_13,
      FUNC_7(VAR_25), VAR_27);
  if (VAR_30) {
   FUNC_5(VAR_25, "failed to request irq %d (%d)\n", VAR_29, VAR_30);
   goto err_clk;
  }
 }


 FUNC_25(&VAR_27->lock, VAR_27->reg_proc + VAR_11,
       VAR_14 | VAR_16);
 FUNC_25(&VAR_27->lock, VAR_27->reg_proc + VAR_10,
       VAR_19 | VAR_20);


 if (FUNC_18(VAR_26, "wakeup-source")) {
  VAR_27->wkp = FUNC_20(VAR_24, "wakeup");
  if (VAR_27->wkp < 0) {
   if (VAR_27->wkp != -VAR_3)
    FUNC_5(VAR_25, "could not get wakeup IRQ\n");
   VAR_30 = VAR_27->wkp;
   goto err_clk;
  }

  FUNC_11(VAR_25, 1);
  VAR_30 = FUNC_9(VAR_25, VAR_27->wkp);
  if (VAR_30) {
   FUNC_5(VAR_25, "Failed to set wake up irq\n");
   goto err_init_wkp;
  }
 }


 VAR_27->n_chans = FUNC_23(VAR_27->reg_base + VAR_6);
 VAR_27->n_chans &= VAR_12;

 VAR_27->controller.dev = VAR_25;
 VAR_27->controller.txdone_irq = 1;
 VAR_27->controller.ops = &VAR_21;
 VAR_27->controller.num_chans = VAR_27->n_chans;
 VAR_27->controller.chans = FUNC_14(VAR_25, VAR_27->controller.num_chans,
           sizeof(*VAR_27->controller.chans),
           VAR_4);
 if (!VAR_27->controller.chans) {
  VAR_30 = -VAR_2;
  goto err_irq_wkp;
 }

 for (VAR_29 = 0; VAR_29 < VAR_27->controller.num_chans; VAR_29++)
  VAR_27->controller.chans[VAR_29].con_priv = (void *)VAR_29;

 VAR_30 = FUNC_16(VAR_25, &VAR_27->controller);
 if (VAR_30)
  goto err_irq_wkp;

 FUNC_22(VAR_24, VAR_27);

 VAR_31 = FUNC_23(VAR_27->reg_base + VAR_9);

 FUNC_6(VAR_25, "ipcc rev:%ld.%ld enabled, %d chans, proc %d\n",
   FUNC_0(VAR_17, VAR_31),
   FUNC_0(VAR_18, VAR_31),
   VAR_27->controller.num_chans, VAR_27->proc_id);

 FUNC_3(VAR_27->clk);
 return 0;

err_irq_wkp:
 if (VAR_27->wkp)
  FUNC_8(VAR_25);
err_init_wkp:
 FUNC_10(VAR_25, 0);
err_clk:
 FUNC_3(VAR_27->clk);
 return VAR_30;
}
