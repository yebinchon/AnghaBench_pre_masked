
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {scalar_t__ fd; } ;
struct prompt {int desc; struct prompt* next; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 struct server* FUNC_1 (struct fdescriptor*) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 struct prompt* FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct server *VAR_2 = FUNC_1(VAR_0);
  struct prompt *VAR_3;

  if (VAR_2->fd >= 0 && FUNC_0(VAR_2->fd, VAR_1))
    return 1;

  for (VAR_3 = FUNC_3(); VAR_3; VAR_3 = VAR_3->next)
    if (FUNC_2(&VAR_3->desc, VAR_1))
      return 1;

  return 0;
}
