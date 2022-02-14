
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_devidx { ____Placeholder_nvkm_devidx } nvkm_devidx ;


 int FUNC_0 (struct nvkm_device*,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;

bool
FUNC_2(struct nvkm_device *VAR_0, enum nvkm_devidx VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_0, 0, VAR_1);

 return (VAR_2 != 0) &&
        ((FUNC_1(VAR_0, 0x000200) & VAR_2) == VAR_2);
}
