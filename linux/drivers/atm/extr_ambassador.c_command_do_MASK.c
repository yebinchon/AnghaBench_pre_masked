
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ request; } ;
typedef TYPE_2__ command ;
struct TYPE_16__ {int limit; int start; TYPE_2__* out; TYPE_2__* in; } ;
struct TYPE_17__ {scalar_t__ pending; scalar_t__ maximum; scalar_t__ high; int lock; int filled; TYPE_4__ ptrs; } ;
struct TYPE_15__ {int flags; TYPE_5__ cq; } ;
typedef TYPE_3__ amb_dev ;
typedef TYPE_4__ amb_cq_ptrs ;
typedef TYPE_5__ amb_cq ;
struct TYPE_13__ {int cmd_address; } ;
struct TYPE_18__ {TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_8__ VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_13 (amb_dev * VAR_8, command * VAR_9) {
  amb_cq * VAR_10 = &VAR_8->cq;
  volatile amb_cq_ptrs * VAR_11 = &VAR_10->ptrs;
  command * VAR_12;

  FUNC_1 (VAR_1|VAR_0, "command_do %p", VAR_8);

  if (FUNC_10 (VAR_6, &VAR_8->flags))
    return 0;

  FUNC_8 (&VAR_10->lock);


  if (VAR_10->pending < VAR_10->maximum) {

    VAR_12 = VAR_11->in;
    FUNC_1 (VAR_0, "command in slot %p", VAR_12);

    FUNC_3 (VAR_9);


    *VAR_11->in = *VAR_9;
    VAR_10->pending++;
    VAR_11->in = FUNC_0 (VAR_11->in, VAR_11->start, VAR_11->limit);


    FUNC_12 (VAR_8, FUNC_5(VAR_5, VAR_7.adapter.cmd_address), FUNC_11 (VAR_11->in));

    if (VAR_10->pending > VAR_10->high)
      VAR_10->high = VAR_10->pending;
    FUNC_9 (&VAR_10->lock);




    FUNC_4(VAR_10->pending);


    while (VAR_11->out != VAR_12) {
      FUNC_1 (VAR_0, "wait: command slot (now at %p)", VAR_11->out);
      FUNC_7(VAR_4);
      FUNC_6();
    }


    while (VAR_11->out->request != FUNC_2 (VAR_3)) {
      FUNC_1 (VAR_0, "wait: command slot completion");
      FUNC_7(VAR_4);
      FUNC_6();
    }

    FUNC_1 (VAR_0, "command complete");

    FUNC_8 (&VAR_10->lock);
    VAR_10->pending--;

    *VAR_9 = *VAR_11->out;
    VAR_11->out = FUNC_0 (VAR_11->out, VAR_11->start, VAR_11->limit);
    FUNC_9 (&VAR_10->lock);

    return 0;
  } else {
    VAR_10->filled++;
    FUNC_9 (&VAR_10->lock);
    return -VAR_2;
  }

}
