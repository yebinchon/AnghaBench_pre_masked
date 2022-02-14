
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ curPos; scalar_t__ buffer; scalar_t__ bufSize; int flag; } ;
typedef TYPE_1__ picoMemStream_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;

int FUNC_1( picoMemStream_t *VAR_1, void *VAR_2, int VAR_3 ){
 int VAR_4 = 1;


 if ( VAR_1 == ((void*)0) || VAR_2 == ((void*)0) ) {
  return 0;
 }

 if ( VAR_1->curPos + VAR_3 > VAR_1->buffer + VAR_1->bufSize ) {
  VAR_1->flag |= VAR_0;
  VAR_3 = VAR_1->buffer + VAR_1->bufSize - VAR_1->curPos;
  VAR_4 = 0;
 }


 FUNC_0( VAR_2, VAR_1->curPos, VAR_3 );
 VAR_1->curPos += VAR_3;
 return VAR_4;
}
