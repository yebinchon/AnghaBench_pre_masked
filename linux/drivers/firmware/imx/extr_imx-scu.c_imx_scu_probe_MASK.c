
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mbox_client {int tx_block; int knows_txdone; int rx_callback; struct device* dev; } ;
struct imx_sc_ipc {int done; int lock; struct device* dev; struct imx_sc_chan* chans; } ;
struct imx_sc_chan {int idx; int ch; struct imx_sc_ipc* sc_ipc; struct mbox_client cl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct device*,char*,char*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct imx_sc_ipc* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*) ;
 struct imx_sc_ipc* VAR_4 ;
 int FUNC_8 (struct device*) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int ,char*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct mbox_client*,char*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct imx_sc_ipc *VAR_8;
 struct imx_sc_chan *VAR_9;
 struct mbox_client *VAR_10;
 char *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_8 = FUNC_6(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  if (VAR_13 < 4)
   VAR_11 = FUNC_10(VAR_2, "tx%d", VAR_13);
  else
   VAR_11 = FUNC_10(VAR_2, "rx%d", VAR_13 - 4);

  if (!VAR_11)
   return -VAR_0;

  VAR_9 = &VAR_8->chans[VAR_13];
  VAR_10 = &VAR_9->cl;
  VAR_10->dev = VAR_7;
  VAR_10->tx_block = 0;
  VAR_10->knows_txdone = 1;
  VAR_10->rx_callback = VAR_5;

  VAR_9->sc_ipc = VAR_8;
  VAR_9->idx = VAR_13 % 4;
  VAR_9->ch = FUNC_12(VAR_10, VAR_11);
  if (FUNC_0(VAR_9->ch)) {
   VAR_12 = FUNC_1(VAR_9->ch);
   if (VAR_12 != -VAR_1)
    FUNC_3(VAR_7, "Failed to request mbox chan %s ret %d\n",
     VAR_11, VAR_12);
   return VAR_12;
  }

  FUNC_2(VAR_7, "request mbox chan %s\n", VAR_11);

  FUNC_11(VAR_11);
 }

 VAR_8->dev = VAR_7;
 FUNC_13(&VAR_8->lock);
 FUNC_9(&VAR_8->done);

 VAR_4 = VAR_8;

 VAR_12 = FUNC_8(VAR_7);
 if (VAR_12)
  FUNC_5(VAR_7,
   "failed to enable general irq channel: %d\n", VAR_12);

 FUNC_4(VAR_7, "NXP i.MX SCU Initialized\n");

 return FUNC_7(VAR_7);
}
