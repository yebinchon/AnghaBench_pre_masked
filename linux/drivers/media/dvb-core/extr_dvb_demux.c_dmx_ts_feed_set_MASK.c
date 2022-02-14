
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dvb_demux_feed {int ts_type; int pes_type; int state; int timeout; scalar_t__ pid; struct dvb_demux* demux; } ;
struct dvb_demux {int mutex; scalar_t__* pids; struct dvb_demux_feed** pesfilter; } ;
struct dmx_ts_feed {int dummy; } ;
typedef int ktime_t ;
typedef enum dmx_ts_pes { ____Placeholder_dmx_ts_pes } dmx_ts_pes ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dvb_demux_feed*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dmx_ts_feed *VAR_6, u16 VAR_7, int VAR_8,
      enum dmx_ts_pes VAR_9, ktime_t VAR_10)
{
 struct dvb_demux_feed *VAR_11 = (struct dvb_demux_feed *)VAR_6;
 struct dvb_demux *VAR_12 = VAR_11->demux;

 if (VAR_7 > VAR_0)
  return -VAR_3;

 if (FUNC_1(&VAR_12->mutex))
  return -VAR_4;

 if (VAR_8 & VAR_5) {
  if (VAR_9 >= VAR_1) {
   FUNC_2(&VAR_12->mutex);
   return -VAR_3;
  }

  if (VAR_12->pesfilter[VAR_9] &&
      VAR_12->pesfilter[VAR_9] != VAR_11) {
   FUNC_2(&VAR_12->mutex);
   return -VAR_3;
  }

  VAR_12->pesfilter[VAR_9] = VAR_11;
  VAR_12->pids[VAR_9] = VAR_7;
 }

 FUNC_0(VAR_11);

 VAR_11->pid = VAR_7;
 VAR_11->timeout = VAR_10;
 VAR_11->ts_type = VAR_8;
 VAR_11->pes_type = VAR_9;

 VAR_11->state = VAR_2;
 FUNC_2(&VAR_12->mutex);

 return 0;
}
