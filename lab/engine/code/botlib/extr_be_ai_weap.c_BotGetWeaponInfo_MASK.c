
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int weaponinfo_t ;
typedef int bot_weaponstate_t ;
struct TYPE_2__ {int * weaponinfo; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(int VAR_1, int VAR_2, weaponinfo_t *VAR_3)
{
 bot_weaponstate_t *VAR_4;

 if (!FUNC_0(VAR_2)) return;
 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4) return;
 if (!VAR_0) return;
 FUNC_2(VAR_3, &VAR_0->weaponinfo[VAR_2], sizeof(weaponinfo_t));
}
