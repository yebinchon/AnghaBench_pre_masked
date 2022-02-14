
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* claim_cont ) () ;int claimed; scalar_t__ pardev; } ;
typedef TYPE_1__ PIA ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(PIA * VAR_1, void (*VAR_2) (void))
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);
 if (VAR_1->pardev && FUNC_0(VAR_1->pardev)) {
  VAR_1->claim_cont = VAR_2;
  FUNC_2(&VAR_0, VAR_3);
  return 0;
 }
 VAR_1->claimed = 1;
 FUNC_2(&VAR_0, VAR_3);
 return 1;
}
