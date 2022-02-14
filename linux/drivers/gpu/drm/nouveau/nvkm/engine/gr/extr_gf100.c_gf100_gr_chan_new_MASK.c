
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_fifo_chan {int vmm; } ;
struct nvkm_device {int dummy; } ;
struct gf100_vmm_map_v0 {int priv; } ;
struct gf100_gr_mmio {int size; int align; int priv; int addr; int data; size_t buffer; int shift; } ;
struct gf100_gr_data {int size; int align; int priv; int addr; int data; size_t buffer; int shift; } ;
struct gf100_gr_chan {int mmio; int mmio_nr; TYPE_4__* data; int vmm; TYPE_5__* mmio_vma; struct nvkm_object object; struct gf100_gr* gr; } ;
struct TYPE_7__ {struct nvkm_device* device; } ;
struct TYPE_8__ {TYPE_1__ subdev; } ;
struct TYPE_9__ {TYPE_2__ engine; } ;
struct gf100_gr {struct gf100_gr_mmio* mmio_list; struct gf100_gr_mmio* mmio_data; TYPE_3__ base; } ;
typedef int args ;
struct TYPE_11__ {int addr; } ;
struct TYPE_10__ {TYPE_5__* vma; int mem; } ;


 int FUNC_0 (struct gf100_gr_mmio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gf100_gr* FUNC_1 (struct nvkm_gr*) ;
 int VAR_3 ;
 struct gf100_gr_chan* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,TYPE_5__*,struct gf100_vmm_map_v0*,int) ;
 int FUNC_6 (struct nvkm_device*,int ,int,int,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int FUNC_9 (int ,int,int,TYPE_5__**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int) ;

__attribute__((used)) static int
FUNC_12(struct nvkm_gr *VAR_4, struct nvkm_fifo_chan *VAR_5,
    const struct nvkm_oclass *VAR_6,
    struct nvkm_object **VAR_7)
{
 struct gf100_gr *VAR_8 = FUNC_1(VAR_4);
 struct gf100_gr_data *VAR_9 = VAR_8->mmio_data;
 struct gf100_gr_mmio *VAR_10 = VAR_8->mmio_list;
 struct gf100_gr_chan *VAR_11;
 struct gf100_vmm_map_v0 VAR_12 = { .priv = 1 };
 struct nvkm_device *VAR_13 = VAR_8->base.engine.subdev.device;
 int VAR_14, VAR_15;

 if (!(VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1)))
  return -VAR_0;
 FUNC_8(&VAR_3, VAR_6, &VAR_11->object);
 VAR_11->gr = VAR_8;
 VAR_11->vmm = FUNC_10(VAR_5->vmm);
 *VAR_7 = &VAR_11->object;





 VAR_14 = FUNC_6(VAR_13, VAR_2, 0x1000, 0x100,
         0, &VAR_11->mmio);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_9(VAR_5->vmm, 12, 0x1000, &VAR_11->mmio_vma);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_11->mmio, 0, VAR_5->vmm,
         VAR_11->mmio_vma, &VAR_12, sizeof(VAR_12));
 if (VAR_14)
  return VAR_14;


 for (VAR_15 = 0; VAR_9->size && VAR_15 < FUNC_0(VAR_8->mmio_data); VAR_15++) {
  VAR_14 = FUNC_6(VAR_13, VAR_2,
          VAR_9->size, VAR_9->align, 0,
          &VAR_11->data[VAR_15].mem);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_9(VAR_5->vmm, 12,
       FUNC_7(VAR_11->data[VAR_15].mem),
       &VAR_11->data[VAR_15].vma);
  if (VAR_14)
   return VAR_14;

  VAR_12.priv = VAR_9->priv;

  VAR_14 = FUNC_5(VAR_11->data[VAR_15].mem, 0, VAR_11->vmm,
          VAR_11->data[VAR_15].vma, &VAR_12, sizeof(VAR_12));
  if (VAR_14)
   return VAR_14;

  VAR_9++;
 }


 FUNC_4(VAR_11->mmio);
 for (VAR_15 = 0; VAR_10->addr && VAR_15 < FUNC_0(VAR_8->mmio_list); VAR_15++) {
  u32 VAR_16 = VAR_10->addr;
  u32 VAR_17 = VAR_10->data;

  if (VAR_10->buffer >= 0) {
   u64 VAR_18 = VAR_11->data[VAR_10->buffer].vma->addr;
   VAR_17 |= VAR_18 >> VAR_10->shift;
  }

  FUNC_11(VAR_11->mmio, VAR_11->mmio_nr++ * 4, VAR_16);
  FUNC_11(VAR_11->mmio, VAR_11->mmio_nr++ * 4, VAR_17);
  VAR_10++;
 }
 FUNC_3(VAR_11->mmio);
 return 0;
}
