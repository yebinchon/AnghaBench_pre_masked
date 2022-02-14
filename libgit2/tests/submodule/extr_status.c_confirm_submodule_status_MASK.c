
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* statuses; size_t counter; int * paths; } ;
typedef TYPE_1__ submodule_expectations ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static int FUNC_3(
 const char *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 submodule_expectations *VAR_3 = VAR_2;

 while (VAR_3->statuses[VAR_3->counter] < 0)
  VAR_3->counter++;

 FUNC_1(VAR_3->statuses[VAR_3->counter], (int)VAR_1);
 FUNC_2(VAR_3->paths[VAR_3->counter++], VAR_0);

 FUNC_0(VAR_1);

 return 0;
}
