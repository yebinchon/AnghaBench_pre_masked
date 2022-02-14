
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int filename ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (char const*,char const*,int *,int*,scalar_t__) ;
 int FUNC_4 (char**,int) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*,int) ;

void FUNC_6( const char *VAR_1, const char *VAR_2,
  qboolean VAR_3, void(*VAR_4)(const char *VAR_5), qboolean VAR_6 ) {
 char **VAR_7;
 int VAR_8;
 int VAR_9;
 char VAR_10[ VAR_0 ];

 VAR_7 = FUNC_3( VAR_1, VAR_2, ((void*)0), &VAR_8, VAR_6 );

 FUNC_4( VAR_7, VAR_8 );

 for( VAR_9 = 0; VAR_9 < VAR_8; VAR_9++ ) {
  FUNC_1( VAR_7[ VAR_9 ] );
  FUNC_5( VAR_10, VAR_7[ VAR_9 ], VAR_0 );

  if( VAR_3 ) {
   FUNC_0(VAR_10, VAR_10, sizeof(VAR_10));
  }

  VAR_4( VAR_10 );
 }
 FUNC_2( VAR_7 );
}
