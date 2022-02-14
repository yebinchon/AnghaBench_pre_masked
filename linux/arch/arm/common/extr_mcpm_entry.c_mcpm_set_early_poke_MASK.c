
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*,int) ;
 unsigned long*** VAR_0 ;

void FUNC_1(unsigned VAR_1, unsigned VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long *VAR_5 = &VAR_0[VAR_2][VAR_1][0];
 VAR_5[0] = VAR_3;
 VAR_5[1] = VAR_4;
 FUNC_0(VAR_5, 2 * sizeof(*VAR_5));
}
