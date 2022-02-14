
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; int line; char* script_p; char* end_p; int filename; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,char*) ;
 void* VAR_5 ;

void FUNC_2( char *VAR_6, int VAR_7 ){
 VAR_3 = VAR_4;
 VAR_3++;
 if ( VAR_3 == &VAR_4[VAR_0] ) {
  FUNC_0( "script file exceeded MAX_INCLUDES" );
 }
 FUNC_1( VAR_3->filename, "memory buffer" );

 VAR_3->buffer = VAR_6;
 VAR_3->line = 1;
 VAR_3->script_p = VAR_3->buffer;
 VAR_3->end_p = VAR_3->buffer + VAR_7;

 VAR_1 = VAR_2;
 VAR_5 = VAR_2;
}
