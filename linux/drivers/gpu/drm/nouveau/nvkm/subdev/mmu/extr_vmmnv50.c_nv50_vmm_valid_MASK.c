
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_page {int shift; int type; } ;
struct nvkm_vmm_map {int type; int ctag; int next; int offset; TYPE_7__* tags; TYPE_4__* mem; struct nvkm_memory* memory; struct nvkm_vmm_page* page; } ;
struct nvkm_vmm {TYPE_6__* mmu; } ;
struct nvkm_ram {int stolen; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_device {TYPE_2__* fb; } ;
struct nv50_vmm_map_vn {int dummy; } ;
struct nv50_vmm_map_v0 {int kind; int comp; int priv; int ro; } ;
struct TYPE_14__ {TYPE_5__* mn; } ;
struct TYPE_8__ {struct nvkm_device* device; } ;
struct TYPE_13__ {TYPE_3__* func; TYPE_1__ subdev; } ;
struct TYPE_12__ {int offset; } ;
struct TYPE_11__ {int const type; } ;
struct TYPE_10__ {int* (* kind ) (TYPE_6__*,int*) ;} ;
struct TYPE_9__ {struct nvkm_ram* ram; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (struct nvkm_vmm*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,void**,int*,struct nv50_vmm_map_v0,int ,int ,int) ;
 int FUNC_4 (int,void**,int*,struct nv50_vmm_map_vn) ;
 int FUNC_5 (struct nvkm_memory*) ;
 int FUNC_6 (struct nvkm_memory*,struct nvkm_device*,int,int *,TYPE_7__**) ;
 int FUNC_7 (struct nvkm_memory*) ;
 int* FUNC_8 (TYPE_6__*,int*) ;

int
FUNC_9(struct nvkm_vmm *VAR_3, void *VAR_4, u32 VAR_5,
        struct nvkm_vmm_map *VAR_6)
{
 const struct nvkm_vmm_page *VAR_7 = VAR_6->page;
 union {
  struct nv50_vmm_map_vn vn;
  struct nv50_vmm_map_v0 v0;
 } *VAR_8 = VAR_4;
 struct nvkm_device *VAR_9 = VAR_3->mmu->subdev.device;
 struct nvkm_ram *VAR_10 = VAR_9->fb->ram;
 struct nvkm_memory *VAR_11 = VAR_6->memory;
 u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18 = -VAR_1;
 const u8 *VAR_19;

 VAR_6->type = VAR_6->ctag = 0;
 VAR_6->next = 1 << VAR_7->shift;

 if (!(VAR_18 = FUNC_3(VAR_18, &VAR_4, &VAR_5, VAR_8->v0, 0, 0, 0))) {
  VAR_16 = !!VAR_8->v0.ro;
  VAR_15 = !!VAR_8->v0.priv;
  VAR_13 = VAR_8->v0.kind & 0x7f;
  VAR_14 = VAR_8->v0.comp & 0x03;
 } else
 if (!(VAR_18 = FUNC_4(VAR_18, &VAR_4, &VAR_5, VAR_8->vn))) {
  VAR_16 = 0;
  VAR_15 = 0;
  VAR_13 = 0x00;
  VAR_14 = 0;
 } else {
  FUNC_1(VAR_3, "args");
  return VAR_18;
 }

 switch (FUNC_7(VAR_11)) {
 case 128:
  if (VAR_10->stolen) {
   VAR_6->type |= VAR_10->stolen;
   VAR_12 = 3;
  } else {
   VAR_12 = 0;
  }
  break;
 case 130:
  VAR_12 = 2;
  break;
 case 129:
  VAR_12 = 3;
  break;
 default:
  FUNC_2(1);
  return -VAR_0;
 }

 VAR_19 = VAR_3->mmu->func->kind(VAR_3->mmu, &VAR_17);
 if (VAR_13 >= VAR_17 || VAR_19[VAR_13] == 0x7f) {
  FUNC_1(VAR_3, "kind %02x", VAR_13);
  return -VAR_0;
 }

 if (VAR_6->mem && VAR_6->mem->type != VAR_19[VAR_13]) {
  FUNC_1(VAR_3, "kind %02x bankswz: %d %d", VAR_13,
     VAR_19[VAR_13], VAR_6->mem->type);
  return -VAR_0;
 }

 if (VAR_14) {
  u32 VAR_20 = (FUNC_5(VAR_11) >> 16) * VAR_14;
  if (VAR_12 != 0 || !(VAR_7->type & VAR_2)) {
   FUNC_1(VAR_3, "comp %d %02x", VAR_12, VAR_7->type);
   return -VAR_0;
  }

  VAR_18 = FUNC_6(VAR_11, VAR_9, VAR_20, ((void*)0),
        &VAR_6->tags);
  if (VAR_18) {
   FUNC_1(VAR_3, "comp %d", VAR_18);
   return VAR_18;
  }

  if (VAR_6->tags->mn) {
   u32 VAR_21 = VAR_6->tags->mn->offset + (VAR_6->offset >> 16);
   VAR_6->ctag |= (u64)VAR_14 << 49;
   VAR_6->type |= (u64)VAR_14 << 47;
   VAR_6->type |= (u64)VAR_21 << 49;
   VAR_6->next |= VAR_6->ctag;
  }
 }

 VAR_6->type |= FUNC_0(0);
 VAR_6->type |= (u64)VAR_16 << 3;
 VAR_6->type |= (u64)VAR_12 << 4;
 VAR_6->type |= (u64)VAR_15 << 6;
 VAR_6->type |= (u64)VAR_13 << 40;
 return 0;
}
