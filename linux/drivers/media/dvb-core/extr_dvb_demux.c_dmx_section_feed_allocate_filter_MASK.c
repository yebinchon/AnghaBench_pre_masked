
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmx_section_filter {int * priv; struct dmx_section_feed* parent; } ;
struct dvb_demux_filter {struct dvb_demux_filter* next; int state; int type; struct dvb_demux_feed* feed; struct dmx_section_filter filter; } ;
struct dvb_demux_feed {struct dvb_demux_filter* filter; struct dvb_demux* demux; } ;
struct dvb_demux {int mutex; int lock; } ;
struct dmx_section_feed {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dvb_demux_filter* FUNC_0 (struct dvb_demux*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dmx_section_feed *VAR_4,
         struct dmx_section_filter **VAR_5)
{
 struct dvb_demux_feed *VAR_6 = (struct dvb_demux_feed *)VAR_4;
 struct dvb_demux *VAR_7 = VAR_6->demux;
 struct dvb_demux_filter *VAR_8;

 if (FUNC_1(&VAR_7->mutex))
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8) {
  FUNC_2(&VAR_7->mutex);
  return -VAR_2;
 }

 FUNC_3(&VAR_7->lock);
 *VAR_5 = &VAR_8->filter;
 (*VAR_5)->parent = VAR_4;
 (*VAR_5)->priv = ((void*)0);
 VAR_8->feed = VAR_6;
 VAR_8->type = VAR_1;
 VAR_8->state = VAR_0;
 VAR_8->next = VAR_6->filter;
 VAR_6->filter = VAR_8;
 FUNC_4(&VAR_7->lock);

 FUNC_2(&VAR_7->mutex);
 return 0;
}
