
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bufSize; scalar_t__ flag; int * curPos; int * buffer; } ;
typedef TYPE_1__ picoMemStream_t ;
typedef int picoByte_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

picoMemStream_t *FUNC_2( picoByte_t *VAR_0, int VAR_1 ){
 picoMemStream_t *VAR_2;


 if ( VAR_0 == ((void*)0) || VAR_1 <= 0 ) {
  return ((void*)0);
 }


 VAR_2 = FUNC_0( sizeof( picoMemStream_t ) );
 if ( VAR_2 == ((void*)0) ) {
  return ((void*)0);
 }
 FUNC_1( VAR_2,0,sizeof( picoMemStream_t ) );


 VAR_2->buffer = VAR_0;
 VAR_2->curPos = VAR_0;
 VAR_2->bufSize = VAR_1;
 VAR_2->flag = 0;


 return VAR_2;
}
