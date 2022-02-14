
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_func {int dummy; } ;
struct nvkm_vmm {int dummy; } ;
struct TYPE_6__ {TYPE_2__* device; } ;
struct nvkm_mmu {TYPE_3__ subdev; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_5__ {TYPE_1__* fb; } ;
struct TYPE_4__ {int page; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_vmm_func const*,struct nvkm_mmu*,int ,int,int ,int ,void*,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;

int
FUNC_2(const struct nvkm_vmm_func *VAR_1,
        const struct nvkm_vmm_func *VAR_2,
        struct nvkm_mmu *VAR_3, bool VAR_4, u64 VAR_5, u64 VAR_6,
        void *VAR_7, u32 VAR_8, struct lock_class_key *VAR_9,
        const char *VAR_10, struct nvkm_vmm **VAR_11)
{
 switch (VAR_3->subdev.device->fb->page) {
 case 16: return FUNC_1(VAR_1, VAR_3, 0, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 case 17: return FUNC_1(VAR_2, VAR_3, 0, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 default:
  FUNC_0(1);
  return -VAR_0;
 }
}
