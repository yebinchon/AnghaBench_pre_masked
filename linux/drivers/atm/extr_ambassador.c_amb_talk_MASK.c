
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_21__ {int limit; int start; } ;
struct TYPE_20__ {int limit; int start; } ;
struct TYPE_22__ {TYPE_4__ out; TYPE_3__ in; } ;
struct TYPE_18__ {int limit; int start; } ;
struct TYPE_19__ {TYPE_1__ ptrs; } ;
struct TYPE_16__ {TYPE_9__* rxq; TYPE_5__ txq; TYPE_2__ cq; } ;
typedef TYPE_10__ amb_dev ;
struct TYPE_17__ {scalar_t__ init_flags; TYPE_8__* rec_struct; void* txcom_end; void* txcom_start; void* tx_end; void* tx_start; void* command_end; void* command_start; } ;
typedef TYPE_11__ adap_talk_block ;
struct TYPE_24__ {int limit; int start; } ;
struct TYPE_23__ {int limit; int start; } ;
struct TYPE_26__ {int buffer_size; TYPE_7__ out; TYPE_6__ in; } ;
struct TYPE_25__ {int buffer_size; void* rx_end; void* rx_start; void* buffer_end; void* buffer_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_5 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_10__*,int ) ;
 int FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (TYPE_10__*,int ,int ) ;

__attribute__((used)) static int FUNC_9(amb_dev *VAR_7)
{
  adap_talk_block VAR_8;
  unsigned char VAR_9;
  unsigned long VAR_10;

  FUNC_0 (VAR_1, "amb_talk %p", VAR_7);

  VAR_8.command_start = FUNC_1 (VAR_7->cq.ptrs.start);
  VAR_8.command_end = FUNC_1 (VAR_7->cq.ptrs.limit);
  VAR_8.tx_start = FUNC_1 (VAR_7->txq.in.start);
  VAR_8.tx_end = FUNC_1 (VAR_7->txq.in.limit);
  VAR_8.txcom_start = FUNC_1 (VAR_7->txq.out.start);
  VAR_8.txcom_end = FUNC_1 (VAR_7->txq.out.limit);

  for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {

    VAR_8.rec_struct[VAR_9].buffer_start = FUNC_1 (VAR_7->rxq[VAR_9].in.start);
    VAR_8.rec_struct[VAR_9].buffer_end = FUNC_1 (VAR_7->rxq[VAR_9].in.limit);
    VAR_8.rec_struct[VAR_9].rx_start = FUNC_1 (VAR_7->rxq[VAR_9].out.start);
    VAR_8.rec_struct[VAR_9].rx_end = FUNC_1 (VAR_7->rxq[VAR_9].out.limit);
    VAR_8.rec_struct[VAR_9].buffer_size = FUNC_2 (VAR_7->rxq[VAR_9].buffer_size);
  }







  FUNC_8 (VAR_7, FUNC_5(VAR_5, VAR_6), FUNC_7 (&VAR_8));


  FUNC_3(2200);

  VAR_10 = 500;
  while (FUNC_6 (VAR_7, FUNC_5(VAR_5, VAR_6)))
    if (VAR_10) {
      VAR_10 = FUNC_4(VAR_10);
    } else {
      FUNC_0 (VAR_2|VAR_0, "adapter init timed out");
      return -VAR_3;
    }

  return 0;
}
