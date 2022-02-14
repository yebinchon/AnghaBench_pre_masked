
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {unsigned int osr; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct rand_data*) ;

__attribute__((used)) static void FUNC_1(struct rand_data *VAR_1)
{
 unsigned int VAR_2 = 0;


 FUNC_0(VAR_1);

 while (1) {

  if (FUNC_0(VAR_1))
   continue;





  if (++VAR_2 >= (VAR_0 * VAR_1->osr))
   break;
 }
}
