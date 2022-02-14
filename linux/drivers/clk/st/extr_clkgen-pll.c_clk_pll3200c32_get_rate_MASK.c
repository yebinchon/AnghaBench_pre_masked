
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_pll {int idf; int ndiv; } ;



__attribute__((used)) static int FUNC_0(unsigned long VAR_0, struct stm_pll *VAR_1,
   unsigned long *VAR_2)
{
 if (!VAR_1->idf)
  VAR_1->idf = 1;

 *VAR_2 = ((2 * (VAR_0 / 1000) * VAR_1->ndiv) / VAR_1->idf) * 1000;

 return 0;
}
