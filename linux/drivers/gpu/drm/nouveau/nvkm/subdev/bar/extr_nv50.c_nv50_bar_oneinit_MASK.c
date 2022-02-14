
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_device {TYPE_1__* func; } ;
struct nvkm_bar {int dummy; } ;
struct TYPE_13__ {int oneinit; int debug; struct nvkm_device* device; } ;
struct TYPE_14__ {TYPE_2__ subdev; } ;
struct nv50_bar {int pgd_addr; TYPE_4__* bar1; TYPE_4__* mem; TYPE_5__* bar1_vmm; TYPE_3__ base; TYPE_4__* bar2; TYPE_5__* bar2_vmm; TYPE_4__* pgd; TYPE_4__* pad; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_16__ {int debug; int * engref; } ;
struct TYPE_15__ {int memory; } ;
struct TYPE_12__ {int (* resource_size ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct nv50_bar* FUNC_2 (struct nvkm_bar*) ;
 int FUNC_3 (struct nvkm_device*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct nvkm_device*,int,int,int,TYPE_4__*,TYPE_4__**) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (struct nvkm_device*,int,scalar_t__,int *,int ,struct lock_class_key*,char*,TYPE_5__**) ;
 int FUNC_10 (TYPE_4__*,int,int) ;
 int FUNC_11 (struct nvkm_device*,int) ;
 int FUNC_12 (struct nvkm_device*,int) ;
 int FUNC_13 (int) ;

int
FUNC_14(struct nvkm_bar *VAR_2)
{
 struct nv50_bar *VAR_3 = FUNC_2(VAR_2);
 struct nvkm_device *VAR_4 = VAR_3->base.subdev.device;
 static struct lock_class_key VAR_5;
 static struct lock_class_key VAR_6;
 u64 VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_4, 0x20000, 0, 0, ((void*)0), &VAR_3->mem);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_4, VAR_3->pgd_addr, 0, 0, VAR_3->mem,
         &VAR_3->pad);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_4, 0x4000, 0, 0, VAR_3->mem, &VAR_3->pgd);
 if (VAR_10)
  return VAR_10;


 VAR_7 = 0x0100000000ULL;
 VAR_9 = VAR_4->func->resource_size(VAR_4, 3);
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = VAR_7 + VAR_9;

 VAR_10 = FUNC_9(VAR_4, VAR_7, VAR_8-- - VAR_7, ((void*)0), 0,
      &VAR_6, "bar2", &VAR_3->bar2_vmm);
 if (VAR_10)
  return VAR_10;

 FUNC_0(&VAR_3->bar2_vmm->engref[VAR_1]);
 VAR_3->bar2_vmm->debug = VAR_3->base.subdev.debug;

 VAR_10 = FUNC_7(VAR_3->bar2_vmm);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_8(VAR_3->bar2_vmm, VAR_3->mem->memory);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_4, 24, 16, 0, VAR_3->mem, &VAR_3->bar2);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_3->bar2);
 FUNC_10(VAR_3->bar2, 0x00, 0x7fc00000);
 FUNC_10(VAR_3->bar2, 0x04, FUNC_1(VAR_8));
 FUNC_10(VAR_3->bar2, 0x08, FUNC_1(VAR_7));
 FUNC_10(VAR_3->bar2, 0x0c, FUNC_13(VAR_8) << 24 |
       FUNC_13(VAR_7));
 FUNC_10(VAR_3->bar2, 0x10, 0x00000000);
 FUNC_10(VAR_3->bar2, 0x14, 0x00000000);
 FUNC_4(VAR_3->bar2);

 VAR_3->base.subdev.oneinit = 1;
 FUNC_3(VAR_4);


 VAR_7 = 0x0000000000ULL;
 VAR_9 = VAR_4->func->resource_size(VAR_4, 1);
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = VAR_7 + VAR_9;

 VAR_10 = FUNC_9(VAR_4, VAR_7, VAR_8-- - VAR_7, ((void*)0), 0,
      &VAR_5, "bar1", &VAR_3->bar1_vmm);
 if (VAR_10)
  return VAR_10;

 FUNC_0(&VAR_3->bar1_vmm->engref[VAR_1]);
 VAR_3->bar1_vmm->debug = VAR_3->base.subdev.debug;

 VAR_10 = FUNC_8(VAR_3->bar1_vmm, VAR_3->mem->memory);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_4, 24, 16, 0, VAR_3->mem, &VAR_3->bar1);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_3->bar1);
 FUNC_10(VAR_3->bar1, 0x00, 0x7fc00000);
 FUNC_10(VAR_3->bar1, 0x04, FUNC_1(VAR_8));
 FUNC_10(VAR_3->bar1, 0x08, FUNC_1(VAR_7));
 FUNC_10(VAR_3->bar1, 0x0c, FUNC_13(VAR_8) << 24 |
       FUNC_13(VAR_7));
 FUNC_10(VAR_3->bar1, 0x10, 0x00000000);
 FUNC_10(VAR_3->bar1, 0x14, 0x00000000);
 FUNC_4(VAR_3->bar1);
 return 0;
}
