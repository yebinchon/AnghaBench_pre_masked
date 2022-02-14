
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tokenMax; char* buffer; char* cursor; int bufSize; char* max; int curLine; int * token; scalar_t__ tokenSize; } ;
typedef TYPE_1__ picoParser_t ;
typedef int picoByte_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

picoParser_t *FUNC_3( picoByte_t *VAR_0, int VAR_1 ){
 picoParser_t *VAR_2;


 if ( VAR_0 == ((void*)0) || VAR_1 <= 0 ) {
  return ((void*)0);
 }


 VAR_2 = FUNC_0( sizeof( picoParser_t ) );
 if ( VAR_2 == ((void*)0) ) {
  return ((void*)0);
 }
 FUNC_2( VAR_2,0,sizeof( picoParser_t ) );


 VAR_2->tokenSize = 0;
 VAR_2->tokenMax = 1024;
 VAR_2->token = FUNC_0( VAR_2->tokenMax );
 if ( VAR_2->token == ((void*)0) ) {
  FUNC_1( VAR_2 );
  return ((void*)0);
 }

 VAR_2->buffer = (char *)VAR_0;
 VAR_2->cursor = VAR_2->buffer;
 VAR_2->bufSize = VAR_1;
 VAR_2->max = VAR_2->buffer + VAR_1;
 VAR_2->curLine = 1;


 return VAR_2;
}
