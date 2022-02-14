
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_client {scalar_t__ super; } ;


 int VAR_0 ;


 int FUNC_0 (struct nvkm_vmm*,void*,int) ;
 int FUNC_1 (struct nvkm_vmm*,void*,int) ;

int
FUNC_2(struct nvkm_vmm *VAR_1,
        struct nvkm_client *VAR_2, u32 VAR_3, void *VAR_4, u32 VAR_5)
{
 if (VAR_2->super) {
  switch (VAR_3) {
  case 128:
   return FUNC_1(VAR_1, VAR_4, VAR_5);
  case 129:
   return FUNC_0(VAR_1, VAR_4, VAR_5);
  default:
   break;
  }
 }
 return -VAR_0;
}
