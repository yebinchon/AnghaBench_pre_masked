
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int mmu_t ;
struct TYPE_3__ {scalar_t__* pm_sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

void
FUNC_4(mmu_t VAR_4, pmap_t VAR_5)
{
        int VAR_6, VAR_7;




        if (VAR_5->pm_sr[0] == 0)
                FUNC_3("moea_release");

 FUNC_1(&VAR_3);
        VAR_6 = FUNC_0(VAR_5->pm_sr[0]) & (VAR_0-1);
        VAR_7 = 1 << (VAR_6 % VAR_1);
        VAR_6 /= VAR_1;
        VAR_2[VAR_6] &= ~VAR_7;
 FUNC_2(&VAR_3);
}
