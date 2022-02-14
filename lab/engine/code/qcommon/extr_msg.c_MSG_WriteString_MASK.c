
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string ;
typedef int msg_t ;
typedef int byte ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;

void FUNC_4( msg_t *VAR_1, const char *VAR_2 ) {
 if ( !VAR_2 ) {
  FUNC_1 (VAR_1, "", 1);
 } else {
  int VAR_3,VAR_4;
  char VAR_5[VAR_0];

  VAR_3 = FUNC_3( VAR_2 );
  if ( VAR_3 >= VAR_0 ) {
   FUNC_0( "MSG_WriteString: MAX_STRING_CHARS" );
   FUNC_1 (VAR_1, "", 1);
   return;
  }
  FUNC_2( VAR_5, VAR_2, sizeof( VAR_5 ) );


  for ( VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++ ) {
   if ( ((byte *)VAR_5)[VAR_4] > 127 || VAR_5[VAR_4] == '%' ) {
    VAR_5[VAR_4] = '.';
   }
  }

  FUNC_1 (VAR_1, VAR_5, VAR_3+1);
 }
}
