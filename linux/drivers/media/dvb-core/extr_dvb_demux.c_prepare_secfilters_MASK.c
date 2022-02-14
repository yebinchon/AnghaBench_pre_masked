
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dmx_section_filter {int* filter_mode; int* filter_mask; } ;
struct dvb_demux_filter {int* maskandmode; int* maskandnotmode; int doneq; struct dmx_section_filter filter; struct dvb_demux_filter* next; } ;
struct dvb_demux_feed {struct dvb_demux_filter* filter; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dvb_demux_feed *VAR_1)
{
 int VAR_2;
 struct dvb_demux_filter *VAR_3;
 struct dmx_section_filter *VAR_4;
 u8 VAR_5, VAR_6, VAR_7;

 if (!(VAR_3 = VAR_1->filter))
  return;
 do {
  VAR_4 = &VAR_3->filter;
  VAR_7 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   VAR_6 = VAR_4->filter_mode[VAR_2];
   VAR_5 = VAR_4->filter_mask[VAR_2];
   VAR_3->maskandmode[VAR_2] = VAR_5 & VAR_6;
   VAR_7 |= VAR_3->maskandnotmode[VAR_2] = VAR_5 & ~VAR_6;
  }
  VAR_3->doneq = VAR_7 ? 1 : 0;
 } while ((VAR_3 = VAR_3->next));
}
