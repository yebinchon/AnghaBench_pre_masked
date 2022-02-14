
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_mxm {int subdev; } ;


 int FUNC_0 (struct nvkm_mxm*) ;
 int * FUNC_1 (struct nvkm_mxm*) ;
 int FUNC_2 (struct nvkm_mxm*) ;
 int FUNC_3 (int *,char*) ;

bool
FUNC_4(struct nvkm_mxm *VAR_0)
{
 u8 *VAR_1 = FUNC_1(VAR_0);
 if (*(u32 *)VAR_1 != 0x5f4d584d) {
  FUNC_3(&VAR_0->subdev, "signature invalid\n");
  return 0;
 }

 if (!FUNC_2(VAR_0) || !FUNC_0(VAR_0))
  return 0;

 return 1;
}
