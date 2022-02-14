
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_instmem {int dummy; } ;
struct TYPE_2__ {scalar_t__ iomem; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (struct nvkm_instmem*) ;

__attribute__((used)) static u32
FUNC_2(struct nvkm_instmem *VAR_0, u32 VAR_1)
{
 return FUNC_0(FUNC_1(VAR_0)->iomem + VAR_1);
}
