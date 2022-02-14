
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*,int ,unsigned char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;

void FUNC_4( char *VAR_1, char *VAR_2 ){
 byte VAR_3[ 16 ];
 char VAR_4[ 64 ], VAR_5[ 256 ];



 if ( VAR_1 == ((void*)0) || VAR_1[ 0 ] == '\0' ||
   VAR_2 == ((void*)0) || VAR_2[ 0 ] == '\0' ) {
  return;
 }


 FUNC_2( VAR_5, "%s;%s", VAR_1, VAR_2 );


 FUNC_0( VAR_5, FUNC_3( VAR_5 ), (unsigned char *) &VAR_3 );



 FUNC_2( VAR_4, "vertexremapshader%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X",
    VAR_3[ 0 ], VAR_3[ 1 ], VAR_3[ 2 ], VAR_3[ 3 ], VAR_3[ 4 ], VAR_3[ 5 ], VAR_3[ 6 ], VAR_3[ 7 ],
    VAR_3[ 8 ], VAR_3[ 9 ], VAR_3[ 10 ], VAR_3[ 11 ], VAR_3[ 12 ], VAR_3[ 13 ], VAR_3[ 14 ] );


 FUNC_1( &VAR_0[ 0 ], VAR_4, VAR_5 );
}
