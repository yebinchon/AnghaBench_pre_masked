
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p; } ;
typedef int PORT ;
typedef TYPE_1__ DEP ;


 int FUNC_0 (TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_1(DEP * VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 PORT * VAR_3;

 if (VAR_1 == 0)
  return;

 for (VAR_2 = VAR_1; VAR_2 > 0; VAR_2--)
  FUNC_0(VAR_0, VAR_1, VAR_2 - 1);
 for (VAR_2 = VAR_1 - 1; VAR_2 > 0; VAR_2--) {
  VAR_3 = VAR_0[0].p;
  VAR_0[0].p = VAR_0[VAR_2].p;
  VAR_0[VAR_2].p = VAR_3;
  FUNC_0(VAR_0, VAR_2, 0);
 }
}
