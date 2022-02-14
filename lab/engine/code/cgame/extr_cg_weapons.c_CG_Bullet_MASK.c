
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int endpos; } ;
typedef TYPE_1__ trace_t ;
typedef scalar_t__ qboolean ;
struct TYPE_5__ {scalar_t__ value; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int ,int ,int *,int *,int ,int) ;

void FUNC_8( vec3_t VAR_4, int VAR_5, vec3_t VAR_6, qboolean VAR_7, int VAR_8 ) {
 trace_t VAR_9;
 int VAR_10, VAR_11;
 vec3_t VAR_12;



 if ( VAR_5 >= 0 && VAR_3.value > 0 ) {
  if ( FUNC_2( VAR_5, VAR_12 ) ) {
   VAR_10 = FUNC_4( VAR_12, 0 );
   VAR_11 = FUNC_4( VAR_4, 0 );


   if ( ( VAR_10 == VAR_11 ) && ( VAR_10 & VAR_0 ) ) {
    FUNC_1( VAR_12, VAR_4, 32 );
   }

   else if ( ( VAR_10 & VAR_0 ) ) {
    FUNC_7( &VAR_9, VAR_4, VAR_12, ((void*)0), ((void*)0), 0, VAR_0 );
    FUNC_1( VAR_12, VAR_9.endpos, 32 );
   }

   else if ( ( VAR_11 & VAR_0 ) ) {
    FUNC_7( &VAR_9, VAR_12, VAR_4, ((void*)0), ((void*)0), 0, VAR_0 );
    FUNC_1( VAR_9.endpos, VAR_4, 32 );
   }


   if ( FUNC_6() < VAR_3.value ) {
    FUNC_5( VAR_12, VAR_4 );
   }
  }
 }


 if ( VAR_7 ) {
  FUNC_0( VAR_4, VAR_8 );
 } else {
  FUNC_3( VAR_2, 0, VAR_4, VAR_6, VAR_1 );
 }

}
