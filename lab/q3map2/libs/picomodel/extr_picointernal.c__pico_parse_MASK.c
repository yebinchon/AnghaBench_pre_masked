
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* token; } ;
typedef TYPE_1__ picoParser_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;

char *FUNC_1( picoParser_t *VAR_0, int VAR_1 ){

 if ( VAR_0 == ((void*)0) ) {
  return ((void*)0);
 }


 if ( !FUNC_0( VAR_0,VAR_1,1 ) ) {
  return ((void*)0);
 }


 return VAR_0->token;
}
