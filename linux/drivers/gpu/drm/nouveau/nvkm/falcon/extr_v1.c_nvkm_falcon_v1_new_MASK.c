
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_falcon {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_falcon* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_subdev*,char const*,int ,struct nvkm_falcon*) ;
 int VAR_2 ;

int
FUNC_2(struct nvkm_subdev *VAR_3, const char *VAR_4, u32 VAR_5,
     struct nvkm_falcon **VAR_6)
{
 struct nvkm_falcon *VAR_7;
 if (!(VAR_7 = *VAR_6 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 FUNC_1(&VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
 return 0;
}
