
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nvkm_vmm {int mutex; } ;
struct nvkm_vma {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_vmm*,int,int,int,int ,int ,int ,struct nvkm_vma**) ;

int
FUNC_3(struct nvkm_vmm *VAR_0, u8 VAR_1, u64 VAR_2, struct nvkm_vma **VAR_3)
{
 int VAR_4;
 FUNC_0(&VAR_0->mutex);
 VAR_4 = FUNC_2(VAR_0, 0, 1, 0, VAR_1, 0, VAR_2, VAR_3);
 FUNC_1(&VAR_0->mutex);
 return VAR_4;
}
