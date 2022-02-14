
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {scalar_t__ fd; int events; int revents; } ;
struct TYPE_5__ {int hint; int buf; } ;
struct TYPE_4__ {scalar_t__ len; int buf; } ;
struct TYPE_6__ {TYPE_2__ in; TYPE_1__ out; } ;
struct io_pump {scalar_t__ fd; int type; scalar_t__ error; TYPE_3__ u; struct pollfd* pfd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct io_pump *VAR_7, int VAR_8, struct pollfd *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  struct io_pump *VAR_12 = &VAR_7[VAR_11];
  if (VAR_12->fd < 0)
   continue;
  VAR_9[VAR_10].fd = VAR_12->fd;
  VAR_9[VAR_10].events = VAR_12->type;
  VAR_12->pfd = &VAR_9[VAR_10++];
 }

 if (!VAR_10)
  return 0;

 if (FUNC_2(VAR_9, VAR_10, -1) < 0) {
  if (VAR_6 == VAR_0)
   return 1;
  FUNC_1("poll failed");
 }

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  struct io_pump *VAR_13 = &VAR_7[VAR_11];

  if (VAR_13->fd < 0)
   continue;

  if (!(VAR_13->pfd->revents & (VAR_5|VAR_3|VAR_2|VAR_1|VAR_4)))
   continue;

  if (VAR_13->type == VAR_5) {
   ssize_t VAR_14 = FUNC_4(VAR_13->fd,
          VAR_13->u.out.buf, VAR_13->u.out.len);
   if (VAR_14 < 0) {
    VAR_13->error = VAR_6;
    FUNC_0(VAR_13->fd);
    VAR_13->fd = -1;
   } else {
    VAR_13->u.out.buf += VAR_14;
    VAR_13->u.out.len -= VAR_14;
    if (!VAR_13->u.out.len) {
     FUNC_0(VAR_13->fd);
     VAR_13->fd = -1;
    }
   }
  }

  if (VAR_13->type == VAR_3) {
   ssize_t VAR_15 = FUNC_3(VAR_13->u.in.buf,
             VAR_13->fd, VAR_13->u.in.hint);
   if (VAR_15 < 0)
    VAR_13->error = VAR_6;
   if (VAR_15 <= 0) {
    FUNC_0(VAR_13->fd);
    VAR_13->fd = -1;
   }
  }
 }

 return 1;
}
