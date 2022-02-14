
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* brotli_free_func ) (void*,TYPE_1__*) ;
struct TYPE_7__ {void* opaque; int (* free_func ) (void*,TYPE_1__*) ;} ;
struct TYPE_6__ {TYPE_2__ memory_manager_; } ;
typedef TYPE_2__ MemoryManager ;
typedef TYPE_1__ BrotliEncoderState ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(BrotliEncoderState* VAR_0) {
  if (!VAR_0) {
    return;
  } else {
    MemoryManager* VAR_1 = &VAR_0->memory_manager_;
    brotli_free_func VAR_2 = VAR_1->free_func;
    void* VAR_3 = VAR_1->opaque;
    FUNC_0(VAR_0);
    VAR_2(VAR_3, VAR_0);
  }
}
