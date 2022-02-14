
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ncpaddr {int dummy; } ;
struct TYPE_2__ {int alive; int dial; int out; int in; } ;
struct bundle {TYPE_1__ filter; } ;


 int FUNC_0 (int *,struct ncpaddr*,struct ncpaddr*,int *) ;

void
FUNC_1(struct bundle *VAR_0, struct ncpaddr *VAR_1,
                     struct ncpaddr *VAR_2)
{
  FUNC_0(&VAR_0->filter.in, VAR_1, VAR_2, ((void*)0));
  FUNC_0(&VAR_0->filter.out, VAR_1, VAR_2, ((void*)0));
  FUNC_0(&VAR_0->filter.dial, VAR_1, VAR_2, ((void*)0));
  FUNC_0(&VAR_0->filter.alive, VAR_1, VAR_2, ((void*)0));
}
