
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {TYPE_3__* ptr; int limit; int start; } ;
struct TYPE_18__ {scalar_t__ pending; scalar_t__ maximum; scalar_t__ high; int lock; int filled; TYPE_2__ in; } ;
struct TYPE_17__ {int flags; TYPE_4__ txq; } ;
typedef TYPE_3__ tx_in ;
typedef TYPE_4__ amb_txq ;
typedef TYPE_3__ amb_dev ;
struct TYPE_15__ {int tx_address; } ;
struct TYPE_14__ {TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int,char*,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_10__ VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_8 (amb_dev * VAR_8, tx_in * VAR_9) {
  amb_txq * VAR_10 = &VAR_8->txq;
  unsigned long VAR_11;

  FUNC_1 (VAR_0|VAR_1, "tx_give %p", VAR_8);

  if (FUNC_5 (VAR_5, &VAR_8->flags))
    return 0;

  FUNC_3 (&VAR_10->lock, VAR_11);

  if (VAR_10->pending < VAR_10->maximum) {
    FUNC_1 (VAR_1, "TX in slot %p", VAR_10->in.ptr);

    *VAR_10->in.ptr = *VAR_9;
    VAR_10->pending++;
    VAR_10->in.ptr = FUNC_0 (VAR_10->in.ptr, VAR_10->in.start, VAR_10->in.limit);

    FUNC_7 (VAR_8, FUNC_2(VAR_4, VAR_7.adapter.tx_address), FUNC_6 (VAR_10->in.ptr));
    FUNC_7 (VAR_8, FUNC_2(VAR_4, VAR_6), VAR_3);

    if (VAR_10->pending > VAR_10->high)
      VAR_10->high = VAR_10->pending;
    FUNC_4 (&VAR_10->lock, VAR_11);
    return 0;
  } else {
    VAR_10->filled++;
    FUNC_4 (&VAR_10->lock, VAR_11);
    return -VAR_2;
  }
}
