
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileHandle_t ;
typedef int buff ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_2 = 0;
 unsigned char VAR_3[ VAR_1 ];
 fileHandle_t VAR_4;

 VAR_2 = FUNC_3( VAR_0, &VAR_4 );
 FUNC_2( VAR_4 );
 if( VAR_2 == VAR_1 ) {
  FUNC_0( "QKEY found.\n" );
  return;
 }
 else {
  if( VAR_2 > 0 ) {
   FUNC_0( "QKEY file size != %d, regenerating\n",
    VAR_1 );
  }

  FUNC_0( "QKEY building random string\n" );
  FUNC_1( VAR_3, sizeof(VAR_3) );

  VAR_4 = FUNC_4( VAR_0 );
  if( !VAR_4 ) {
   FUNC_0( "QKEY could not open %s for write\n",
    VAR_0 );
   return;
  }
  FUNC_5( VAR_3, sizeof(VAR_3), VAR_4 );
  FUNC_2( VAR_4 );
  FUNC_0( "QKEY generated\n" );
 }
}
