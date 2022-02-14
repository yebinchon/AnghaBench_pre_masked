
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ranked_player_t ;
typedef scalar_t__ GR_STATUS ;


 int FUNC_0 (char*,scalar_t__*,void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( GR_STATUS* VAR_1, void* VAR_2 )
{
 ranked_player_t* VAR_3;
 VAR_3 = (ranked_player_t*)VAR_2;

 FUNC_4( VAR_1 != ((void*)0) );


 FUNC_0( "SV_RankCleanupCBF( %08X, %08X );\n", VAR_1, VAR_2 );

 if( *VAR_1 != VAR_0 )
 {
  FUNC_2( "SV_RankCleanupCBF: Unexpected status %s",
   FUNC_3( *VAR_1 ) );
 }

 FUNC_1( VAR_3 );
}
