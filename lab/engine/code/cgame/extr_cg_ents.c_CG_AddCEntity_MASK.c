
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int eType; } ;
struct TYPE_17__ {TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

 int VAR_0 ;
__attribute__((used)) static void FUNC_13( centity_t *VAR_1 ) {

 if ( VAR_1->currentState.eType >= VAR_0 ) {
  return;
 }


 FUNC_1( VAR_1 );


 FUNC_2( VAR_1 );

 switch ( VAR_1->currentState.eType ) {
 default:
  FUNC_3( "Bad entity type: %i", VAR_1->currentState.eType );
  break;
 case 137:
 case 131:
 case 128:
  break;
 case 139:
  FUNC_4( VAR_1 );
  break;
 case 133:
  FUNC_9( VAR_1 );
  break;
 case 136:
  FUNC_6( VAR_1 );
  break;
 case 135:
  FUNC_7( VAR_1 );
  break;
 case 134:
  FUNC_8( VAR_1 );
  break;
 case 140:
  FUNC_0( VAR_1 );
  break;
 case 132:
  FUNC_10( VAR_1 );
  break;
 case 130:
  FUNC_11( VAR_1 );
  break;
 case 138:
  FUNC_5( VAR_1 );
  break;
 case 129:
  FUNC_12( VAR_1 );
  break;
 }
}
