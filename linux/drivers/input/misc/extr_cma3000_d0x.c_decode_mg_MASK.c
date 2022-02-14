
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma3000_accl_data {int bit_to_mg; } ;
typedef int s8 ;



__attribute__((used)) static void FUNC_0(struct cma3000_accl_data *VAR_0, int *VAR_1,
    int *VAR_2, int *VAR_3)
{

 *VAR_1 = ((s8)*VAR_1) * VAR_0->bit_to_mg;
 *VAR_2 = ((s8)*VAR_2) * VAR_0->bit_to_mg;
 *VAR_3 = ((s8)*VAR_3) * VAR_0->bit_to_mg;
}
