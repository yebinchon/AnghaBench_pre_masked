
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_oclass {struct nv50_disp_user* priv; int parent; } ;
struct nvkm_object {int dummy; } ;
struct nv50_disp_user {int (* ctor ) (struct nvkm_oclass const*,void*,int ,struct nv50_disp*,struct nvkm_object**) ;} ;
struct nv50_disp {int dummy; } ;
struct TYPE_2__ {struct nv50_disp* disp; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_oclass const*,void*,int ,struct nv50_disp*,struct nvkm_object**) ;

__attribute__((used)) static int
FUNC_2(const struct nvkm_oclass *VAR_0,
     void *VAR_1, u32 VAR_2, struct nvkm_object **VAR_3)
{
 struct nv50_disp *VAR_4 = FUNC_0(VAR_0->parent)->disp;
 const struct nv50_disp_user *VAR_5 = VAR_0->priv;
 return VAR_5->ctor(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
}
