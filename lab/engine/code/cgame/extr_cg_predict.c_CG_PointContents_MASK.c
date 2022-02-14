
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int number; scalar_t__ solid; int modelindex; } ;
typedef TYPE_1__ entityState_t ;
typedef int clipHandle_t ;
struct TYPE_5__ {int lerpAngles; int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const,int ) ;
 int FUNC_2 (int const,int ,int ,int ) ;

int FUNC_3( const vec3_t VAR_3, int VAR_4 ) {
 int VAR_5;
 entityState_t *VAR_6;
 centity_t *VAR_7;
 clipHandle_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1 (VAR_3, 0);

 for ( VAR_5 = 0 ; VAR_5 < VAR_1 ; VAR_5++ ) {
  VAR_7 = VAR_2[ VAR_5 ];

  VAR_6 = &VAR_7->currentState;

  if ( VAR_6->number == VAR_4 ) {
   continue;
  }

  if (VAR_6->solid != VAR_0) {
   continue;
  }

  VAR_8 = FUNC_0( VAR_6->modelindex );
  if ( !VAR_8 ) {
   continue;
  }

  VAR_9 |= FUNC_2( VAR_3, VAR_8, VAR_7->lerpOrigin, VAR_7->lerpAngles );
 }

 return VAR_9;
}
