
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {int fd; } ;
struct prompt {int desc; struct prompt* next; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 struct server* FUNC_1 (struct fdescriptor*) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,int*) ;
 int FUNC_3 (int ,char*,int) ;
 struct prompt* FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct fdescriptor *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4, int *VAR_5)
{
  struct server *VAR_6 = FUNC_1(VAR_1);
  struct prompt *VAR_7;
  int VAR_8;

  VAR_8 = 0;
  if (VAR_2 && VAR_6->fd >= 0) {
    if (*VAR_5 < VAR_6->fd + 1)
      *VAR_5 = VAR_6->fd + 1;
    FUNC_0(VAR_6->fd, VAR_2);
    FUNC_3(VAR_0, "server: fdset(r) %d\n", VAR_6->fd);
    VAR_8++;
  }

  for (VAR_7 = FUNC_4(); VAR_7; VAR_7 = VAR_7->next)
    VAR_8 += FUNC_2(&VAR_7->desc, VAR_2, VAR_3, VAR_4, VAR_5);

  return VAR_8;
}
