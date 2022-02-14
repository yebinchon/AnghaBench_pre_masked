
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* claim_cont ) () ;int claimed; int parq; int pardev; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 PIA *VAR_2 = (PIA *) VAR_1;
 unsigned long VAR_3;
 void (*VAR_4) (void) = ((void*)0);

 FUNC_1(&VAR_0, VAR_3);

 if (VAR_2->claim_cont && !FUNC_0(VAR_2->pardev)) {
  VAR_4 = VAR_2->claim_cont;
  VAR_2->claim_cont = ((void*)0);
  VAR_2->claimed = 1;
 }

 FUNC_2(&VAR_0, VAR_3);

 FUNC_3(&(VAR_2->parq));

 if (VAR_4)
  VAR_4();
}
