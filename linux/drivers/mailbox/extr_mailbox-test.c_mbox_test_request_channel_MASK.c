
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mbox_client {int tx_block; int knows_txdone; int tx_tout; int tx_done; int tx_prepare; int rx_callback; int * dev; } ;
struct mbox_chan {int dummy; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mbox_chan*) ;
 int FUNC_2 (int *,char*,char const*) ;
 struct mbox_client* FUNC_3 (int *,int,int ) ;
 struct mbox_chan* FUNC_4 (struct mbox_client*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct mbox_chan *
FUNC_5(struct platform_device *VAR_5, const char *VAR_6)
{
 struct mbox_client *VAR_7;
 struct mbox_chan *VAR_8;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->dev = &VAR_5->dev;
 VAR_7->rx_callback = VAR_4;
 VAR_7->tx_prepare = VAR_3;
 VAR_7->tx_done = VAR_2;
 VAR_7->tx_block = 1;
 VAR_7->knows_txdone = 0;
 VAR_7->tx_tout = 500;

 VAR_8 = FUNC_4(VAR_7, VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_2(&VAR_5->dev, "Failed to request %s channel\n", VAR_6);
  return ((void*)0);
 }

 return VAR_8;
}
