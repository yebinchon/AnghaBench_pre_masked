
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_disp {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_disp*,int) ;
 int FUNC_1 (int *,struct nvkm_device*,int,struct nvkm_disp**) ;

int
FUNC_2(struct nvkm_device *VAR_1, int VAR_2, struct nvkm_disp **VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(&VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_4 = FUNC_0(*VAR_3, VAR_5);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
