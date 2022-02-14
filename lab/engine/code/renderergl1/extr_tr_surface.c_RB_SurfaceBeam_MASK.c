
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_6__ {scalar_t__* origin; scalar_t__* oldorigin; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_8__ {TYPE_1__* currentEntity; } ;
struct TYPE_7__ {int whiteImage; } ;
struct TYPE_5__ {TYPE_2__ e; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,double) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int,scalar_t__*) ;
 TYPE_4__ VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__*) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void FUNC_11( void )
{

 refEntity_t *VAR_6;
 int VAR_7;
 vec3_t VAR_8;
 vec3_t VAR_9, VAR_10;
 vec3_t VAR_11[6], VAR_12[6];
 vec3_t VAR_13, VAR_14;

 VAR_6 = &VAR_4.currentEntity->e;

 VAR_13[0] = VAR_6->oldorigin[0];
 VAR_13[1] = VAR_6->oldorigin[1];
 VAR_13[2] = VAR_6->oldorigin[2];

 VAR_14[0] = VAR_6->origin[0];
 VAR_14[1] = VAR_6->origin[1];
 VAR_14[2] = VAR_6->origin[2];

 VAR_10[0] = VAR_9[0] = VAR_13[0] - VAR_14[0];
 VAR_10[1] = VAR_9[1] = VAR_13[1] - VAR_14[1];
 VAR_10[2] = VAR_9[2] = VAR_13[2] - VAR_14[2];

 if ( FUNC_5( VAR_10 ) == 0 )
  return;

 FUNC_2( VAR_8, VAR_10 );

 FUNC_6( VAR_8, 4, VAR_8 );

 for ( VAR_7 = 0; VAR_7 < 6 ; VAR_7++ )
 {
  FUNC_3( VAR_11[VAR_7], VAR_10, VAR_8, (360.0/6)*VAR_7 );

  FUNC_4( VAR_11[VAR_7], VAR_9, VAR_12[VAR_7] );
 }

 FUNC_0( VAR_5.whiteImage );

 FUNC_1( VAR_1 | VAR_0 );

 FUNC_8( 1, 0, 0 );

 FUNC_7( VAR_2 );
 for ( VAR_7 = 0; VAR_7 <= 6; VAR_7++ ) {
  FUNC_10( VAR_11[ VAR_7 % 6] );
  FUNC_10( VAR_12[ VAR_7 % 6] );
 }
 FUNC_9();
}
