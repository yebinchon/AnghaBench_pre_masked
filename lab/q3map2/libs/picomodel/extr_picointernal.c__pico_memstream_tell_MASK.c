
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long curPos; long buffer; } ;
typedef TYPE_1__ picoMemStream_t ;



long FUNC_0( picoMemStream_t *VAR_0 ){

 if ( VAR_0 == ((void*)0) ) {
  return -1;
 }

 return VAR_0->curPos - VAR_0->buffer;
}
