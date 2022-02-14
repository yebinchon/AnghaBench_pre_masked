
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; int m; int d; } ;
typedef TYPE_1__ date ;


 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, int VAR_1)
{
 date VAR_2;
 int VAR_3;

 VAR_2.y = VAR_0;
 VAR_2.m = VAR_1;
 VAR_2.d = 1;
 VAR_3 = FUNC_1(&VAR_2);
 for (;;) {
  FUNC_0(VAR_3, &VAR_2);
  if ((VAR_2.m >= VAR_1 && VAR_2.y == VAR_0) || VAR_2.y > VAR_0)
   return (VAR_3);
  else
   VAR_3++;
 }

}
