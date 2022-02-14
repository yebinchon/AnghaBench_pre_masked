
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* value; void* key; } ;
typedef TYPE_1__ epair_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

epair_t *FUNC_7( void ){
 epair_t *VAR_4;



 VAR_4 = FUNC_5( sizeof( epair_t ) );
 FUNC_4( VAR_4, 0, sizeof( epair_t ) );


 if ( FUNC_6( VAR_3 ) >= ( VAR_0 - 1 ) ) {
  FUNC_0( "ParseEPair: token too long" );
 }

 VAR_4->key = FUNC_3( VAR_3 );
 FUNC_1( VAR_2 );


 if ( FUNC_6( VAR_3 ) >= VAR_1 - 1 ) {
  FUNC_0( "ParseEpar: token too long" );
 }
 VAR_4->value = FUNC_3( VAR_3 );


 FUNC_2( VAR_4->key );
 FUNC_2( VAR_4->value );


 return VAR_4;
}
