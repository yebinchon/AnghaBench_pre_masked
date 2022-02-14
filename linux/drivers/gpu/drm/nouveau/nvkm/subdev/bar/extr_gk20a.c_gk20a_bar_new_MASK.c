
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int dummy; } ;
struct nvkm_bar {int iomap_uncached; } ;


 int FUNC_0 (int *,struct nvkm_device*,int,struct nvkm_bar**) ;
 int VAR_0 ;

int
FUNC_1(struct nvkm_device *VAR_1, int VAR_2, struct nvkm_bar **VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0)
  (*VAR_3)->iomap_uncached = 1;
 return VAR_4;
}
