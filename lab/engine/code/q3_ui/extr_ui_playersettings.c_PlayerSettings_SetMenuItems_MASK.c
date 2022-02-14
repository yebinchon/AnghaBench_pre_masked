
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int playerInfo_t ;
struct TYPE_9__ {int curvalue; } ;
struct TYPE_8__ {int curvalue; } ;
struct TYPE_6__ {int buffer; } ;
struct TYPE_7__ {TYPE_1__ field; } ;
struct TYPE_10__ {TYPE_4__ handicap; int playerinfo; TYPE_3__ effects; TYPE_2__ name; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ,int*,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_6 (char*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7( void ) {
 vec3_t VAR_10;
 int VAR_11;
 int VAR_12;


 FUNC_1( VAR_8.name.field.buffer, FUNC_2("name"), sizeof(VAR_8.name.field.buffer) );


 VAR_11 = FUNC_6( "color1" ) - 1;
 if( VAR_11 < 0 || VAR_11 > 6 ) {
  VAR_11 = 6;
 }
 VAR_8.effects.curvalue = VAR_6[VAR_11];


 FUNC_5( &VAR_8.playerinfo, 0, sizeof(playerInfo_t) );

 VAR_10[VAR_5] = 180 - 30;
 VAR_10[VAR_1] = 0;
 VAR_10[VAR_2] = 0;

 FUNC_4( &VAR_8.playerinfo, FUNC_2( "model" ) );
 FUNC_3( &VAR_8.playerinfo, VAR_0, VAR_3, VAR_10, VAR_9, VAR_4, VAR_7 );


 VAR_12 = FUNC_0( 5, 100, FUNC_6("handicap") );
 VAR_8.handicap.curvalue = 20 - VAR_12 / 5;
}
