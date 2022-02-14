
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_client {scalar_t__ knows_txdone; } ;
struct mbox_chan {scalar_t__ txdone_method; int lock; int tx_complete; struct mbox_client* cl; int * active_req; scalar_t__ msg_count; scalar_t__ msg_free; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 struct mbox_chan* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mbox_chan*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,int,int ,int ,int ,struct mbox_chan*) ;
 struct mbox_chan* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (struct mbox_chan*) ;
 int VAR_6 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

struct mbox_chan *FUNC_10(struct mbox_client *VAR_7,
  int VAR_8)
{
 struct device *VAR_9 = VAR_5.dev;
 struct mbox_chan *VAR_10;
 unsigned long VAR_11;
 VAR_10 = FUNC_4(VAR_8);

 if (FUNC_1(VAR_10) || VAR_10->cl) {
  FUNC_2(VAR_9, "Channel not found for idx: %d\n", VAR_8);
  return FUNC_0(-VAR_0);
 }

 FUNC_7(&VAR_10->lock, VAR_11);
 VAR_10->msg_free = 0;
 VAR_10->msg_count = 0;
 VAR_10->active_req = ((void*)0);
 VAR_10->cl = VAR_7;
 FUNC_5(&VAR_10->tx_complete);

 if (VAR_10->txdone_method == VAR_3 && VAR_7->knows_txdone)
  VAR_10->txdone_method = VAR_2;

 FUNC_8(&VAR_10->lock, VAR_11);

 if (VAR_4[VAR_8] > 0) {
  int VAR_12;

  VAR_12 = FUNC_3(VAR_9, VAR_4[VAR_8],
          VAR_6, 0, VAR_1, VAR_10);
  if (FUNC_9(VAR_12)) {
   FUNC_2(VAR_9, "failed to register PCC interrupt %d\n",
    VAR_4[VAR_8]);
   FUNC_6(VAR_10);
   VAR_10 = FUNC_0(VAR_12);
  }
 }

 return VAR_10;
}
