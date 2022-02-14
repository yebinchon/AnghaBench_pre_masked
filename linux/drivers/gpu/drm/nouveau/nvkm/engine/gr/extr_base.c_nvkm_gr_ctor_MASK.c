
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_gr_func {int dummy; } ;
struct nvkm_gr {int engine; struct nvkm_gr_func const* func; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int *,struct nvkm_device*,int,int,int *) ;
 int VAR_0 ;

int
FUNC_1(const struct nvkm_gr_func *VAR_1, struct nvkm_device *VAR_2,
      int VAR_3, bool VAR_4, struct nvkm_gr *VAR_5)
{
 VAR_5->func = VAR_1;
 return FUNC_0(&VAR_0, VAR_2, VAR_3, VAR_4, &VAR_5->engine);
}
