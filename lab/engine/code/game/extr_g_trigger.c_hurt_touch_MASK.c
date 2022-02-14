
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_9__ {scalar_t__ timestamp; int spawnflags; int damage; int noise_index; int takedamage; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_10__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int *,int *,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

void FUNC_2( gentity_t *VAR_5, gentity_t *VAR_6, trace_t *VAR_7 ) {
 int VAR_8;

 if ( !VAR_6->takedamage ) {
  return;
 }

 if ( VAR_5->timestamp > VAR_4.time ) {
  return;
 }

 if ( VAR_5->spawnflags & 16 ) {
  VAR_5->timestamp = VAR_4.time + 1000;
 } else {
  VAR_5->timestamp = VAR_4.time + VAR_2;
 }


 if ( !(VAR_5->spawnflags & 4) ) {
  FUNC_1( VAR_6, VAR_0, VAR_5->noise_index );
 }

 if (VAR_5->spawnflags & 8)
  VAR_8 = VAR_1;
 else
  VAR_8 = 0;
 FUNC_0 (VAR_6, VAR_5, VAR_5, ((void*)0), ((void*)0), VAR_5->damage, VAR_8, VAR_3);
}
