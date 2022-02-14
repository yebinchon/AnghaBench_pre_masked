
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {int waterlevel; int (* pointcontents ) (int*,int ) ;TYPE_1__* ps; } ;
struct TYPE_5__ {int* forward; } ;
struct TYPE_4__ {int pm_time; int* velocity; int pm_flags; int clientNum; int origin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int,int*) ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int ) ;

__attribute__((used)) static qboolean FUNC_5( void ) {
 vec3_t VAR_8;
 int VAR_9;
 vec3_t VAR_10;

 if (VAR_4->ps->pm_time) {
  return VAR_6;
 }


 if ( VAR_4->waterlevel != 2 ) {
  return VAR_6;
 }

 VAR_10[0] = VAR_5.forward[0];
 VAR_10[1] = VAR_5.forward[1];
 VAR_10[2] = 0;
 FUNC_1 (VAR_10);

 FUNC_0 (VAR_4->ps->origin, 30, VAR_10, VAR_8);
 VAR_8[2] += 4;
 VAR_9 = VAR_4->pointcontents (VAR_8, VAR_4->ps->clientNum );
 if ( !(VAR_9 & VAR_2) ) {
  return VAR_6;
 }

 VAR_8[2] += 16;
 VAR_9 = VAR_4->pointcontents (VAR_8, VAR_4->ps->clientNum );
 if ( VAR_9 & (VAR_2|VAR_1|VAR_0) ) {
  return VAR_6;
 }


 FUNC_2 (VAR_5.forward, 200, VAR_4->ps->velocity);
 VAR_4->ps->velocity[2] = 350;

 VAR_4->ps->pm_flags |= VAR_3;
 VAR_4->ps->pm_time = 2000;

 return VAR_7;
}
