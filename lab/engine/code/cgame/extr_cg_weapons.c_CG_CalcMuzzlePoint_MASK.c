
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int * vec3_t ;
typedef int qboolean ;
struct TYPE_12__ {int trBase; } ;
struct TYPE_11__ {int trBase; } ;
struct TYPE_13__ {int legsAnim; TYPE_4__ apos; TYPE_3__ pos; } ;
struct TYPE_14__ {TYPE_5__ currentState; int currentValid; } ;
typedef TYPE_6__ centity_t ;
struct TYPE_15__ {TYPE_2__* snap; } ;
struct TYPE_9__ {int clientNum; int viewangles; scalar_t__ viewheight; int origin; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int,int *,int *) ;
 TYPE_8__ VAR_5 ;
 TYPE_6__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static qboolean FUNC_3( int VAR_9, vec3_t VAR_10 ) {
 vec3_t VAR_11;
 centity_t *VAR_12;
 int VAR_13;

 if ( VAR_9 == VAR_5.snap->ps.clientNum ) {
  FUNC_1( VAR_5.snap->ps.origin, VAR_10 );
  VAR_10[2] += VAR_5.snap->ps.viewheight;
  FUNC_0( VAR_5.snap->ps.viewangles, VAR_11, ((void*)0), ((void*)0) );
  FUNC_2( VAR_10, 14, VAR_11, VAR_10 );
  return VAR_8;
 }

 VAR_12 = &VAR_6[VAR_9];
 if ( !VAR_12->currentValid ) {
  return VAR_7;
 }

 FUNC_1( VAR_12->currentState.pos.trBase, VAR_10 );

 FUNC_0( VAR_12->currentState.apos.trBase, VAR_11, ((void*)0), ((void*)0) );
 VAR_13 = VAR_12->currentState.legsAnim & ~VAR_0;
 if ( VAR_13 == VAR_4 || VAR_13 == VAR_3 ) {
  VAR_10[2] += VAR_1;
 } else {
  VAR_10[2] += VAR_2;
 }

 FUNC_2( VAR_10, 14, VAR_11, VAR_10 );

 return VAR_8;

}
