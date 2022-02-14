
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_mc {TYPE_1__* func; } ;
struct nvkm_device {struct nvkm_mc* mc; } ;
struct TYPE_2__ {int (* unk260 ) (struct nvkm_mc*,int ) ;} ;


 scalar_t__ FUNC_0 (struct nvkm_mc*) ;
 int FUNC_1 (struct nvkm_mc*,int ) ;

void
FUNC_2(struct nvkm_device *VAR_0, u32 VAR_1)
{
 struct nvkm_mc *VAR_2 = VAR_0->mc;
 if (FUNC_0(VAR_2) && VAR_2->func->unk260)
  VAR_2->func->unk260(VAR_2, VAR_1);
}
