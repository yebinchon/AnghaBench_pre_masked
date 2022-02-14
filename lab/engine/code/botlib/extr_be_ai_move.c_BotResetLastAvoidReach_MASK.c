
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* avoidreachtimes; scalar_t__* avoidreachtries; } ;
typedef TYPE_1__ bot_movestate_t ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;

void FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3;
 float VAR_4;
 bot_movestate_t *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5) return;
 VAR_4 = 0;
 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 {
  if (VAR_5->avoidreachtimes[VAR_2] > VAR_4)
  {
   VAR_4 = VAR_5->avoidreachtimes[VAR_2];
   VAR_3 = VAR_2;
  }
 }
 if (VAR_4)
 {
  VAR_5->avoidreachtimes[VAR_3] = 0;
  if (VAR_5->avoidreachtries[VAR_3] > 0) VAR_5->avoidreachtries[VAR_3]--;
 }
}
