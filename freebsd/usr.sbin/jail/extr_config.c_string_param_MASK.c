
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfparam {int val; } ;
struct TYPE_2__ {char const* s; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_0 ;

const char *
FUNC_2(const struct cfparam *VAR_1)
{
 return (VAR_1 && !FUNC_0(&VAR_1->val)
     ? FUNC_1(&VAR_1->val, VAR_0)->s : ((void*)0));
}
