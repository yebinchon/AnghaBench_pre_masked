
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfparam {int val; } ;
struct TYPE_2__ {int s; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int) ;

int
FUNC_3(const struct cfparam *VAR_1, int *VAR_2)
{
 if (VAR_1 == ((void*)0) || FUNC_0(&VAR_1->val))
  return 0;
 *VAR_2 = FUNC_2(FUNC_1(&VAR_1->val, VAR_0)->s, ((void*)0), 10);
 return 1;
}
