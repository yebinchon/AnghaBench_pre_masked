
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileHandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4( fileHandle_t VAR_1, char *VAR_2 ) {
 char VAR_3[5];
 int VAR_4;

 while( ( VAR_4 = FUNC_3(VAR_1, VAR_3) ) >= 0 )
 {

  if( !FUNC_2( VAR_3, VAR_2, 4 ) )
   return VAR_4;

  VAR_4 = FUNC_1( VAR_4, 2 );


  FUNC_0( VAR_1, VAR_4, VAR_0 );
 }

 return -1;
}
