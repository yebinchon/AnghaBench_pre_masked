
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * namespace; } ;
typedef TYPE_1__ git_repository ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int FUNC_2(git_repository *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->namespace);

 if (VAR_1 == ((void*)0)) {
  VAR_0->namespace = ((void*)0);
  return 0;
 }

 return (VAR_0->namespace = FUNC_1(VAR_1)) ? 0 : -1;
}
