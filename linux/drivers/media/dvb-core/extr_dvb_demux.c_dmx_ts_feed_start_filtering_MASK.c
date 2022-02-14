
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {scalar_t__ state; scalar_t__ type; struct dvb_demux* demux; } ;
struct dvb_demux {int (* start_feed ) (struct dvb_demux_feed*) ;int mutex; int lock; } ;
struct dmx_ts_feed {int is_filtering; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dvb_demux_feed*) ;

__attribute__((used)) static int FUNC_5(struct dmx_ts_feed *VAR_6)
{
 struct dvb_demux_feed *VAR_7 = (struct dvb_demux_feed *)VAR_6;
 struct dvb_demux *VAR_8 = VAR_7->demux;
 int VAR_9;

 if (FUNC_0(&VAR_8->mutex))
  return -VAR_5;

 if (VAR_7->state != VAR_1 || VAR_7->type != VAR_2) {
  FUNC_1(&VAR_8->mutex);
  return -VAR_3;
 }

 if (!VAR_8->start_feed) {
  FUNC_1(&VAR_8->mutex);
  return -VAR_4;
 }

 if ((VAR_9 = VAR_8->start_feed(VAR_7)) < 0) {
  FUNC_1(&VAR_8->mutex);
  return VAR_9;
 }

 FUNC_2(&VAR_8->lock);
 VAR_6->is_filtering = 1;
 VAR_7->state = VAR_0;
 FUNC_3(&VAR_8->lock);
 FUNC_1(&VAR_8->mutex);

 return 0;
}
