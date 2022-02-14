
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist_fdinfo {int dummy; } ;
struct event_changelist {int dummy; } ;
struct event_change {short old_events; void* close_change; void* write_change; void* read_change; } ;
struct event_base {struct event_changelist changelist; } ;
typedef int evutil_socket_t ;
typedef void* ev_uint8_t ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int FUNC_0 (struct event_base*) ;
 struct event_change* FUNC_1 (struct event_changelist*,int ,short,struct event_changelist_fdinfo*) ;

int
FUNC_2(struct event_base *VAR_6, evutil_socket_t VAR_7, short VAR_8, short VAR_9,
    void *VAR_10)
{
 struct event_changelist *VAR_11 = &VAR_6->changelist;
 struct event_changelist_fdinfo *VAR_12 = VAR_10;
 struct event_change *VAR_13;
 ev_uint8_t VAR_14 = VAR_0 | (VAR_9 & VAR_2);

 FUNC_0(VAR_6);
 VAR_13 = FUNC_1(VAR_11, VAR_7, VAR_8, VAR_12);
 FUNC_0(VAR_6);
 if (!VAR_13)
  return -1;
 if (VAR_9 & (VAR_3|VAR_4)) {
  if (!(VAR_13->old_events & (VAR_3 | VAR_4)))
   VAR_13->read_change = 0;
  else
   VAR_13->read_change = VAR_14;
 }
 if (VAR_9 & VAR_5) {
  if (!(VAR_13->old_events & VAR_5))
   VAR_13->write_change = 0;
  else
   VAR_13->write_change = VAR_14;
 }
 if (VAR_9 & VAR_1) {
  if (!(VAR_13->old_events & VAR_1))
   VAR_13->close_change = 0;
  else
   VAR_13->close_change = VAR_14;
 }

 FUNC_0(VAR_6);
 return (0);
}
