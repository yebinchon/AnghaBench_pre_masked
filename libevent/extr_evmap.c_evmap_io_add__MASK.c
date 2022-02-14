
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evmap_io {int nread; int nwrite; int nclose; int events; } ;
struct eventop {int (* add ) (struct event_base*,scalar_t__,short,short,void*) ;int fdinfo_len; } ;
struct event_io_map {scalar_t__ nentries; } ;
struct event_base {struct event_io_map io; struct eventop* evsel; } ;
struct event {scalar_t__ ev_fd; short ev_events; } ;
typedef scalar_t__ evutil_socket_t ;
typedef void* ev_uint16_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int FUNC_3 (struct evmap_io*,struct event_io_map*,scalar_t__,int ,int ,int ) ;
 struct event* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct event*,int ) ;
 int VAR_4 ;
 int FUNC_6 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct event_io_map*,scalar_t__,int) ;
 int FUNC_8 (struct event_base*,scalar_t__,short,short,void*) ;

int
FUNC_9(struct event_base *VAR_7, evutil_socket_t VAR_8, struct event *VAR_9)
{
 const struct eventop *VAR_10 = VAR_7->evsel;
 struct event_io_map *VAR_11 = &VAR_7->io;
 struct evmap_io *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 short VAR_17 = 0, VAR_18 = 0;
 struct event *VAR_19;

 FUNC_1(VAR_8 == VAR_9->ev_fd);

 if (VAR_8 < 0)
  return 0;


 if (VAR_8 >= VAR_11->nentries) {
  if (FUNC_7(VAR_11, VAR_8, sizeof(struct evmap_io *)) == -1)
   return (-1);
 }

 FUNC_3(VAR_12, VAR_11, VAR_8, VAR_5, VAR_6,
       VAR_10->fdinfo_len);

 VAR_13 = VAR_12->nread;
 VAR_14 = VAR_12->nwrite;
 VAR_15 = VAR_12->nclose;

 if (VAR_13)
  VAR_18 |= VAR_2;
 if (VAR_14)
  VAR_18 |= VAR_3;
 if (VAR_15)
  VAR_18 |= VAR_0;

 if (VAR_9->ev_events & VAR_2) {
  if (++VAR_13 == 1)
   VAR_17 |= VAR_2;
 }
 if (VAR_9->ev_events & VAR_3) {
  if (++VAR_14 == 1)
   VAR_17 |= VAR_3;
 }
 if (VAR_9->ev_events & VAR_0) {
  if (++VAR_15 == 1)
   VAR_17 |= VAR_0;
 }
 if (FUNC_2(VAR_13 > 0xffff || VAR_14 > 0xffff || VAR_15 > 0xffff)) {
  FUNC_6("Too many events reading or writing on fd %d",
      (int)VAR_8);
  return -1;
 }
 if (FUNC_0() &&
     (VAR_19 = FUNC_4(&VAR_12->events)) &&
     (VAR_19->ev_events&VAR_1) != (VAR_9->ev_events&VAR_1)) {
  FUNC_6("Tried to mix edge-triggered and non-edge-triggered"
      " events on fd %d", (int)VAR_8);
  return -1;
 }

 if (VAR_17) {
  void *VAR_20 = ((char*)VAR_12) + sizeof(struct evmap_io);



  if (VAR_10->add(VAR_7, VAR_9->ev_fd,
   VAR_18, (VAR_9->ev_events & VAR_1) | VAR_17, VAR_20) == -1)
   return (-1);
  VAR_16 = 1;
 }

 VAR_12->nread = (ev_uint16_t) VAR_13;
 VAR_12->nwrite = (ev_uint16_t) VAR_14;
 VAR_12->nclose = (ev_uint16_t) VAR_15;
 FUNC_5(&VAR_12->events, VAR_9, VAR_4);

 return (VAR_16);
}
