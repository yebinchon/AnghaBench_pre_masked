
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdescriptor {int dummy; } ;
struct chat {TYPE_1__* physical; scalar_t__ argptr; } ;
typedef int fd_set ;
struct TYPE_2__ {int desc; } ;


 struct chat* FUNC_0 (struct fdescriptor*) ;
 scalar_t__ FUNC_1 (int *,int const*) ;

__attribute__((used)) static int
FUNC_2(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct chat *VAR_2 = FUNC_0(VAR_0);
  return VAR_2->argptr && FUNC_1(&VAR_2->physical->desc, VAR_1);
}
