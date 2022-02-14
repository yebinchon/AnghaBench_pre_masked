
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_devinit {int post; TYPE_1__* func; } ;
struct TYPE_2__ {int (* post ) (struct nvkm_devinit*,int ) ;} ;


 int FUNC_0 (struct nvkm_devinit*) ;
 int FUNC_1 (struct nvkm_devinit*,int ) ;

int
FUNC_2(struct nvkm_devinit *VAR_0, u64 *VAR_1)
{
 int VAR_2 = 0;
 if (VAR_0 && VAR_0->func->post)
  VAR_2 = VAR_0->func->post(VAR_0, VAR_0->post);
 *VAR_1 = FUNC_0(VAR_0);
 return VAR_2;
}
