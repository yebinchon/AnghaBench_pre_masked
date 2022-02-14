
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_gr {TYPE_1__* func; } ;
struct TYPE_2__ {int (* units ) (struct nvkm_gr*) ;} ;


 int FUNC_0 (struct nvkm_gr*) ;

u64
FUNC_1(struct nvkm_gr *VAR_0)
{
 if (VAR_0->func->units)
  return VAR_0->func->units(VAR_0);
 return 0;
}
