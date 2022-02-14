
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* flags; } ;
struct TYPE_12__ {TYPE_1__ flush; } ;
struct TYPE_13__ {TYPE_2__ args; void* request; } ;
typedef TYPE_3__ command ;
struct TYPE_14__ {scalar_t__ pending; scalar_t__ buffers_wanted; } ;
typedef TYPE_4__ amb_rxq ;
struct TYPE_15__ {int flags; TYPE_4__* rxq; } ;
typedef TYPE_5__ amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,TYPE_5__*,unsigned char) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 void* FUNC_2 (unsigned char) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_5__*,unsigned char) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6 (amb_dev * VAR_5, unsigned char VAR_6) {
  amb_rxq * VAR_7 = &VAR_5->rxq[VAR_6];

  FUNC_0 (VAR_0|VAR_1, "drain_rx_pool %p %hu", VAR_5, VAR_6);

  if (FUNC_5 (VAR_4, &VAR_5->flags))
    return;




  if (VAR_7->pending > VAR_7->buffers_wanted) {
    command VAR_8;
    VAR_8.request = FUNC_2 (VAR_2);
    VAR_8.args.flush.flags = FUNC_2 (VAR_6 << VAR_3);
    while (FUNC_1 (VAR_5, &VAR_8))
      FUNC_4();

    while (VAR_7->pending > VAR_7->buffers_wanted)
      if (FUNC_3 (VAR_5, VAR_6))
 FUNC_4();
  }

  return;
}
