
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int brotli_free_func ;
typedef scalar_t__ (* brotli_alloc_func ) (void*,int) ;
struct TYPE_4__ {int memory_manager_; } ;
typedef TYPE_1__ BrotliEncoderState ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__ (*) (void*,int),int ,void*) ;
 scalar_t__ FUNC_2 (int) ;

BrotliEncoderState* FUNC_3(brotli_alloc_func VAR_0,
                                                brotli_free_func VAR_1,
                                                void* VAR_2) {
  BrotliEncoderState* VAR_3 = 0;
  if (!VAR_0 && !VAR_1) {
    VAR_3 = (BrotliEncoderState*)FUNC_2(sizeof(BrotliEncoderState));
  } else if (VAR_0 && VAR_1) {
    VAR_3 = (BrotliEncoderState*)VAR_0(VAR_2, sizeof(BrotliEncoderState));
  }
  if (VAR_3 == 0) {

    return 0;
  }
  FUNC_1(
      &VAR_3->memory_manager_, VAR_0, VAR_1, VAR_2);
  FUNC_0(VAR_3);
  return VAR_3;
}
