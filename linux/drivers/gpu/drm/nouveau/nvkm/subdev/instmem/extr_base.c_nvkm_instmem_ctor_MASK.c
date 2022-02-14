
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_instmem_func {int dummy; } ;
struct nvkm_instmem {int boot; int list; int lock; struct nvkm_instmem_func const* func; int subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct nvkm_device*,int,int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(const struct nvkm_instmem_func *VAR_1,
    struct nvkm_device *VAR_2, int VAR_3,
    struct nvkm_instmem *VAR_4)
{
 FUNC_1(&VAR_0, VAR_2, VAR_3, &VAR_4->subdev);
 VAR_4->func = VAR_1;
 FUNC_2(&VAR_4->lock);
 FUNC_0(&VAR_4->list);
 FUNC_0(&VAR_4->boot);
}
