
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct radius {TYPE_1__ cx; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int const*) ;
 struct radius* FUNC_1 (struct fdescriptor*) ;

__attribute__((used)) static int
FUNC_2(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct radius *VAR_2 = FUNC_1(VAR_0);

  return VAR_2 && VAR_2->cx.fd != -1 && FUNC_0(VAR_2->cx.fd, VAR_1);
}
