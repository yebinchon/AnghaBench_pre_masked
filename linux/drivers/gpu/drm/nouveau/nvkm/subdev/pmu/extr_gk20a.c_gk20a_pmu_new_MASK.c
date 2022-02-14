
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_pmu {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gk20a_pmu {int alarm; int * data; struct nvkm_pmu base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gk20a_pmu* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct nvkm_device*,int,struct nvkm_pmu*) ;

int
FUNC_3(struct nvkm_device *VAR_5, int VAR_6, struct nvkm_pmu **VAR_7)
{
 struct gk20a_pmu *VAR_8;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 *VAR_7 = &VAR_8->base;

 FUNC_2(&VAR_3, VAR_5, VAR_6, &VAR_8->base);

 VAR_8->data = &VAR_2;
 FUNC_1(&VAR_8->alarm, VAR_4);

 return 0;
}
