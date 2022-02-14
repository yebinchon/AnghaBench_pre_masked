
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

char *FUNC_6(void)
{



 char *VAR_0 = ((void*)0);
 char *VAR_1;

 if ( ( VAR_1 = FUNC_1() ) != ((void*)0) ) {
  if ( VAR_1[0] != '\0' ) {
   size_t VAR_2 = FUNC_4( VAR_1 ) + 1;

   VAR_0 = FUNC_3( VAR_2 );
   FUNC_0( VAR_0, VAR_1, VAR_2 );


   FUNC_5( VAR_0, "\n\r\b" );
  }
  FUNC_2( VAR_1 );
 }
 return VAR_0;

}
