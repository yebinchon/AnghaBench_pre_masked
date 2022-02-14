
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nv50_disp_chan {TYPE_1__* func; } ;
struct TYPE_2__ {int (* init ) (struct nv50_disp_chan*) ;int (* intr ) (struct nv50_disp_chan*,int) ;} ;


 struct nv50_disp_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nv50_disp_chan*,int) ;
 int FUNC_2 (struct nv50_disp_chan*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_0)
{
 struct nv50_disp_chan *VAR_1 = FUNC_0(VAR_0);
 VAR_1->func->intr(VAR_1, 1);
 return VAR_1->func->init(VAR_1);
}
