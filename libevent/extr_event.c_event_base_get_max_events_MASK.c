
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {scalar_t__ event_count_max; scalar_t__ virtual_event_count_max; scalar_t__ event_count_active_max; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

int
FUNC_2(struct event_base *VAR_4, unsigned int VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 FUNC_0(VAR_4, VAR_3);

 if (VAR_5 & VAR_0) {
  VAR_7 += VAR_4->event_count_active_max;
  if (VAR_6)
   VAR_4->event_count_active_max = 0;
 }

 if (VAR_5 & VAR_2) {
  VAR_7 += VAR_4->virtual_event_count_max;
  if (VAR_6)
   VAR_4->virtual_event_count_max = 0;
 }

 if (VAR_5 & VAR_1) {
  VAR_7 += VAR_4->event_count_max;
  if (VAR_6)
   VAR_4->event_count_max = 0;
 }

 FUNC_1(VAR_4, VAR_3);

 return VAR_7;
}
