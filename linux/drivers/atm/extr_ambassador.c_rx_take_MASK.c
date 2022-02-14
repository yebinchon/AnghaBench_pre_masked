
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int limit; int start; TYPE_6__* ptr; } ;
struct TYPE_11__ {scalar_t__ pending; scalar_t__ low; int lock; int emptied; scalar_t__ buffers_wanted; TYPE_1__ out; } ;
typedef TYPE_2__ amb_rxq ;
struct TYPE_12__ {TYPE_2__* rxq; } ;
typedef TYPE_3__ amb_dev ;
struct TYPE_13__ {scalar_t__ length; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_6__*,int ,int ) ;
 int FUNC_1 (int,char*,TYPE_3__*,unsigned char) ;
 int FUNC_2 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5 (amb_dev * VAR_2, unsigned char VAR_3) {
  amb_rxq * VAR_4 = &VAR_2->rxq[VAR_3];
  unsigned long VAR_5;

  FUNC_1 (VAR_0|VAR_1, "rx_take %p[%hu]", VAR_2, VAR_3);

  FUNC_3 (&VAR_4->lock, VAR_5);

  if (VAR_4->pending && (VAR_4->out.ptr->status || VAR_4->out.ptr->length)) {

    FUNC_2 (VAR_2, VAR_4->out.ptr);

    VAR_4->out.ptr->status = 0;
    VAR_4->out.ptr->length = 0;

    VAR_4->pending--;
    VAR_4->out.ptr = FUNC_0 (VAR_4->out.ptr, VAR_4->out.start, VAR_4->out.limit);

    if (VAR_4->pending < VAR_4->low)
      VAR_4->low = VAR_4->pending;
    FUNC_4 (&VAR_4->lock, VAR_5);
    return 0;
  } else {
    if (!VAR_4->pending && VAR_4->buffers_wanted)
      VAR_4->emptied++;
    FUNC_4 (&VAR_4->lock, VAR_5);
    return -1;
  }
}
