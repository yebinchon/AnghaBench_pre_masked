
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_sec2 {int engine; int work; int addr; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct nvkm_sec2* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct nvkm_device*,int,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(struct nvkm_device *VAR_4, int VAR_5, u32 VAR_6,
        struct nvkm_sec2 **VAR_7)
{
 struct nvkm_sec2 *VAR_8;

 if (!(VAR_8 = *VAR_7 = FUNC_1(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 VAR_8->addr = VAR_6;
 FUNC_0(&VAR_8->work, VAR_3);

 return FUNC_2(&VAR_2, VAR_4, VAR_5, 1, &VAR_8->engine);
}
