
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_volt {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nvkm_device*,int,struct nvkm_volt**) ;
 int FUNC_1 (struct nvkm_volt*) ;

int
FUNC_2(struct nvkm_device *VAR_1, int VAR_2, struct nvkm_volt **VAR_3)
{
 struct nvkm_volt *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_0, VAR_1, VAR_2, &VAR_4);
 *VAR_3 = VAR_4;
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_4);
}
