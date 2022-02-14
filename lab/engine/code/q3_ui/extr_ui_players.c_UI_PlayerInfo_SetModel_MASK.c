
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* weapon; int newModel; int chat; scalar_t__ weaponTimer; int pendingWeapon; void* lastWeapon; void* currentWeapon; } ;
typedef TYPE_1__ playerInfo_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3( playerInfo_t *VAR_4, const char *VAR_5 ) {
 FUNC_2( VAR_4, 0, sizeof(*VAR_4) );
 FUNC_1( VAR_4, VAR_5 );
 VAR_4->weapon = VAR_0;
 VAR_4->currentWeapon = VAR_0;
 VAR_4->lastWeapon = VAR_4->weapon;
 VAR_4->pendingWeapon = VAR_1;
 VAR_4->weaponTimer = 0;
 VAR_4->chat = VAR_2;
 VAR_4->newModel = VAR_3;
 FUNC_0( VAR_4, VAR_4->weapon );
}
