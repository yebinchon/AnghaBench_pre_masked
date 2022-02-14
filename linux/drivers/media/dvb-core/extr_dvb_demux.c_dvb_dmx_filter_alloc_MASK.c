
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_filter {scalar_t__ state; } ;
struct dvb_demux {int filternum; struct dvb_demux_filter* filter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct dvb_demux_filter *FUNC_0(struct dvb_demux *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->filternum; VAR_3++)
  if (VAR_2->filter[VAR_3].state == VAR_1)
   break;

 if (VAR_3 == VAR_2->filternum)
  return ((void*)0);

 VAR_2->filter[VAR_3].state = VAR_0;

 return &VAR_2->filter[VAR_3];
}
