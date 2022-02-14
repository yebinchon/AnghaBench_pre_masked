
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbox_client {int tx_block; int knows_txdone; int * tx_done; int rx_callback; scalar_t__ tx_tout; struct device* dev; } ;
struct mbox_chan {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int num_chan; } ;
struct TYPE_4__ {int ** mbox; TYPE_1__ spu; struct mbox_client mcl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int ** FUNC_3 (struct device*,int,int,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (struct mbox_client*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4)
{
 struct mbox_client *VAR_5 = &VAR_2.mcl;
 int VAR_6, VAR_7;

 VAR_2.mbox = FUNC_3(VAR_4, VAR_2.spu.num_chan,
      sizeof(struct mbox_chan *), VAR_1);
 if (!VAR_2.mbox)
  return -VAR_0;

 VAR_5->dev = VAR_4;
 VAR_5->tx_block = 0;
 VAR_5->tx_tout = 0;
 VAR_5->knows_txdone = 1;
 VAR_5->rx_callback = VAR_3;
 VAR_5->tx_done = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_2.spu.num_chan; VAR_7++) {
  VAR_2.mbox[VAR_7] = FUNC_5(VAR_5, VAR_7);
  if (FUNC_0(VAR_2.mbox[VAR_7])) {
   VAR_6 = (int)FUNC_1(VAR_2.mbox[VAR_7]);
   FUNC_2(VAR_4,
    "Mbox channel %d request failed with err %d",
    VAR_7, VAR_6);
   VAR_2.mbox[VAR_7] = ((void*)0);
   goto free_channels;
  }
 }

 return 0;
free_channels:
 for (VAR_7 = 0; VAR_7 < VAR_2.spu.num_chan; VAR_7++) {
  if (VAR_2.mbox[VAR_7])
   FUNC_4(VAR_2.mbox[VAR_7]);
 }

 return VAR_6;
}
