
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct timespec {int dummy; } ;
struct runtime_env {int queue; } ;
struct TYPE_4__ {int tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct query_state {int use_alternate_io; size_t kevent_watermark; size_t io_buffer_watermark; int io_buffer_filter; int (* process_func ) (struct query_state*) ;size_t io_buffer_size; int kevent_filter; int * io_buffer_p; int * io_buffer; int read_func; int write_func; TYPE_2__ timeout; TYPE_1__ creation_time; } ;
struct kevent {int flags; int ident; scalar_t__ data; scalar_t__ udata; } ;
struct configuration {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kevent*,int ,int,int,int ,int,struct query_state*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (void (*) (struct kevent*,struct runtime_env*,struct configuration*)) ;
 int FUNC_3 (void (*) (struct kevent*,struct runtime_env*,struct configuration*)) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct query_state*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct timeval*) ;
 int FUNC_10 (int ,struct kevent*,int,int *,int ,struct timespec*) ;
 int FUNC_11 (struct timespec*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_12 (struct query_state*,int *,size_t) ;
 scalar_t__ FUNC_13 (struct query_state*,int *,size_t) ;
 int FUNC_14 (struct query_state*) ;

__attribute__((used)) static void
FUNC_15(struct kevent *VAR_12, struct runtime_env *VAR_13,
 struct configuration *VAR_14)
{
 struct kevent VAR_15[2];
 struct timeval VAR_16;
 struct timespec VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 ssize_t VAR_21;
 struct query_state *VAR_22;

 FUNC_2(FUNC_15);
 VAR_19 = VAR_12->flags & VAR_5 ? 1 : 0;
 VAR_20 = 0;

 FUNC_11(&VAR_17, 0, sizeof(struct timespec));
 FUNC_0(&VAR_15[0], VAR_12->ident, VAR_1, VAR_4,
  0, 0, ((void*)0));
 VAR_18 = FUNC_10(VAR_13->queue, VAR_15, 1, ((void*)0), 0, &VAR_17);
 if (VAR_18 == -1) {
  if (VAR_9 == VAR_0) {

   FUNC_3(FUNC_15);
   return;
  } else {

   FUNC_1("process_socket_event", "kevent error, errno"
    " is %d", VAR_9);
   FUNC_3(FUNC_15);
   return;
  }
 }
 VAR_22 = (struct query_state *)VAR_12->udata;
 if (((VAR_22->use_alternate_io == 0) &&
  (VAR_22->kevent_watermark <= (size_t)VAR_12->data)) ||
  ((VAR_22->use_alternate_io != 0) &&
  (VAR_22->io_buffer_watermark <= (size_t)VAR_12->data))) {
  if (VAR_22->use_alternate_io != 0) {
   switch (VAR_22->io_buffer_filter) {
   case 128:
    VAR_21 = FUNC_12(VAR_22,
     VAR_22->io_buffer_p,
     VAR_22->io_buffer_watermark);
    if (VAR_21 < 0) {
     VAR_22->use_alternate_io = 0;
     VAR_22->process_func = ((void*)0);
    } else {
     VAR_22->io_buffer_p += VAR_21;
     if (VAR_22->io_buffer_p ==
          VAR_22->io_buffer +
      VAR_22->io_buffer_size) {
      VAR_22->io_buffer_p =
          VAR_22->io_buffer;
      VAR_22->use_alternate_io = 0;
     }
    }
   break;
   default:
   break;
   }
  }

  if (VAR_22->use_alternate_io == 0) {
   do {
    VAR_20 = VAR_22->process_func(VAR_22);
   } while ((VAR_22->kevent_watermark == 0) &&
     (VAR_22->process_func != ((void*)0)) &&
     (VAR_20 == 0));

   if (VAR_20 != 0)
    VAR_22->process_func = ((void*)0);
  }

  if ((VAR_22->use_alternate_io != 0) &&
   (VAR_22->io_buffer_filter == VAR_2)) {
   VAR_21 = FUNC_13(VAR_22, VAR_22->io_buffer_p,
    VAR_22->io_buffer_watermark);
   if (VAR_21 < 0) {
    VAR_22->use_alternate_io = 0;
    VAR_22->process_func = ((void*)0);
   } else
    VAR_22->io_buffer_p += VAR_21;
  }
 } else {

  VAR_22->process_func = ((void*)0);
  VAR_22->use_alternate_io = 0;
 }

 if (((VAR_22->process_func == ((void*)0)) &&
      (VAR_22->use_alternate_io == 0)) ||
  (VAR_19 != 0) || (VAR_20 != 0)) {
  FUNC_7(VAR_22);
  FUNC_6(VAR_12->ident);
  FUNC_3(FUNC_15);
  return;
 }


 FUNC_9(&VAR_16);
 VAR_16.tv_usec = 0;
 VAR_16.tv_sec -= VAR_22->creation_time.tv_sec;
 if (VAR_16.tv_sec > VAR_22->timeout.tv_sec)
  VAR_16.tv_sec = 0;
 else
  VAR_16.tv_sec = VAR_22->timeout.tv_sec -
   VAR_16.tv_sec;

 if ((VAR_22->use_alternate_io != 0) && (VAR_22->io_buffer_p ==
  VAR_22->io_buffer + VAR_22->io_buffer_size))
  VAR_22->use_alternate_io = 0;

 if (VAR_22->use_alternate_io == 0) {
  if (VAR_22->kevent_watermark > VAR_7) {
   VAR_22->io_buffer_watermark = VAR_7;
   FUNC_0(&VAR_15[1], VAR_12->ident,
    VAR_22->kevent_filter, VAR_3 | VAR_6,
    VAR_8, VAR_7, VAR_22);
  } else {
   FUNC_0(&VAR_15[1], VAR_12->ident,
        VAR_22->kevent_filter, VAR_3 | VAR_6,
        VAR_8, VAR_22->kevent_watermark, VAR_22);
  }
 } else {
  if (VAR_22->io_buffer + VAR_22->io_buffer_size -
       VAR_22->io_buffer_p <
   VAR_7) {
   VAR_22->io_buffer_watermark = VAR_22->io_buffer +
    VAR_22->io_buffer_size - VAR_22->io_buffer_p;
   FUNC_0(&VAR_15[1], VAR_12->ident,
        VAR_22->io_buffer_filter,
    VAR_3 | VAR_6, VAR_8,
    VAR_22->io_buffer_watermark,
    VAR_22);
  } else {
   VAR_22->io_buffer_watermark = VAR_7;
   FUNC_0(&VAR_15[1], VAR_12->ident,
        VAR_22->io_buffer_filter, VAR_3 | VAR_6,
        VAR_8, VAR_7, VAR_22);
  }
 }
 FUNC_0(&VAR_15[0], VAR_12->ident, VAR_1,
  VAR_3 | VAR_6, 0, VAR_16.tv_sec * 1000, VAR_22);
 FUNC_10(VAR_13->queue, VAR_15, 2, ((void*)0), 0, &VAR_17);

 FUNC_3(FUNC_15);
}
