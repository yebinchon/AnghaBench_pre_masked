
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {scalar_t__ fd_in; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 struct prompt* FUNC_1 (struct fdescriptor*) ;

__attribute__((used)) static int
FUNC_2(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct prompt *VAR_2 = FUNC_1(VAR_0);
  return VAR_2->fd_in >= 0 && FUNC_0(VAR_2->fd_in, VAR_1);
}
