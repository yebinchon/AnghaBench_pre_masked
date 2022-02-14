
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* token; } ;
typedef TYPE_1__ picoParser_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;

int FUNC_1( picoParser_t *VAR_0 ){
 int VAR_1 = 1;
 int VAR_2;


 if ( VAR_0 == ((void*)0) ) {
  return 0;
 }


 VAR_2 = 0;


 while ( 1 )
 {

  if ( !FUNC_0( VAR_0,1,1 ) ) {

   return 0;
  }

  if ( VAR_1 && VAR_0->token[0] != '{' ) {

   return 0;
  }

  VAR_1 = 0;


  if ( VAR_0->token[1] == '\0' ) {
   if ( VAR_0->token[0] == '{' ) {
    VAR_2++;
   }
   if ( VAR_0->token[0] == '}' ) {
    VAR_2--;
   }
  }

  if ( VAR_2 == 0 ) {
   break;
  }
 }

 return 1;
}
