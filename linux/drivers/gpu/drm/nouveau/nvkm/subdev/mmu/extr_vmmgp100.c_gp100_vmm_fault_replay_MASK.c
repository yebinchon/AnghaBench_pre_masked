
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_vmm {int dummy; } ;
struct gp100_vmm_fault_replay_vn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_vmm*,int) ;
 int FUNC_1 (int,void**,int *,struct gp100_vmm_fault_replay_vn) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_vmm *VAR_1, void *VAR_2, u32 VAR_3)
{
 union {
  struct gp100_vmm_fault_replay_vn vn;
 } *VAR_4 = VAR_2;
 int VAR_5 = -VAR_0;

 if (!(VAR_5 = FUNC_1(VAR_5, &VAR_2, &VAR_3, VAR_4->vn))) {
  FUNC_0(VAR_1, 0x0000000b);
 }

 return VAR_5;
}
