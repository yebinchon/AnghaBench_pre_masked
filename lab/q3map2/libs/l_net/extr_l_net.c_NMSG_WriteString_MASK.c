
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int * data; } ;
typedef TYPE_1__ netmessage_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3( netmessage_t *VAR_1, char *VAR_2 ){
 if ( VAR_1->size + FUNC_2( VAR_2 ) + 1 >= VAR_0 ) {
  FUNC_0( "NMSG_WriteString: overflow\n" );
  return;
 }
 FUNC_1( &VAR_1->data[VAR_1->size], VAR_2, FUNC_2( VAR_2 ) + 1 );
 VAR_1->size += FUNC_2( VAR_2 ) + 1;
}
