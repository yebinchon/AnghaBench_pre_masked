
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ image_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char const*) ;

image_t *FUNC_4( const char *VAR_2 ){
 int VAR_3;
 char VAR_4[ 1024 ];



 FUNC_0();


 if ( VAR_2 == ((void*)0) || VAR_2[ 0 ] == '\0' ) {
  return ((void*)0);
 }


 FUNC_3( VAR_4, VAR_2 );
 FUNC_1( VAR_4 );


 for ( VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
 {
  if ( VAR_1[ VAR_3 ].name != ((void*)0) && !FUNC_2( VAR_4, VAR_1[ VAR_3 ].name ) ) {
   return &VAR_1[ VAR_3 ];
  }
 }


 return ((void*)0);
}
