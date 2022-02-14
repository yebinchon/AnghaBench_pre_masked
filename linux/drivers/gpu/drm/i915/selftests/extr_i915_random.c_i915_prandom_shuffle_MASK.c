
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rnd_state {int dummy; } ;
typedef int stack ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (size_t,struct rnd_state*) ;
 int FUNC_2 (void*,char*,size_t) ;

void FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3,
     struct rnd_state *VAR_4)
{
 char VAR_5[128];

 if (FUNC_0(VAR_2 > sizeof(VAR_5) || VAR_3 > VAR_0))
  return;

 if (!VAR_2 || !VAR_3)
  return;


 while (--VAR_3) {
  size_t VAR_6;

  VAR_6 = FUNC_1(VAR_3 + 1, VAR_4);
  if (VAR_6 == VAR_3)
   continue;

  FUNC_2(VAR_5, VAR_1 + VAR_3 * VAR_2, VAR_2);
  FUNC_2(VAR_1 + VAR_3 * VAR_2, VAR_1 + VAR_6 * VAR_2, VAR_2);
  FUNC_2(VAR_1 + VAR_6 * VAR_2, VAR_5, VAR_2);
 }
}
