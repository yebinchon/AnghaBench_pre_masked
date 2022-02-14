
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prdlo; int tcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{

 FUNC_2(FUNC_1(&VAR_2->tcr) & ~VAR_1, &VAR_2->tcr);
 FUNC_2(0, &VAR_2->prdlo);

 if (VAR_3 >= 0)
  FUNC_0(VAR_3, VAR_0);
}
