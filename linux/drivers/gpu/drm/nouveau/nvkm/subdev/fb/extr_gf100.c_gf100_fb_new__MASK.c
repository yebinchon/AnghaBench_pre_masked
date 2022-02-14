
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fb_func {int dummy; } ;
struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gf100_fb {struct nvkm_fb base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gf100_fb* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_fb_func const*,struct nvkm_device*,int,struct nvkm_fb*) ;

int
FUNC_2(const struct nvkm_fb_func *VAR_2, struct nvkm_device *VAR_3,
       int VAR_4, struct nvkm_fb **VAR_5)
{
 struct gf100_fb *VAR_6;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6->base);
 *VAR_5 = &VAR_6->base;

 return 0;
}
