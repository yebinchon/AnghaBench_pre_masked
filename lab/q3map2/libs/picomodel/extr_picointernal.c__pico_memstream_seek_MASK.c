
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int curPos; int buffer; int bufSize; } ;
typedef TYPE_1__ picoMemStream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0( picoMemStream_t *VAR_3, long VAR_4, int VAR_5 ){
 int VAR_6;


 if ( VAR_3 == ((void*)0) ) {
  return -1;
 }

 if ( VAR_5 == VAR_2 ) {
  VAR_3->curPos = VAR_3->buffer + VAR_4;
  VAR_6 = VAR_3->curPos - ( VAR_3->buffer + VAR_3->bufSize );
  if ( VAR_6 > 0 ) {
   VAR_3->curPos = VAR_3->buffer + VAR_3->bufSize;
   return VAR_4 - VAR_6;
  }
  return 0;
 }
 else if ( VAR_5 == VAR_0 ) {
  VAR_3->curPos += VAR_4;
  VAR_6 = VAR_3->curPos - ( VAR_3->buffer + VAR_3->bufSize );
  if ( VAR_6 > 0 ) {
   VAR_3->curPos = VAR_3->buffer + VAR_3->bufSize;
   return VAR_4 - VAR_6;
  }
  return 0;
 }
 else if ( VAR_5 == VAR_1 ) {
  VAR_3->curPos = ( VAR_3->buffer + VAR_3->bufSize ) - VAR_4;
  VAR_6 = VAR_3->buffer - VAR_3->curPos;
  if ( VAR_6 > 0 ) {
   VAR_3->curPos = VAR_3->buffer;
   return VAR_4 - VAR_6;
  }
  return 0;
 }

 return -1;
}
