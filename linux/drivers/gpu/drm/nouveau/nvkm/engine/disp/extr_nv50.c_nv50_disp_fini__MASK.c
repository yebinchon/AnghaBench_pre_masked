
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_disp {int dummy; } ;
struct nv50_disp {TYPE_1__* func; } ;
struct TYPE_2__ {int (* fini ) (struct nv50_disp*) ;} ;


 struct nv50_disp* FUNC_0 (struct nvkm_disp*) ;
 int FUNC_1 (struct nv50_disp*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_disp *VAR_0)
{
 struct nv50_disp *VAR_1 = FUNC_0(VAR_0);
 VAR_1->func->fini(VAR_1);
}
