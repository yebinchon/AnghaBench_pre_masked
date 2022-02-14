
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct nvkm_vmm_page {int type; TYPE_2__* desc; } ;
struct nvkm_vmm {int dummy; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {int sparse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,unsigned long long,unsigned long long,char*,int,int,int ,int *,int *,int ) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vmm_page const*,unsigned long long,unsigned long long) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct nvkm_vmm *VAR_4, const struct nvkm_vmm_page *VAR_5,
    u64 VAR_6, u64 VAR_7)
{
 if ((VAR_5->type & VAR_2)) {
  u64 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, "sparse ref",
      1, 0, VAR_3,
      ((void*)0), ((void*)0), VAR_5->desc->func->sparse);
  if (VAR_8 != ~0ULL) {
   if ((VAR_7 = VAR_8 - VAR_6))
    FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
   return -VAR_1;
  }
  return 0;
 }
 return -VAR_0;
}
