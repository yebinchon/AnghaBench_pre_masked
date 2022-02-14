
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm {scalar_t__ null; int nullp; } ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_mmu {struct nvkm_subdev subdev; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__*,int ) ;
 int FUNC_1 (int *,struct nvkm_mmu*,int ,int,int ,int ,void*,int ,struct lock_class_key*,char const*,struct nvkm_vmm**) ;
 int VAR_1 ;
 int FUNC_2 (struct nvkm_subdev*,char*) ;

int
FUNC_3(struct nvkm_mmu *VAR_2, bool VAR_3, u64 VAR_4, u64 VAR_5,
      void *VAR_6, u32 VAR_7, struct lock_class_key *VAR_8, const char *VAR_9,
      struct nvkm_vmm **VAR_10)
{
 struct nvkm_subdev *VAR_11 = &VAR_2->subdev;
 struct nvkm_vmm *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(&VAR_1, VAR_2, 0, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8, VAR_9, &VAR_12);
 *VAR_10 = VAR_12;
 if (VAR_13)
  return VAR_13;

 VAR_12->nullp = FUNC_0(VAR_11->device->dev, 16 * 1024,
     &VAR_12->null, VAR_0);
 if (!VAR_12->nullp) {
  FUNC_2(VAR_11, "unable to allocate dummy pages\n");
  VAR_12->null = 0;
 }

 return 0;
}
