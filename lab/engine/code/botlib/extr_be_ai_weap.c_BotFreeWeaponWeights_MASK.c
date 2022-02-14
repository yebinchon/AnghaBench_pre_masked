
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ weaponweightindex; scalar_t__ weaponweightconfig; } ;
typedef TYPE_1__ bot_weaponstate_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(int VAR_0)
{
 bot_weaponstate_t *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) return;
 if (VAR_1->weaponweightconfig) FUNC_2(VAR_1->weaponweightconfig);
 if (VAR_1->weaponweightindex) FUNC_1(VAR_1->weaponweightindex);
}
