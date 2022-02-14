
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct mbox_client {int tx_block; int knows_txdone; int rx_callback; struct device* dev; } ;
struct imx_dsp_ipc {struct imx_dsp_chan* chans; struct device* dev; } ;
struct imx_dsp_chan {int idx; int ch; struct imx_dsp_ipc* ipc; struct mbox_client cl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct device*,char*,char*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct imx_dsp_ipc*) ;
 int FUNC_6 (struct device*,int ) ;
 struct imx_dsp_ipc* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*) ;
 int VAR_4 ;
 char* FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mbox_client*,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct imx_dsp_ipc *VAR_7;
 struct imx_dsp_chan *VAR_8;
 struct mbox_client *VAR_9;
 char *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 FUNC_6(&VAR_5->dev, VAR_5->dev.parent);

 VAR_7 = FUNC_7(VAR_6, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_12 < 2)
   VAR_10 = FUNC_9(VAR_3, "txdb%d", VAR_12);
  else
   VAR_10 = FUNC_9(VAR_3, "rxdb%d", VAR_12 - 2);

  if (!VAR_10)
   return -VAR_1;

  VAR_8 = &VAR_7->chans[VAR_12];
  VAR_9 = &VAR_8->cl;
  VAR_9->dev = VAR_6;
  VAR_9->tx_block = 0;
  VAR_9->knows_txdone = 1;
  VAR_9->rx_callback = VAR_4;

  VAR_8->ipc = VAR_7;
  VAR_8->idx = VAR_12 % 2;
  VAR_8->ch = FUNC_12(VAR_9, VAR_10);
  if (FUNC_0(VAR_8->ch)) {
   VAR_11 = FUNC_1(VAR_8->ch);
   if (VAR_11 != -VAR_2)
    FUNC_3(VAR_6, "Failed to request mbox chan %s ret %d\n",
     VAR_10, VAR_11);
   goto out;
  }

  FUNC_2(VAR_6, "request mbox chan %s\n", VAR_10);

  FUNC_10(VAR_10);
 }

 VAR_7->dev = VAR_6;

 FUNC_5(VAR_6, VAR_7);

 FUNC_4(VAR_6, "NXP i.MX DSP IPC initialized\n");

 return FUNC_8(VAR_6);
out:
 FUNC_10(VAR_10);
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_8 = &VAR_7->chans[VAR_13];
  FUNC_11(VAR_8->ch);
 }

 return VAR_11;
}
