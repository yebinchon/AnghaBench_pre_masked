
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int rx_in ;
struct TYPE_10__ {int * ptr; int limit; int start; } ;
struct TYPE_11__ {scalar_t__ pending; scalar_t__ maximum; int lock; TYPE_2__ in; } ;
typedef TYPE_3__ amb_rxq ;
struct TYPE_12__ {TYPE_3__* rxq; } ;
typedef TYPE_4__ amb_dev ;
struct TYPE_9__ {int * rx_address; } ;
struct TYPE_13__ {TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int,char*,TYPE_4__*,...) ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_7 (amb_dev * VAR_4, rx_in * VAR_5, unsigned char VAR_6) {
  amb_rxq * VAR_7 = &VAR_4->rxq[VAR_6];
  unsigned long VAR_8;

  FUNC_1 (VAR_0|VAR_1, "rx_give %p[%hu]", VAR_4, VAR_6);

  FUNC_3 (&VAR_7->lock, VAR_8);

  if (VAR_7->pending < VAR_7->maximum) {
    FUNC_1 (VAR_1, "RX in slot %p", VAR_7->in.ptr);

    *VAR_7->in.ptr = *VAR_5;
    VAR_7->pending++;
    VAR_7->in.ptr = FUNC_0 (VAR_7->in.ptr, VAR_7->in.start, VAR_7->in.limit);

    FUNC_6 (VAR_4, FUNC_2(VAR_2, VAR_3.adapter.rx_address[VAR_6]), FUNC_5 (VAR_7->in.ptr));

    FUNC_4 (&VAR_7->lock, VAR_8);
    return 0;
  } else {
    FUNC_4 (&VAR_7->lock, VAR_8);
    return -1;
  }
}
