
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileHandle_t ;


 char* FUNC_0 (int ,int,char const*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4( const char *VAR_2, int VAR_3 )
{
 fileHandle_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3( VAR_0, &VAR_4 );
 FUNC_2( VAR_4 );

 if( VAR_5 != VAR_1 )
  FUNC_1( "cl_guid", "" );
 else
  FUNC_1( "cl_guid", FUNC_0( VAR_0, VAR_1,
   VAR_2, VAR_3 ) );
}
