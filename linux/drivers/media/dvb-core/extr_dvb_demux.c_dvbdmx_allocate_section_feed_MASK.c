
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmx_section_feed {int release_filter; int stop_filtering; int start_filtering; int allocate_filter; int set; int * priv; struct dmx_demux* parent; scalar_t__ is_filtering; scalar_t__ tsfeedp; scalar_t__ seclen; scalar_t__ secbufp; int secbuf_base; int secbuf; } ;
struct TYPE_4__ {struct dmx_section_feed sec; } ;
struct TYPE_3__ {int sec; } ;
struct dvb_demux_feed {int pid; TYPE_2__ feed; int * filter; scalar_t__ buffer_flags; struct dvb_demux* demux; TYPE_1__ cb; int type; } ;
struct dvb_demux {int mutex; } ;
struct dmx_demux {int dummy; } ;
typedef int dmx_section_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dvb_demux_feed* FUNC_0 (struct dvb_demux*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dmx_demux *VAR_8,
     struct dmx_section_feed **VAR_9,
     dmx_section_cb VAR_10)
{
 struct dvb_demux *VAR_11 = (struct dvb_demux *)VAR_8;
 struct dvb_demux_feed *VAR_12;

 if (FUNC_1(&VAR_11->mutex))
  return -VAR_2;

 if (!(VAR_12 = FUNC_0(VAR_11))) {
  FUNC_2(&VAR_11->mutex);
  return -VAR_1;
 }

 VAR_12->type = VAR_0;
 VAR_12->cb.sec = VAR_10;
 VAR_12->demux = VAR_11;
 VAR_12->pid = 0xffff;
 VAR_12->buffer_flags = 0;
 VAR_12->feed.sec.secbuf = VAR_12->feed.sec.secbuf_base;
 VAR_12->feed.sec.secbufp = VAR_12->feed.sec.seclen = 0;
 VAR_12->feed.sec.tsfeedp = 0;
 VAR_12->filter = ((void*)0);

 (*VAR_9) = &VAR_12->feed.sec;
 (*VAR_9)->is_filtering = 0;
 (*VAR_9)->parent = VAR_8;
 (*VAR_9)->priv = ((void*)0);

 (*VAR_9)->set = VAR_5;
 (*VAR_9)->allocate_filter = VAR_3;
 (*VAR_9)->start_filtering = VAR_6;
 (*VAR_9)->stop_filtering = VAR_7;
 (*VAR_9)->release_filter = VAR_4;

 FUNC_2(&VAR_11->mutex);
 return 0;
}
