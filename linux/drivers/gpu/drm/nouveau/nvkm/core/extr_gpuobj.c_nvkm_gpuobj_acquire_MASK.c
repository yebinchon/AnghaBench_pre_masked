
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
struct nvkm_gpuobj {void* map; int * func; TYPE_1__* node; int parent; } ;
struct TYPE_2__ {int offset; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void *
FUNC_2(struct nvkm_gpuobj *VAR_2)
{
 VAR_2->map = FUNC_1(VAR_2->parent);
 if (FUNC_0(VAR_2->map)) {
  VAR_2->map = (u8 *)VAR_2->map + VAR_2->node->offset;
  VAR_2->func = &VAR_0;
 } else {
  VAR_2->func = &VAR_1;
 }
 return VAR_2->map;
}
