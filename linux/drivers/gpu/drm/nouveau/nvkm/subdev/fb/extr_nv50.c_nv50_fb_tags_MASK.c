
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fb {int dummy; } ;
struct nv50_fb {int base; TYPE_1__* func; } ;
struct TYPE_2__ {int (* tags ) (int *) ;} ;


 struct nv50_fb* FUNC_0 (struct nvkm_fb*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u32
FUNC_2(struct nvkm_fb *VAR_0)
{
 struct nv50_fb *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->func->tags)
  return VAR_1->func->tags(&VAR_1->base);
 return 0;
}
