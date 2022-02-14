
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_filter {struct dvb_demux_filter* next; } ;
struct dmx_section_feed {int* secbuf; scalar_t__ seclen; scalar_t__ is_filtering; scalar_t__ check_crc; } ;
struct TYPE_2__ {struct dmx_section_feed sec; } ;
struct dvb_demux_feed {TYPE_1__ feed; struct dvb_demux_filter* filter; struct dvb_demux* demux; } ;
struct dvb_demux {scalar_t__ (* check_crc32 ) (struct dvb_demux_feed*,int*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dvb_demux_feed*,struct dvb_demux_filter*) ;
 int FUNC_1 (struct dvb_demux_feed*,int ) ;
 scalar_t__ FUNC_2 (struct dvb_demux_feed*,int*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct dvb_demux_feed *VAR_1)
{
 struct dvb_demux *VAR_2 = VAR_1->demux;
 struct dvb_demux_filter *VAR_3 = VAR_1->filter;
 struct dmx_section_feed *VAR_4 = &VAR_1->feed.sec;
 int VAR_5;

 if (!VAR_4->is_filtering)
  return 0;

 if (!VAR_3)
  return 0;

 if (VAR_4->check_crc) {
  VAR_5 = ((VAR_4->secbuf[1] & 0x80) != 0);
  if (VAR_5 &&
      VAR_2->check_crc32(VAR_1, VAR_4->secbuf, VAR_4->seclen)) {
   FUNC_1(VAR_1, VAR_0);
   return -1;
  }
 }

 do {
  if (FUNC_0(VAR_1, VAR_3) < 0)
   return -1;
 } while ((VAR_3 = VAR_3->next) && VAR_4->is_filtering);

 VAR_4->seclen = 0;

 return 0;
}
