
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_nvdec {int engine; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_nvdec* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,int *) ;
 int VAR_2 ;

int
FUNC_2(struct nvkm_device *VAR_3, int VAR_4,
  struct nvkm_nvdec **VAR_5)
{
 struct nvkm_nvdec *VAR_6;

 if (!(VAR_6 = *VAR_5 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;

 return FUNC_1(&VAR_2, VAR_3, VAR_4, 1,
    &VAR_6->engine);
}
