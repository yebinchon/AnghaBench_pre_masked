
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef unsigned char* GR_PLAYER_TOKEN ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned char*,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int ) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6( const char* VAR_0, GR_PLAYER_TOKEN VAR_1 )
{
 unsigned char VAR_2[1400];
 int VAR_3;
 FUNC_2( VAR_0 != ((void*)0) );

 VAR_3 = FUNC_5 (VAR_0) ;
 FUNC_0( "SV_RankDecodePlayerKey: string length %d\n",VAR_3 );

 FUNC_4(VAR_1,0,sizeof(GR_PLAYER_TOKEN));
 FUNC_4(VAR_2,0,sizeof(VAR_2));
 FUNC_3( VAR_1, VAR_2, FUNC_1( VAR_2, VAR_0, VAR_3 ) );
}
