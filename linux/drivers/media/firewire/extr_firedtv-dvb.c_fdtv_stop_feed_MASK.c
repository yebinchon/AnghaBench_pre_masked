
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct firedtv {int demux_mutex; } ;
struct dvb_demux_feed {scalar_t__ type; int ts_type; size_t pes_type; scalar_t__ priv; struct dvb_demux* demux; } ;
struct TYPE_4__ {TYPE_1__* frontend; } ;
struct dvb_demux {int* pids; int ** pesfilter; TYPE_2__ dmx; struct firedtv* priv; } ;
struct TYPE_3__ {scalar_t__ source; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct firedtv*,int,int *) ;
 int FUNC_1 (struct firedtv*,int*,int *) ;
 int FUNC_2 (struct firedtv*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dvb_demux_feed *VAR_7)
{
 struct dvb_demux *VAR_8 = VAR_7->demux;
 struct firedtv *VAR_9 = VAR_8->priv;
 int VAR_10, VAR_11, VAR_12;
 u16 VAR_13[16];

 if (VAR_7->type == VAR_2 &&
     !((VAR_7->ts_type & VAR_6) &&
       (VAR_8->dmx.frontend->source != VAR_0))) {

  if (VAR_7->ts_type & VAR_5) {
   if (VAR_7->pes_type >= VAR_1 ||
       !VAR_8->pesfilter[VAR_7->pes_type])
    return -VAR_4;

   VAR_8->pids[VAR_7->pes_type] |= 0x8000;
   VAR_8->pesfilter[VAR_7->pes_type] = ((void*)0);
  }

  if (!(VAR_7->ts_type & VAR_5 &&
        VAR_7->pes_type < VAR_1))
   return 0;
 }

 if (FUNC_3(&VAR_9->demux_mutex))
  return -VAR_3;

 VAR_11 = (unsigned long)VAR_7->priv;
 FUNC_2(VAR_9, VAR_11);
 FUNC_1(VAR_9, &VAR_10, VAR_13);

 VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_13);

 FUNC_4(&VAR_9->demux_mutex);

 return VAR_12;
}
