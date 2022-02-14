
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {unsigned int num_chans; int txdone_irq; int of_xlate; TYPE_1__* chans; int * ops; struct device* dev; } ;
struct imx_mu_priv {scalar_t__ irq; TYPE_2__ mbox; TYPE_1__* mbox_chans; int xcr_lock; int side_b; struct imx_mu_con_priv* con_priv; int * clk; int * base; struct device* dev; } ;
struct imx_mu_con_priv {unsigned int idx; unsigned int type; int irq_desc; TYPE_1__* chan; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct imx_mu_con_priv* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (struct device*,int *) ;
 struct imx_mu_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,TYPE_2__*) ;
 int * FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct imx_mu_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct device_node*,char*) ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct imx_mu_priv*) ;
 int FUNC_12 (int ,int,char*,unsigned int,unsigned int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 struct imx_mu_priv *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_7;

 VAR_9->base = FUNC_7(VAR_6, 0);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->irq = FUNC_10(VAR_6, 0);
 if (VAR_9->irq < 0)
  return VAR_9->irq;

 VAR_9->clk = FUNC_4(VAR_7, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  if (FUNC_1(VAR_9->clk) != -VAR_0)
   return FUNC_1(VAR_9->clk);

  VAR_9->clk = ((void*)0);
 }

 VAR_11 = FUNC_2(VAR_9->clk);
 if (VAR_11) {
  FUNC_3(VAR_7, "Failed to enable clock\n");
  return VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct imx_mu_con_priv *VAR_12 = &VAR_9->con_priv[VAR_10];

  VAR_12->idx = VAR_10 % 4;
  VAR_12->type = VAR_10 >> 2;
  VAR_12->chan = &VAR_9->mbox_chans[VAR_10];
  VAR_9->mbox_chans[VAR_10].con_priv = VAR_12;
  FUNC_12(VAR_12->irq_desc, sizeof(VAR_12->irq_desc),
    "imx_mu_chan[%i-%i]", VAR_12->type, VAR_12->idx);
 }

 VAR_9->side_b = FUNC_9(VAR_8, "fsl,mu-side-b");

 FUNC_13(&VAR_9->xcr_lock);

 VAR_9->mbox.dev = VAR_7;
 VAR_9->mbox.ops = &VAR_4;
 VAR_9->mbox.chans = VAR_9->mbox_chans;
 VAR_9->mbox.num_chans = VAR_3;
 VAR_9->mbox.of_xlate = VAR_5;
 VAR_9->mbox.txdone_irq = 1;

 FUNC_11(VAR_6, VAR_9);

 FUNC_8(VAR_9);

 return FUNC_6(VAR_7, &VAR_9->mbox);
}
