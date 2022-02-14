
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_ram {int dummy; } ;
struct nvkm_fb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nvkm_fb*,struct nvkm_ram*) ;
 int VAR_2 ;
 struct nvkm_ram* FUNC_1 (int,int ) ;

int
FUNC_2(struct nvkm_fb *VAR_3, struct nvkm_ram **VAR_4)
{
 struct nvkm_ram *VAR_5;

 if (!(VAR_5 = *VAR_4 = FUNC_1(sizeof(*VAR_5), VAR_1)))
  return -VAR_0;

 return FUNC_0(&VAR_2, VAR_3, VAR_5);

}
