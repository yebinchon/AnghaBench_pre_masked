
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct macro_definition {int dummy; } ;
typedef TYPE_1__* ndptr ;
struct TYPE_3__ {struct macro_definition* d; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*) ;

struct macro_definition *
FUNC_2(const char *VAR_1)
{
 ndptr VAR_2;

 VAR_2 = FUNC_0(&VAR_0, FUNC_1(&VAR_0, VAR_1));
 if (VAR_2)
  return VAR_2->d;
 else
  return ((void*)0);
}
