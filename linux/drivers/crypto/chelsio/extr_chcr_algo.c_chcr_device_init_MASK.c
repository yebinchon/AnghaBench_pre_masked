
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ntxq; int nrxq; int nchan; } ;
struct TYPE_4__ {int tx_channel_id; int lock_chcr_dev; } ;
struct uld_ctx {TYPE_1__ lldi; TYPE_2__ dev; } ;
struct chcr_context {int tx_chan_id; int rx_qidx; int tx_qidx; int pci_chan_id; TYPE_2__* dev; } ;


 int VAR_0 ;
 struct uld_ctx* FUNC_0 () ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct chcr_context *VAR_1)
{
 struct uld_ctx *VAR_2 = ((void*)0);
 unsigned int VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;

 VAR_3 = FUNC_2();
 if (!VAR_1->dev) {
  VAR_2 = FUNC_0();
  if (!VAR_2) {
   VAR_7 = -VAR_0;
   FUNC_1("chcr device assignment fails\n");
   goto out;
  }
  VAR_1->dev = &VAR_2->dev;
  VAR_6 = VAR_2->lldi.ntxq;
  VAR_8 = VAR_2->lldi.nrxq / VAR_2->lldi.nchan;
  VAR_4 = VAR_6 / VAR_2->lldi.nchan;
  FUNC_3(&VAR_1->dev->lock_chcr_dev);
  VAR_1->tx_chan_id = VAR_1->dev->tx_channel_id;
  VAR_1->dev->tx_channel_id = !VAR_1->dev->tx_channel_id;
  FUNC_4(&VAR_1->dev->lock_chcr_dev);
  VAR_9 = VAR_1->tx_chan_id * VAR_8;
  VAR_9 += VAR_3 % VAR_8;
  VAR_5 = VAR_1->tx_chan_id * VAR_4;
  VAR_5 += VAR_3 % VAR_4;
  VAR_1->rx_qidx = VAR_9;
  VAR_1->tx_qidx = VAR_5;





  VAR_1->pci_chan_id = VAR_5 / VAR_4;
 }
out:
 return VAR_7;
}
