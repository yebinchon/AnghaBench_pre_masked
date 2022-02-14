
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_outp {struct nvkm_ior* ior; TYPE_1__* func; int acquired; } ;
struct TYPE_4__ {int * outp; } ;
struct nvkm_ior {TYPE_2__ asy; } ;
struct TYPE_3__ {int (* release ) (struct nvkm_outp*) ;} ;


 int FUNC_0 (struct nvkm_outp*,char*,int ,int ,struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_outp*) ;

void
FUNC_2(struct nvkm_outp *VAR_0, u8 VAR_1)
{
 struct nvkm_ior *VAR_2 = VAR_0->ior;
 FUNC_0(VAR_0, "release %02x &= %02x %p", VAR_0->acquired, ~VAR_1, VAR_2);
 if (VAR_2) {
  VAR_0->acquired &= ~VAR_1;
  if (!VAR_0->acquired) {
   if (VAR_0->func->release && VAR_0->ior)
    VAR_0->func->release(VAR_0);
   VAR_0->ior->asy.outp = ((void*)0);
   VAR_0->ior = ((void*)0);
  }
 }
}
