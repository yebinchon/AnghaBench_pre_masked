
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int link; } ;
struct nvkm_ior {TYPE_1__ asy; } ;


 scalar_t__ FUNC_0 (struct nvkm_ior*) ;

__attribute__((used)) static inline u32
FUNC_1(struct nvkm_ior *VAR_0)
{
 return FUNC_0(VAR_0) + ((VAR_0->asy.link == 2) * 0x80);
}
