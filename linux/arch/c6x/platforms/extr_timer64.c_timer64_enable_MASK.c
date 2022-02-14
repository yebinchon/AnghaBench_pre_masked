
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tgcr; int tcr; int prdlo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_3(void)
{
 u32 VAR_9;

 if (VAR_8 >= 0)
  FUNC_0(VAR_8, VAR_0);


 FUNC_2(FUNC_1(&VAR_7->tcr) & ~VAR_2, &VAR_7->tcr);
 FUNC_2(0, &VAR_7->prdlo);


 VAR_9 = FUNC_1(&VAR_7->tcr);
 FUNC_2(VAR_9 & ~(VAR_1 | VAR_3), &VAR_7->tcr);


 VAR_9 = FUNC_1(&VAR_7->tgcr) & ~VAR_5;
 FUNC_2(VAR_9, &VAR_7->tgcr);
 FUNC_2(VAR_9 | (VAR_4 | VAR_6), &VAR_7->tgcr);
}
