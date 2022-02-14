
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
typedef int loff_t ;
struct TYPE_9__ {int pending; int maximum; int high; int filled; } ;
typedef TYPE_2__ amb_txq ;
struct TYPE_8__ {int unused; int aborted; int toolong; int badcrc; int error; int ok; } ;
struct TYPE_10__ {TYPE_1__ rx; int tx_ok; } ;
typedef TYPE_3__ amb_stats ;
struct TYPE_11__ {int pending; int maximum; int buffers_wanted; int low; int emptied; int buffer_size; } ;
typedef TYPE_4__ amb_rxq ;
struct TYPE_13__ {int pending; int high; int maximum; } ;
struct TYPE_12__ {TYPE_4__* rxq; TYPE_2__ txq; TYPE_6__ cq; TYPE_3__ stats; } ;
typedef TYPE_5__ amb_dev ;
typedef TYPE_6__ amb_cq ;


 TYPE_5__* FUNC_0 (struct atm_dev*) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3 (struct atm_dev * VAR_2, loff_t * VAR_3, char * VAR_4) {
  amb_dev * VAR_5 = FUNC_0 (VAR_2);
  int VAR_6 = *VAR_3;
  unsigned char VAR_7;

  FUNC_1 (VAR_0, "amb_proc_read");



  if (!VAR_6--) {
    amb_stats * VAR_8 = &VAR_5->stats;
    return FUNC_2 (VAR_4,
      "frames: TX OK %lu, RX OK %lu, RX bad %lu "
      "(CRC %lu, long %lu, aborted %lu, unused %lu).\n",
      VAR_8->tx_ok, VAR_8->rx.ok, VAR_8->rx.error,
      VAR_8->rx.badcrc, VAR_8->rx.toolong,
      VAR_8->rx.aborted, VAR_8->rx.unused);
  }

  if (!VAR_6--) {
    amb_cq * VAR_9 = &VAR_5->cq;
    return FUNC_2 (VAR_4, "cmd queue [cur/hi/max]: %u/%u/%u. ",
      VAR_9->pending, VAR_9->high, VAR_9->maximum);
  }

  if (!VAR_6--) {
    amb_txq * VAR_10 = &VAR_5->txq;
    return FUNC_2 (VAR_4, "TX queue [cur/max high full]: %u/%u %u %u.\n",
      VAR_10->pending, VAR_10->maximum, VAR_10->high, VAR_10->filled);
  }

  if (!VAR_6--) {
    unsigned int VAR_11 = FUNC_2 (VAR_4, "RX queues [cur/max/req low empty]:");
    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
      amb_rxq * VAR_12 = &VAR_5->rxq[VAR_7];
      VAR_11 += FUNC_2 (VAR_4+VAR_11, " %u/%u/%u %u %u",
   VAR_12->pending, VAR_12->maximum, VAR_12->buffers_wanted, VAR_12->low, VAR_12->emptied);
    }
    VAR_11 += FUNC_2 (VAR_4+VAR_11, ".\n");
    return VAR_11;
  }

  if (!VAR_6--) {
    unsigned int VAR_13 = FUNC_2 (VAR_4, "RX buffer sizes:");
    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
      amb_rxq * VAR_14 = &VAR_5->rxq[VAR_7];
      VAR_13 += FUNC_2 (VAR_4+VAR_13, " %u", VAR_14->buffer_size);
    }
    VAR_13 += FUNC_2 (VAR_4+VAR_13, ".\n");
    return VAR_13;
  }







  return 0;
}
