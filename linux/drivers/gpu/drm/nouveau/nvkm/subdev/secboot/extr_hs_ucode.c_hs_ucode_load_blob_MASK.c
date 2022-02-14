
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_falcon {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct nvkm_falcon const*,void*,int) ;
 void* FUNC_3 (struct nvkm_subdev*,char const*,int ) ;
 int FUNC_4 (struct nvkm_subdev*,char*,char const*) ;

void *
FUNC_5(struct nvkm_subdev *VAR_1, const struct nvkm_falcon *VAR_2,
     const char *VAR_3)
{
 void *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_3, 0);
 if (FUNC_1(VAR_4))
  return VAR_4;


 switch (((u32 *)VAR_4)[0]) {
 case 0x3b1d14f0:
  VAR_5 = 1;
  break;
 case 0x000010de:
  VAR_5 = 0;
  break;
 default:
  FUNC_4(VAR_1, "unknown header for HS blob %s\n", VAR_3);
  return FUNC_0(-VAR_0);
 }

 FUNC_2(VAR_2, VAR_4, VAR_5);

 return VAR_4;
}
