
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rnd_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,unsigned int,struct rnd_state*) ;
 unsigned int* FUNC_1 (unsigned int,int,int ) ;

unsigned int *FUNC_2(unsigned int VAR_1, struct rnd_state *VAR_2)
{
 unsigned int *VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3[VAR_4] = VAR_4;

 FUNC_0(VAR_3, VAR_1, VAR_2);
 return VAR_3;
}
