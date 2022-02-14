
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_11__ {int * trBase; } ;
struct TYPE_12__ {TYPE_2__ apos; int modelindex; TYPE_4__* number; int eType; } ;
struct TYPE_10__ {int currentOrigin; void* contents; } ;
struct TYPE_13__ {char* classname; scalar_t__ nextthink; int think; TYPE_3__ s; TYPE_1__ r; void* clipmask; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_14__ {scalar_t__ time; int intermission_origin; int intermission_angle; } ;


 int FUNC_0 (int ,int *,int *,int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,scalar_t__,int *,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static gentity_t *FUNC_9( void ) {
 gentity_t *VAR_7;
 vec3_t VAR_8;
 vec3_t VAR_9;

 VAR_7 = FUNC_3();
 if ( !VAR_7 ) {
  return ((void*)0);
 }

 VAR_7->classname = "podium";
 VAR_7->s.eType = VAR_1;
 VAR_7->s.number = VAR_7 - VAR_5;
 VAR_7->clipmask = VAR_0;
 VAR_7->r.contents = VAR_0;
 VAR_7->s.modelindex = FUNC_1( VAR_3 );

 FUNC_0( VAR_6.intermission_angle, VAR_8, ((void*)0), ((void*)0) );
 FUNC_4( VAR_6.intermission_origin, FUNC_6( "g_podiumDist" ), VAR_8, VAR_9 );
 VAR_9[2] -= FUNC_6( "g_podiumDrop" );
 FUNC_2( VAR_7, VAR_9 );

 FUNC_5( VAR_6.intermission_origin, VAR_7->r.currentOrigin, VAR_8 );
 VAR_7->s.apos.trBase[VAR_4] = FUNC_8( VAR_8 );
 FUNC_7 (VAR_7);

 VAR_7->think = VAR_2;
 VAR_7->nextthink = VAR_6.time + 100;
 return VAR_7;
}
