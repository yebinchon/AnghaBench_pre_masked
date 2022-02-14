
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_gpuobj {TYPE_1__* node; int parent; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(struct nvkm_gpuobj *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->parent, VAR_0->node->offset + VAR_1);
}
