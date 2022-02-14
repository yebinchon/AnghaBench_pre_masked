
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ searchpath_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void FUNC_3( void ) {
 searchpath_t *VAR_1;
 char *VAR_2;

 VAR_2 = FUNC_0(1);

 if ( !VAR_2[0] ) {
  FUNC_1( "Usage: which <file>\n" );
  return;
 }


 if ( VAR_2[0] == '/' || VAR_2[0] == '\\' ) {
  VAR_2++;
 }


 for(VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
 {
  if(FUNC_2(VAR_2, VAR_1))
   return;
 }

 FUNC_1("File not found: \"%s\"\n", VAR_2);
}
