
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int token; } ;
typedef TYPE_1__ picoParser_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2( picoParser_t *VAR_0, int VAR_1, char *VAR_2 ){
 if ( !FUNC_0( VAR_0,VAR_1,1 ) ) {
  return 0;
 }
 if ( !FUNC_1( VAR_0->token,VAR_2 ) ) {
  return 1;
 }
 return 0;
}
