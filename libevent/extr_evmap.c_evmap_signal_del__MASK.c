
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_signal {int events; } ;
struct eventop {int (* del ) (struct event_base*,int ,int ,int ,int *) ;} ;
struct event_signal_map {int nentries; } ;
struct event_base {struct event_signal_map sigmap; struct eventop* evsigsel; } ;
struct event {int ev_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct evmap_signal*,struct event_signal_map*,int,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (struct event*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct event_base*,int ,int ,int ,int *) ;

int
FUNC_4(struct event_base *VAR_3, int VAR_4, struct event *VAR_5)
{
 const struct eventop *VAR_6 = VAR_3->evsigsel;
 struct event_signal_map *VAR_7 = &VAR_3->sigmap;
 struct evmap_signal *VAR_8;

 if (VAR_4 < 0 || VAR_4 >= VAR_7->nentries)
  return (-1);

 FUNC_0(VAR_8, VAR_7, VAR_4, VAR_2);

 FUNC_2(VAR_5, VAR_1);

 if (FUNC_1(&VAR_8->events) == ((void*)0)) {
  if (VAR_6->del(VAR_3, VAR_5->ev_fd, 0, VAR_0, ((void*)0)) == -1)
   return (-1);
 }

 return (1);
}
