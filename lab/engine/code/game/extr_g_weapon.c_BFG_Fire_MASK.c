
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int splashDamage; int damage; } ;
typedef TYPE_1__ gentity_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1 ( gentity_t *VAR_3 ) {
 gentity_t *VAR_4;

 VAR_4 = FUNC_0 (VAR_3, VAR_1, VAR_0);
 VAR_4->damage *= VAR_2;
 VAR_4->splashDamage *= VAR_2;


}
