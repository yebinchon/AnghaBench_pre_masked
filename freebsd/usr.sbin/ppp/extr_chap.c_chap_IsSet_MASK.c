
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdescriptor {int dummy; } ;
struct TYPE_2__ {int fd; } ;
struct chap {TYPE_1__ child; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int const*) ;
 struct chap* FUNC_1 (struct fdescriptor*) ;

__attribute__((used)) static int
FUNC_2(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct chap *VAR_2 = FUNC_1(VAR_0);

  return VAR_2 && VAR_2->child.fd != -1 && FUNC_0(VAR_2->child.fd, VAR_1);
}
