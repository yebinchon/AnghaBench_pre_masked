
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opaque; int (* free_func ) (int ,void*) ;} ;
typedef TYPE_1__ MemoryManager ;


 int FUNC_0 (int ,void*) ;

void FUNC_1(MemoryManager* VAR_0, void* VAR_1) {
  VAR_0->free_func(VAR_0->opaque, VAR_1);
}
