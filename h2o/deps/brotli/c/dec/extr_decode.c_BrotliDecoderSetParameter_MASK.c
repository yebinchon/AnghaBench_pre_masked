
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int canny_ringbuffer_allocation; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef int BrotliDecoderParameter ;
typedef int BROTLI_BOOL ;



 int VAR_0 ;
 int VAR_1 ;

BROTLI_BOOL FUNC_0(
    BrotliDecoderState* VAR_2, BrotliDecoderParameter VAR_3, uint32_t VAR_4) {
  switch (VAR_3) {
    case 128:
      VAR_2->canny_ringbuffer_allocation = !!VAR_4 ? 0 : 1;
      return VAR_1;

    default: return VAR_0;
  }
}
