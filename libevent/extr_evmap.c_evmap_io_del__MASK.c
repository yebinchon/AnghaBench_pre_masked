
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_io {int nread; int nwrite; int nclose; } ;
struct eventop {int (* del ) (struct event_base*,scalar_t__,short,short,void*) ;} ;
struct event_io_map {scalar_t__ nentries; } ;
struct event_base {struct event_io_map io; struct eventop* evsel; } ;
struct event {scalar_t__ ev_fd; short ev_events; } ;
typedef scalar_t__ evutil_socket_t ;


 int FUNC_0 (int) ;
 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int FUNC_1 (struct evmap_io*,struct event_io_map*,scalar_t__,int ) ;
 int FUNC_2 (struct event*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct event_base*,scalar_t__,short,short,void*) ;

int
FUNC_4(struct event_base *VAR_6, evutil_socket_t VAR_7, struct event *VAR_8)
{
 const struct eventop *VAR_9 = VAR_6->evsel;
 struct event_io_map *VAR_10 = &VAR_6->io;
 struct evmap_io *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 short VAR_16 = 0, VAR_17 = 0;

 if (VAR_7 < 0)
  return 0;

 FUNC_0(VAR_7 == VAR_8->ev_fd);


 if (VAR_7 >= VAR_10->nentries)
  return (-1);


 FUNC_1(VAR_11, VAR_10, VAR_7, VAR_5);

 VAR_12 = VAR_11->nread;
 VAR_13 = VAR_11->nwrite;
 VAR_14 = VAR_11->nclose;

 if (VAR_12)
  VAR_17 |= VAR_2;
 if (VAR_13)
  VAR_17 |= VAR_3;
 if (VAR_14)
  VAR_17 |= VAR_0;

 if (VAR_8->ev_events & VAR_2) {
  if (--VAR_12 == 0)
   VAR_16 |= VAR_2;
  FUNC_0(VAR_12 >= 0);
 }
 if (VAR_8->ev_events & VAR_3) {
  if (--VAR_13 == 0)
   VAR_16 |= VAR_3;
  FUNC_0(VAR_13 >= 0);
 }
 if (VAR_8->ev_events & VAR_0) {
  if (--VAR_14 == 0)
   VAR_16 |= VAR_0;
  FUNC_0(VAR_14 >= 0);
 }

 if (VAR_16) {
  void *VAR_18 = ((char*)VAR_11) + sizeof(struct evmap_io);
  if (VAR_9->del(VAR_6, VAR_8->ev_fd,
   VAR_17, (VAR_8->ev_events & VAR_1) | VAR_16, VAR_18) == -1) {
   VAR_15 = -1;
  } else {
   VAR_15 = 1;
  }
 }

 VAR_11->nread = VAR_12;
 VAR_11->nwrite = VAR_13;
 VAR_11->nclose = VAR_14;
 FUNC_2(VAR_8, VAR_4);

 return (VAR_15);
}
