
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; void* buffer; void* end_p; void* script_p; int filename; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 size_t VAR_0 ;
 int FUNC_2 (char*,int ,...) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,void**,int) ;

void FUNC_5( const char *VAR_3, int VAR_4 ){
 int VAR_5;
 void* VAR_6;

 VAR_1++;
 if ( VAR_1 == &VAR_2[VAR_0] ) {
  FUNC_0( "script file exceeded MAX_INCLUDES" );
 }
 FUNC_3( VAR_1->filename, FUNC_1( VAR_3 ) );

 VAR_5 = FUNC_4( VAR_1->filename, &VAR_6, VAR_4 );

 if ( VAR_5 == -1 ) {
  FUNC_2( "Script file %s was not found\n", VAR_1->filename );
  VAR_1--;
 }
 else
 {
  if ( VAR_4 > 0 ) {
   FUNC_2( "entering %s (%d)\n", VAR_1->filename, VAR_4 + 1 );
  }
  else{
   FUNC_2( "entering %s\n", VAR_1->filename );
  }

  VAR_1->buffer = VAR_6;
  VAR_1->line = 1;
  VAR_1->script_p = VAR_1->buffer;
  VAR_1->end_p = VAR_1->buffer + VAR_5;
 }
}
