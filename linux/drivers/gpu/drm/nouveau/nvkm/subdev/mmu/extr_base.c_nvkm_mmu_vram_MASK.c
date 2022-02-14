
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct nvkm_mmu {TYPE_4__* func; TYPE_1__ subdev; } ;
struct nvkm_mm {int dummy; } ;
struct nvkm_device {TYPE_5__* bar; TYPE_3__* fb; } ;
struct TYPE_10__ {int iomap_uncached; } ;
struct TYPE_9__ {int kind; } ;
struct TYPE_8__ {TYPE_2__* ram; } ;
struct TYPE_7__ {struct nvkm_mm vram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int const VAR_10 ;
 int FUNC_0 (struct nvkm_mm*,int ) ;
 int FUNC_1 (struct nvkm_mmu*,int,int const) ;
 int FUNC_2 (struct nvkm_mmu*) ;
 int FUNC_3 (struct nvkm_mmu*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_mmu *VAR_11)
{
 struct nvkm_device *VAR_12 = VAR_11->subdev.device;
 struct nvkm_mm *VAR_13 = &VAR_12->fb->ram->vram;
 const u32 VAR_14 = FUNC_0(VAR_13, VAR_9);
 const u32 VAR_15 = FUNC_0(VAR_13, VAR_8);
 const u32 VAR_16 = FUNC_0(VAR_13, VAR_7);
 u8 VAR_17 = VAR_3 * !!VAR_11->func->kind;
 u8 VAR_18 = VAR_6;
 int VAR_19, VAR_20, VAR_21;


 VAR_19 = FUNC_1(VAR_11, VAR_18, VAR_16 << VAR_10);

 VAR_18 |= VAR_1;
 VAR_18 |= VAR_2;
 VAR_20 = FUNC_1(VAR_11, VAR_18, VAR_14 << VAR_10);
 VAR_21 = FUNC_1(VAR_11, VAR_18, VAR_15 << VAR_10);





 FUNC_3(VAR_11, VAR_21, VAR_17);
 FUNC_3(VAR_11, VAR_20, VAR_17);
 FUNC_3(VAR_11, VAR_19, VAR_17);





 FUNC_2(VAR_11);




 if (VAR_12->bar) {

  VAR_17 |= VAR_4;
  if (!VAR_12->bar->iomap_uncached) {
   FUNC_3(VAR_11, VAR_20, VAR_17);
   FUNC_3(VAR_11, VAR_19, VAR_17);
  }


  VAR_17 |= VAR_0;
  VAR_17 |= VAR_5;
  FUNC_3(VAR_11, VAR_20, VAR_17);
  FUNC_3(VAR_11, VAR_19, VAR_17);
 }
}
