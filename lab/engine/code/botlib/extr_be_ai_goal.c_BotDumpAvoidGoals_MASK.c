
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* avoidgoaltimes; int * avoidgoals; } ;
typedef TYPE_1__ bot_goalstate_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int ,scalar_t__) ;
 int VAR_0 ;

void FUNC_4(int VAR_1)
{
 int VAR_2;
 bot_goalstate_t *VAR_3;
 char VAR_4[32];

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3) return;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 {
  if (VAR_3->avoidgoaltimes[VAR_2] >= FUNC_0())
  {
   FUNC_1(VAR_3->avoidgoals[VAR_2], VAR_4, 32);
   FUNC_3("avoid goal %s, number %d for %f seconds", VAR_4,
    VAR_3->avoidgoals[VAR_2], VAR_3->avoidgoaltimes[VAR_2] - FUNC_0());
  }
 }
}
