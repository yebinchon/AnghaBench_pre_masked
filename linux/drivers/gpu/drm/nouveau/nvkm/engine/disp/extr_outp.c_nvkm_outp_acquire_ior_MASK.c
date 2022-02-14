
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int link; } ;
struct TYPE_6__ {TYPE_2__ sorconf; } ;
struct nvkm_outp {int acquired; TYPE_3__ info; struct nvkm_ior* ior; } ;
struct TYPE_4__ {int link; struct nvkm_outp* outp; } ;
struct nvkm_ior {TYPE_1__ asy; } ;



__attribute__((used)) static inline int
FUNC_0(struct nvkm_outp *VAR_0, u8 VAR_1, struct nvkm_ior *VAR_2)
{
 VAR_0->ior = VAR_2;
 VAR_0->ior->asy.outp = VAR_0;
 VAR_0->ior->asy.link = VAR_0->info.sorconf.link;
 VAR_0->acquired |= VAR_1;
 return 0;
}
