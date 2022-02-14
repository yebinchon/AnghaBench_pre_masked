
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rnd_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int*,unsigned int,struct rnd_state*) ;
 unsigned int* FUNC_1 (unsigned int,int,int) ;

unsigned int *FUNC_2(unsigned int VAR_3, struct rnd_state *VAR_4)
{
 unsigned int *VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_5),
         VAR_0 | VAR_2 | VAR_1);
 if (!VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5[VAR_6] = VAR_6;

 FUNC_0(VAR_5, VAR_3, VAR_4);
 return VAR_5;
}
