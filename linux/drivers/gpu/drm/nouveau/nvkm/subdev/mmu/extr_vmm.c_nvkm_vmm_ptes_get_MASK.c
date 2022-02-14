
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct nvkm_vmm_page {int dummy; } ;
struct nvkm_vmm {int dummy; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,unsigned long long,unsigned long long,char*,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vmm_page const*,unsigned long long,unsigned long long) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct nvkm_vmm *VAR_2, const struct nvkm_vmm_page *VAR_3,
    u64 VAR_4, u64 VAR_5)
{
 u64 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, "ref", 1, 0,
     VAR_1, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_6 != ~0ULL) {
  if (VAR_6 != VAR_4)
   FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6 - VAR_4);
  return -VAR_0;
 }
 return 0;
}
