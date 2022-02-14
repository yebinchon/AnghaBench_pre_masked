
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int threadio; } ;
struct vb2_dvb {int nfeeds; int lock; int name; TYPE_2__ dvbq; } ;
struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct TYPE_3__ {int frontend; } ;
struct dvb_demux {TYPE_1__ dmx; struct vb2_dvb* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,struct vb2_dvb*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_demux_feed *VAR_2)
{
 struct dvb_demux *VAR_3 = VAR_2->demux;
 struct vb2_dvb *VAR_4 = VAR_3->priv;
 int VAR_5 = 0;

 if (!VAR_3->dmx.frontend)
  return -VAR_0;

 FUNC_0(&VAR_4->lock);
 VAR_4->nfeeds++;

 if (!VAR_4->dvbq.threadio) {
  VAR_5 = FUNC_2(&VAR_4->dvbq, VAR_1, VAR_4, VAR_4->name);
  if (VAR_5)
   VAR_4->nfeeds--;
 }
 if (!VAR_5)
  VAR_5 = VAR_4->nfeeds;
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
