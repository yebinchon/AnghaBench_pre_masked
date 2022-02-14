
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rnd_state {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,struct rnd_state*) ;
 int FUNC_2 (unsigned int,unsigned int) ;

void FUNC_3(unsigned int *VAR_0, unsigned int VAR_1,
   struct rnd_state *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  FUNC_0(sizeof(unsigned int) > sizeof(u32));
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  FUNC_2(VAR_0[VAR_3], VAR_0[VAR_4]);
 }
}
