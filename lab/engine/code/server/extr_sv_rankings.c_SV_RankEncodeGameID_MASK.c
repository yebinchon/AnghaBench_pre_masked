
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int qint64 ;
typedef int game_id ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( uint64_t VAR_0, char* VAR_1,
 int VAR_2 )
{
 FUNC_3( VAR_1 != ((void*)0) );

 if( VAR_2 < ( ( sizeof(VAR_0) * 4) / 3 + 2) )
 {
  FUNC_0( "SV_RankEncodeGameID: result buffer too small\n" );
  VAR_1[0] = '\0';
 }
 else
 {
  qint64 VAR_3 = FUNC_1(*(qint64*)&VAR_0);
  FUNC_2( VAR_1, (unsigned char*)&VAR_3,
   sizeof(qint64) );
 }
}
