
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_demux_filter {int dummy; } ;
struct dvb_demux_feed {int dummy; } ;
struct dmx_demux {int get_pes_pids; int disconnect_frontend; int connect_frontend; int get_frontends; int remove_frontend; int add_frontend; int release_section_feed; int allocate_section_feed; int release_ts_feed; int allocate_ts_feed; int write; int close; int open; struct dvb_demux* priv; int * frontend; } ;
struct dvb_demux {int filternum; int feednum; int* pids; int lock; int mutex; scalar_t__ memcopy; scalar_t__ check_crc32; scalar_t__ tsbufp; scalar_t__ recording; scalar_t__ playing; int feed_list; int ** pesfilter; int frontend_list; int * cnt_storage; TYPE_1__* feed; TYPE_2__* filter; scalar_t__ users; struct dmx_demux dmx; } ;
struct TYPE_4__ {int index; void* state; } ;
struct TYPE_3__ {int index; void* state; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (scalar_t__) ;

int FUNC_7(struct dvb_demux *VAR_19)
{
 int VAR_20;
 struct dmx_demux *VAR_21 = &VAR_19->dmx;

 VAR_19->cnt_storage = ((void*)0);
 VAR_19->users = 0;
 VAR_19->filter = FUNC_6(FUNC_1(sizeof(struct dvb_demux_filter),
           VAR_19->filternum));

 if (!VAR_19->filter)
  return -VAR_2;

 VAR_19->feed = FUNC_6(FUNC_1(sizeof(struct dvb_demux_feed),
         VAR_19->feednum));
 if (!VAR_19->feed) {
  FUNC_5(VAR_19->filter);
  VAR_19->filter = ((void*)0);
  return -VAR_2;
 }
 for (VAR_20 = 0; VAR_20 < VAR_19->filternum; VAR_20++) {
  VAR_19->filter[VAR_20].state = VAR_1;
  VAR_19->filter[VAR_20].index = VAR_20;
 }
 for (VAR_20 = 0; VAR_20 < VAR_19->feednum; VAR_20++) {
  VAR_19->feed[VAR_20].state = VAR_1;
  VAR_19->feed[VAR_20].index = VAR_20;
 }

 VAR_19->cnt_storage = FUNC_6(VAR_3 + 1);
 if (!VAR_19->cnt_storage)
  FUNC_3("Couldn't allocate memory for TS/TEI check. Disabling it\n");

 FUNC_0(&VAR_19->frontend_list);

 for (VAR_20 = 0; VAR_20 < VAR_0; VAR_20++) {
  VAR_19->pesfilter[VAR_20] = ((void*)0);
  VAR_19->pids[VAR_20] = 0xffff;
 }

 FUNC_0(&VAR_19->feed_list);

 VAR_19->playing = 0;
 VAR_19->recording = 0;
 VAR_19->tsbufp = 0;

 if (!VAR_19->check_crc32)
  VAR_19->check_crc32 = VAR_4;

 if (!VAR_19->memcopy)
  VAR_19->memcopy = VAR_5;

 VAR_21->frontend = ((void*)0);
 VAR_21->priv = VAR_19;
 VAR_21->open = VAR_14;
 VAR_21->close = VAR_9;
 VAR_21->write = VAR_18;
 VAR_21->allocate_ts_feed = VAR_8;
 VAR_21->release_ts_feed = VAR_16;
 VAR_21->allocate_section_feed = VAR_7;
 VAR_21->release_section_feed = VAR_15;

 VAR_21->add_frontend = VAR_6;
 VAR_21->remove_frontend = VAR_17;
 VAR_21->get_frontends = VAR_12;
 VAR_21->connect_frontend = VAR_10;
 VAR_21->disconnect_frontend = VAR_11;
 VAR_21->get_pes_pids = VAR_13;

 FUNC_2(&VAR_19->mutex);
 FUNC_4(&VAR_19->lock);

 return 0;
}
