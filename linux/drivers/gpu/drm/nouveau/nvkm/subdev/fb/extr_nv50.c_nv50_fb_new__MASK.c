
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv50_fb_func {int dummy; } ;
struct nv50_fb {struct nvkm_fb base; struct nv50_fb_func const* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv50_fb* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_device*,int,struct nvkm_fb*) ;

int
FUNC_2(const struct nv50_fb_func *VAR_3, struct nvkm_device *VAR_4,
      int VAR_5, struct nvkm_fb **VAR_6)
{
 struct nv50_fb *VAR_7;

 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 FUNC_1(&VAR_2, VAR_4, VAR_5, &VAR_7->base);
 VAR_7->func = VAR_3;
 *VAR_6 = &VAR_7->base;

 return 0;
}
