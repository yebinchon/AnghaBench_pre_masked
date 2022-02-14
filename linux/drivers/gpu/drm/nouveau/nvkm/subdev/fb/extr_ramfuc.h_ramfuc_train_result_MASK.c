
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_fb {TYPE_2__ subdev; } ;
struct TYPE_3__ {int pmu; } ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct nvkm_fb *VAR_0, u32 *VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_0->subdev.device->pmu, VAR_1, VAR_2);
}
