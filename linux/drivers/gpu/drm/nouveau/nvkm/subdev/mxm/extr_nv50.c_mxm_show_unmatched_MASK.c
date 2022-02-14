
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_mxm {struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_mxm *VAR_0, u8 *VAR_1, void *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_0->subdev;
 u64 VAR_4 = *(u64 *)VAR_1;
 if ((VAR_4 & 0xf0) != 0xf0)
  FUNC_0(VAR_3, "unmatched output device %016llx\n", VAR_4);
 return 1;
}
