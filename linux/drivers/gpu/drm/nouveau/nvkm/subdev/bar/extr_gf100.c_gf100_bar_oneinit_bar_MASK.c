
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nvkm_device {TYPE_1__* func; } ;
struct lock_class_key {int dummy; } ;
struct gf100_barN {int inst; TYPE_4__* vmm; } ;
struct TYPE_8__ {int debug; struct nvkm_device* device; } ;
struct TYPE_9__ {TYPE_2__ subdev; } ;
struct gf100_bar {TYPE_3__ base; scalar_t__ bar2_halve; } ;
typedef int resource_size_t ;
struct TYPE_10__ {int debug; int * engref; } ;
struct TYPE_7__ {int (* resource_size ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int ,int,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (struct nvkm_device*,int ,int,int *,int ,struct lock_class_key*,char*,TYPE_4__**) ;
 int FUNC_5 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_6(struct gf100_bar *VAR_3, struct gf100_barN *VAR_4,
        struct lock_class_key *VAR_5, int VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_3->base.subdev.device;
 resource_size_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_1, 0x1000, 0, 0,
         &VAR_4->inst);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_7->func->resource_size(VAR_7, VAR_6);
 if (!VAR_8)
  return -VAR_0;
 if (VAR_6 == 3 && VAR_3->bar2_halve)
  VAR_8 >>= 1;

 VAR_9 = FUNC_4(VAR_7, 0, VAR_8, ((void*)0), 0, VAR_5,
      (VAR_6 == 3) ? "bar2" : "bar1", &VAR_4->vmm);
 if (VAR_9)
  return VAR_9;

 FUNC_0(&VAR_4->vmm->engref[VAR_2]);
 VAR_4->vmm->debug = VAR_3->base.subdev.debug;




 if (VAR_6 == 3) {
  VAR_9 = FUNC_2(VAR_4->vmm);
  if (VAR_9)
   return VAR_9;
 }

 return FUNC_3(VAR_4->vmm, VAR_4->inst);
}
