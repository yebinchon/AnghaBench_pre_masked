
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int ahg_bits; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct sdma_engine*,int) ;

void FUNC_2(struct sdma_engine *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return;
 FUNC_1(VAR_0, VAR_1);
 if (VAR_1 < 0 || VAR_1 > 31)
  return;
 FUNC_0(VAR_1, &VAR_0->ahg_bits);
}
