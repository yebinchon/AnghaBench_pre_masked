
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int num_chans; int txdone_irq; int txdone_poll; TYPE_1__* chans; int of_xlate; int * ops; struct device* dev; } ;
struct cmdq {int thread_nr; scalar_t__ clock; TYPE_3__ mbox; TYPE_2__* thread; scalar_t__ base; int irq; int irq_mask; } ;
struct TYPE_5__ {int task_busy_list; scalar_t__ base; } ;
struct TYPE_4__ {void* con_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct cmdq*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct device*,char*,struct device*,scalar_t__,int ) ;
 int FUNC_8 (struct device*,char*,...) ;
 scalar_t__ FUNC_9 (struct device*,char*) ;
 scalar_t__ FUNC_10 (struct device*,struct resource*) ;
 void* FUNC_11 (struct device*,int,int,int ) ;
 struct cmdq* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,TYPE_3__*) ;
 int FUNC_14 (struct device*,int ,int ,int ,char*,struct cmdq*) ;
 scalar_t__ FUNC_15 (struct device*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct cmdq*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct resource *VAR_12;
 struct cmdq *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_12(VAR_11, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_12 = FUNC_17(VAR_10, VAR_5, 0);
 VAR_13->base = FUNC_10(VAR_11, VAR_12);
 if (FUNC_2(VAR_13->base)) {
  FUNC_8(VAR_11, "failed to ioremap gce\n");
  return FUNC_3(VAR_13->base);
 }

 VAR_13->irq = FUNC_16(VAR_10, 0);
 if (!VAR_13->irq) {
  FUNC_8(VAR_11, "failed to get irq\n");
  return -VAR_2;
 }

 VAR_13->thread_nr = (u32)(unsigned long)FUNC_15(VAR_11);
 VAR_13->irq_mask = FUNC_0(VAR_13->thread_nr - 1, 0);
 VAR_14 = FUNC_14(VAR_11, VAR_13->irq, VAR_7, VAR_6,
          "mtk_cmdq", VAR_13);
 if (VAR_14 < 0) {
  FUNC_8(VAR_11, "failed to register ISR (%d)\n", VAR_14);
  return VAR_14;
 }

 FUNC_7(VAR_11, "cmdq device: addr:0x%p, va:0x%p, irq:%d\n",
  VAR_11, VAR_13->base, VAR_13->irq);

 VAR_13->clock = FUNC_9(VAR_11, "gce");
 if (FUNC_2(VAR_13->clock)) {
  FUNC_8(VAR_11, "failed to get gce clk\n");
  return FUNC_3(VAR_13->clock);
 }

 VAR_13->mbox.dev = VAR_11;
 VAR_13->mbox.chans = FUNC_11(VAR_11, VAR_13->thread_nr,
     sizeof(*VAR_13->mbox.chans), VAR_4);
 if (!VAR_13->mbox.chans)
  return -VAR_3;

 VAR_13->mbox.num_chans = VAR_13->thread_nr;
 VAR_13->mbox.ops = &VAR_8;
 VAR_13->mbox.of_xlate = VAR_9;


 VAR_13->mbox.txdone_irq = 0;
 VAR_13->mbox.txdone_poll = 0;

 VAR_13->thread = FUNC_11(VAR_11, VAR_13->thread_nr,
     sizeof(*VAR_13->thread), VAR_4);
 if (!VAR_13->thread)
  return -VAR_3;

 for (VAR_15 = 0; VAR_15 < VAR_13->thread_nr; VAR_15++) {
  VAR_13->thread[VAR_15].base = VAR_13->base + VAR_0 +
    VAR_1 * VAR_15;
  FUNC_1(&VAR_13->thread[VAR_15].task_busy_list);
  VAR_13->mbox.chans[VAR_15].con_priv = (void *)&VAR_13->thread[VAR_15];
 }

 VAR_14 = FUNC_13(VAR_11, &VAR_13->mbox);
 if (VAR_14 < 0) {
  FUNC_8(VAR_11, "failed to register mailbox: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_18(VAR_10, VAR_13);
 FUNC_4(FUNC_5(VAR_13->clock) < 0);

 FUNC_6(VAR_13);

 return 0;
}
