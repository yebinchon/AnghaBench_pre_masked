
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {int tcr; int cntlo; int prdlo; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int *) ;
 TYPE_1__* VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3)
{
 u32 VAR_4 = FUNC_0(&VAR_1->tcr) & ~VAR_0;

 FUNC_1(VAR_4, &VAR_1->tcr);
 FUNC_1(VAR_3 - 1, &VAR_1->prdlo);
 FUNC_1(0, &VAR_1->cntlo);
 VAR_4 |= VAR_2;
 FUNC_1(VAR_4, &VAR_1->tcr);
}
