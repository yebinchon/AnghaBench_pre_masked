
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* dl; } ;
struct mpserver {int fd; TYPE_2__ send; int socket; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;
struct TYPE_7__ {TYPE_1__* physical; } ;
struct TYPE_5__ {int out; int link; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int *,int *) ;
 struct mpserver* FUNC_3 (struct fdescriptor*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct fdescriptor *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4,
                   int *VAR_5)
{
  struct mpserver *VAR_6 = FUNC_3(VAR_1);
  int VAR_7;

  VAR_7 = 0;
  if (VAR_6->send.dl != ((void*)0)) {

    if (!FUNC_4(&VAR_6->send.dl->physical->link) &&
        !VAR_6->send.dl->physical->out) {

      VAR_7 -= FUNC_2(VAR_6->send.dl, VAR_2, VAR_3, VAR_4);
      FUNC_1(VAR_6->send.dl, VAR_6->fd, &VAR_6->socket);
      VAR_6->send.dl = ((void*)0);
      VAR_6->fd = -1;
    } else

      VAR_7 -= FUNC_2(VAR_6->send.dl, VAR_2, ((void*)0), ((void*)0));
  } else if (VAR_2 && VAR_6->fd >= 0) {
    if (*VAR_5 < VAR_6->fd + 1)
      *VAR_5 = VAR_6->fd + 1;
    FUNC_0(VAR_6->fd, VAR_2);
    FUNC_5(VAR_0, "mp: fdset(r) %d\n", VAR_6->fd);
    VAR_7++;
  }
  return VAR_7;
}
