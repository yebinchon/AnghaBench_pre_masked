
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_2__* device; } ;
struct TYPE_7__ {int type; int offset; int length; } ;
struct TYPE_8__ {int * ptrs; } ;
struct gk20a_instobj {TYPE_3__* mn; int vaddr; TYPE_4__ memory; } ;
struct gk20a_instobj_dma {int handle; TYPE_3__ r; struct gk20a_instobj base; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct gk20a_instmem {int attrs; TYPE_1__ base; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,int*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct gk20a_instobj_dma* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvkm_subdev*,char*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (struct nvkm_subdev*,char*,int*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct gk20a_instmem *VAR_5, u32 VAR_6, u32 VAR_7,
         struct gk20a_instobj **VAR_8)
{
 struct gk20a_instobj_dma *VAR_9;
 struct nvkm_subdev *VAR_10 = &VAR_5->base.subdev;
 struct device *VAR_11 = VAR_10->device->dev;

 if (!(VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 *VAR_8 = &VAR_9->base;

 FUNC_3(&VAR_3, &VAR_9->base.memory);
 VAR_9->base.memory.ptrs = &VAR_4;

 VAR_9->base.vaddr = FUNC_0(VAR_11, VAR_6 << VAR_2,
        &VAR_9->handle, VAR_1,
        VAR_5->attrs);
 if (!VAR_9->base.vaddr) {
  FUNC_2(VAR_10, "cannot allocate DMA memory\n");
  return -VAR_0;
 }


 if (FUNC_5(VAR_9->handle & (VAR_7 - 1)))
  FUNC_4(VAR_10,
     "memory not aligned as requested: %pad (0x%x)\n",
     &VAR_9->handle, VAR_7);


 VAR_9->r.type = 12;
 VAR_9->r.offset = VAR_9->handle >> 12;
 VAR_9->r.length = (VAR_6 << VAR_2) >> 12;

 VAR_9->base.mn = &VAR_9->r;
 return 0;
}
