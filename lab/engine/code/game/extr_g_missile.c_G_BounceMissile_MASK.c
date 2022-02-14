
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int vec3_t ;
struct TYPE_12__ {double* normal; } ;
struct TYPE_15__ {int fraction; TYPE_1__ plane; int endpos; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_11__ {int trTime; int trBase; int trDelta; } ;
struct TYPE_14__ {int eFlags; int time; TYPE_10__ pos; } ;
struct TYPE_13__ {int currentOrigin; } ;
struct TYPE_16__ {TYPE_3__ s; TYPE_2__ r; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_17__ {int previousTime; int time; } ;


 int FUNC_0 (TYPE_10__*,int,int ) ;
 float FUNC_1 (int ,double*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int ,double*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,double*,int ) ;
 int FUNC_7 (int ,double,int ) ;
 TYPE_6__ VAR_1 ;

void FUNC_8( gentity_t *VAR_2, trace_t *VAR_3 ) {
 vec3_t VAR_4;
 float VAR_5;
 int VAR_6;


 VAR_6 = VAR_1.previousTime + ( VAR_1.time - VAR_1.previousTime ) * VAR_3->fraction;
 FUNC_0( &VAR_2->s.pos, VAR_6, VAR_4 );
 VAR_5 = FUNC_1( VAR_4, VAR_3->plane.normal );
 FUNC_6( VAR_4, -2*VAR_5, VAR_3->plane.normal, VAR_2->s.pos.trDelta );

 if ( VAR_2->s.eFlags & VAR_0 ) {
  FUNC_7( VAR_2->s.pos.trDelta, 0.65, VAR_2->s.pos.trDelta );

  if ( VAR_3->plane.normal[2] > 0.2 && FUNC_5( VAR_2->s.pos.trDelta ) < 40 ) {
   FUNC_2( VAR_2, VAR_3->endpos );
   VAR_2->s.time = VAR_1.time / 4;
   return;
  }
 }

 FUNC_3( VAR_2->r.currentOrigin, VAR_3->plane.normal, VAR_2->r.currentOrigin);
 FUNC_4( VAR_2->r.currentOrigin, VAR_2->s.pos.trBase );
 VAR_2->s.pos.trTime = VAR_1.time;
}
