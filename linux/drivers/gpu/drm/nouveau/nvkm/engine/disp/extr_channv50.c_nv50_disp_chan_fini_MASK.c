
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nv50_disp_chan {TYPE_1__* func; } ;
struct TYPE_2__ {int (* intr ) (struct nv50_disp_chan*,int) ;int (* fini ) (struct nv50_disp_chan*) ;} ;


 struct nv50_disp_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nv50_disp_chan*) ;
 int FUNC_2 (struct nv50_disp_chan*,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_0, bool VAR_1)
{
 struct nv50_disp_chan *VAR_2 = FUNC_0(VAR_0);
 VAR_2->func->fini(VAR_2);
 VAR_2->func->intr(VAR_2, 0);
 return 0;
}
