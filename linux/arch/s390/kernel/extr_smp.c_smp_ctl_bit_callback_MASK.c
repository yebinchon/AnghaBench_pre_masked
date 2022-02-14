
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_creg_mask_parms {size_t cr; unsigned long andval; unsigned long orval; } ;


 int FUNC_0 (unsigned long*,int ,int) ;
 int FUNC_1 (unsigned long*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ec_creg_mask_parms *VAR_1 = VAR_0;
 unsigned long VAR_2[16];

 FUNC_1(VAR_2, 0, 15);
 VAR_2[VAR_1->cr] = (VAR_2[VAR_1->cr] & VAR_1->andval) | VAR_1->orval;
 FUNC_0(VAR_2, 0, 15);
}
