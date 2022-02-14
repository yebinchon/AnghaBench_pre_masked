
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct dvb_demux {int lock; TYPE_2__* feed; } ;
struct TYPE_6__ {int ts; } ;
struct TYPE_4__ {int (* ts ) (int const*,size_t,int *,int ,int *,int *) ;} ;
struct TYPE_5__ {int buffer_flags; TYPE_3__ feed; TYPE_1__ cb; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int const*,size_t,int *,int ,int *,int *) ;

void FUNC_3(struct dvb_demux *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);

 VAR_0->feed->cb.ts(VAR_1, VAR_2, ((void*)0), 0, &VAR_0->feed->feed.ts,
      &VAR_0->feed->buffer_flags);

 FUNC_1(&VAR_0->lock, VAR_3);
}
