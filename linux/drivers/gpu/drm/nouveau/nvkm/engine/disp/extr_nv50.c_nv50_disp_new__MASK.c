
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_disp {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv50_disp_func {int uevent; int super; } ;
struct nv50_disp {int uevent; int chan; int supervisor; int wq; struct nvkm_disp base; struct nv50_disp_func const* func; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 struct nv50_disp* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,struct nvkm_device*,int,struct nvkm_disp*) ;
 int FUNC_5 (int ,int,int ,int *) ;

int
FUNC_6(const struct nv50_disp_func *VAR_3, struct nvkm_device *VAR_4,
        int VAR_5, struct nvkm_disp **VAR_6)
{
 struct nv50_disp *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 VAR_7->func = VAR_3;
 *VAR_6 = &VAR_7->base;

 VAR_8 = FUNC_4(&VAR_2, VAR_4, VAR_5, &VAR_7->base);
 if (VAR_8)
  return VAR_8;

 VAR_7->wq = FUNC_2("nvkm-disp");
 if (!VAR_7->wq)
  return -VAR_0;

 FUNC_1(&VAR_7->supervisor, VAR_3->super);

 return FUNC_5(VAR_3->uevent, 1, FUNC_0(VAR_7->chan),
          &VAR_7->uevent);
}
