
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_8__ {scalar_t__ pain_debounce_time; int flags; int health; TYPE_3__* client; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_7__ {scalar_t__ pm_type; int damagePitch; int damageYaw; float damageCount; int damageEvent; } ;
struct TYPE_9__ {float damage_blood; float damage_armor; scalar_t__ damage_knockback; TYPE_1__ ps; int damage_from; scalar_t__ damage_fromWorld; } ;
typedef TYPE_3__ gclient_t ;
struct TYPE_10__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 TYPE_4__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,double*) ;

void FUNC_2( gentity_t *VAR_7 ) {
 gclient_t *VAR_8;
 float VAR_9;
 vec3_t VAR_10;

 VAR_8 = VAR_7->client;
 if ( VAR_8->ps.pm_type == VAR_3 ) {
  return;
 }


 VAR_9 = VAR_8->damage_blood + VAR_8->damage_armor;
 if ( VAR_9 == 0 ) {
  return;
 }

 if ( VAR_9 > 255 ) {
  VAR_9 = 255;
 }





 if ( VAR_8->damage_fromWorld ) {
  VAR_8->ps.damagePitch = 255;
  VAR_8->ps.damageYaw = 255;

  VAR_8->damage_fromWorld = VAR_6;
 } else {
  FUNC_1( VAR_8->damage_from, VAR_10 );
  VAR_8->ps.damagePitch = VAR_10[VAR_2]/360.0 * 256;
  VAR_8->ps.damageYaw = VAR_10[VAR_4]/360.0 * 256;
 }


 if ( (VAR_5.time > VAR_7->pain_debounce_time) && !(VAR_7->flags & VAR_1) ) {
  VAR_7->pain_debounce_time = VAR_5.time + 700;
  FUNC_0( VAR_7, VAR_0, VAR_7->health );
  VAR_8->ps.damageEvent++;
 }


 VAR_8->ps.damageCount = VAR_9;




 VAR_8->damage_blood = 0;
 VAR_8->damage_armor = 0;
 VAR_8->damage_knockback = 0;
}
