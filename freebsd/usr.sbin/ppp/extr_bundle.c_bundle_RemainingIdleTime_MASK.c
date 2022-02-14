
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; } ;
struct bundle {TYPE_1__ idle; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct bundle *VAR_0)
{
  if (VAR_0->idle.done)
    return VAR_0->idle.done - FUNC_0(((void*)0));
  return -1;
}
