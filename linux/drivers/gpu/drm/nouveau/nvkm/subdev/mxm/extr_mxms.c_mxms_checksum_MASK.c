
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvkm_mxm {int subdev; } ;


 scalar_t__* FUNC_0 (struct nvkm_mxm*) ;
 scalar_t__ FUNC_1 (struct nvkm_mxm*) ;
 scalar_t__ FUNC_2 (struct nvkm_mxm*) ;
 int FUNC_3 (int *,char*) ;

bool
FUNC_4(struct nvkm_mxm *VAR_0)
{
 u16 VAR_1 = FUNC_1(VAR_0) + FUNC_2(VAR_0);
 u8 *VAR_2 = FUNC_0(VAR_0), VAR_3 = 0;
 while (VAR_1--)
  VAR_3 += *VAR_2++;
 if (VAR_3) {
  FUNC_3(&VAR_0->subdev, "checksum invalid\n");
  return 0;
 }
 return 1;
}
