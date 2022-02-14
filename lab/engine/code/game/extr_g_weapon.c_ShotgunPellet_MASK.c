
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_17__ {size_t entityNum; int surfaceFlags; int endpos; } ;
typedef TYPE_3__ trace_t ;
typedef int qboolean ;
struct TYPE_16__ {int number; } ;
struct TYPE_18__ {TYPE_2__ s; TYPE_1__* client; scalar_t__ takedamage; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_19__ {scalar_t__ time; } ;
struct TYPE_15__ {scalar_t__ invulnerabilityTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,TYPE_4__*,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_6__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_3__*,int ,int *,int *,int ,int,int ) ;

qboolean FUNC_6( vec3_t VAR_11, vec3_t VAR_12, gentity_t *VAR_13 ) {
 trace_t VAR_14;
 int VAR_15, VAR_16, VAR_17;
 gentity_t *VAR_18;



 vec3_t VAR_19, VAR_20;
 qboolean VAR_21 = VAR_8;

 VAR_17 = VAR_13->s.number;
 FUNC_4( VAR_11, VAR_19 );
 FUNC_4( VAR_12, VAR_20 );
 for (VAR_16 = 0; VAR_16 < 10; VAR_16++) {
  FUNC_5 (&VAR_14, VAR_19, ((void*)0), ((void*)0), VAR_20, VAR_17, VAR_2);
  VAR_18 = &VAR_6[ VAR_14.entityNum ];


  if ( VAR_14.surfaceFlags & VAR_4 ) {
   return VAR_8;
  }

  if ( VAR_18->takedamage) {
   VAR_15 = VAR_0 * VAR_10;
   if( FUNC_3( VAR_18, VAR_13 ) ) {
    VAR_21 = VAR_9;
   }
   FUNC_1( VAR_18, VAR_13, VAR_13, VAR_5, VAR_14.endpos, VAR_15, 0, VAR_3);
   return VAR_21;
  }
  return VAR_8;
 }
 return VAR_8;
}
