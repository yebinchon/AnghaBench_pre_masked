
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int playerInfo_t ;
struct TYPE_2__ {int playerinfo; int modelskin; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int*,int*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_4( void )
{
 vec3_t VAR_8;
 vec3_t VAR_9;

 FUNC_3( &VAR_7.playerinfo, 0, sizeof(playerInfo_t) );

 VAR_8[VAR_5] = 180 - 30;
 VAR_8[VAR_1] = 0;
 VAR_8[VAR_2] = 0;
 FUNC_2( VAR_9 );

 FUNC_1( &VAR_7.playerinfo, VAR_7.modelskin );
 FUNC_0( &VAR_7.playerinfo, VAR_0, VAR_3, VAR_8, VAR_9, VAR_4, VAR_6 );
}
