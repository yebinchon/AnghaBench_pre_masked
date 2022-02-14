
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nvkm_vmm_page {scalar_t__ shift; struct nvkm_vmm_desc* desc; } ;
struct nvkm_vmm_func {struct nvkm_vmm_page* page; } ;
struct nvkm_vmm_desc {int bits; int size; int align; } ;
struct nvkm_vmm {char const* name; scalar_t__ start; unsigned long long limit; int list; void* root; void* free; TYPE_2__* pd; int join; int mutex; int kref; int debug; struct nvkm_mmu* mmu; struct nvkm_vmm_func const* func; } ;
struct nvkm_vma {int head; } ;
struct TYPE_3__ {int debug; } ;
struct nvkm_mmu {TYPE_1__ subdev; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_4__ {int* refs; int * pt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*,struct lock_class_key*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct nvkm_mmu*,scalar_t__ const,int ,int) ;
 struct nvkm_vma* FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (struct nvkm_vmm*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct nvkm_vmm*,struct nvkm_vma*) ;
 TYPE_2__* FUNC_10 (struct nvkm_vmm_desc const*,int,int *) ;

int
FUNC_11(const struct nvkm_vmm_func *VAR_4, struct nvkm_mmu *VAR_5,
       u32 VAR_6, bool VAR_7, u64 VAR_8, u64 VAR_9,
       struct lock_class_key *VAR_10, const char *VAR_11,
       struct nvkm_vmm *VAR_12)
{
 static struct lock_class_key VAR_13;
 const struct nvkm_vmm_page *VAR_14 = VAR_4->page;
 const struct nvkm_vmm_desc *VAR_15;
 struct nvkm_vma *VAR_16;
 int VAR_17, VAR_18 = 0, VAR_19;

 VAR_12->func = VAR_4;
 VAR_12->mmu = VAR_5;
 VAR_12->name = VAR_11;
 VAR_12->debug = VAR_5->subdev.debug;
 FUNC_3(&VAR_12->kref);

 FUNC_2(&VAR_12->mutex, "&vmm->mutex", VAR_10 ? VAR_10 : &VAR_13);




 while (VAR_14[1].shift)
  VAR_14++;





 for (VAR_17 = 0, VAR_15 = VAR_14->desc; VAR_15->bits; VAR_15++, VAR_17++)
  VAR_18 += VAR_15->bits;
 VAR_18 += VAR_14->shift;
 VAR_15--;

 if (FUNC_1(VAR_17 > VAR_2))
  return -VAR_0;


 VAR_12->pd = FUNC_10(VAR_15, 0, ((void*)0));
 if (!VAR_12->pd)
  return -VAR_1;
 VAR_12->pd->refs[0] = 1;
 FUNC_0(&VAR_12->join);




 if (VAR_15->size) {
  const u32 VAR_20 = VAR_6 + VAR_15->size * (1 << VAR_15->bits);
  VAR_12->pd->pt[0] = FUNC_6(VAR_5, VAR_20, VAR_15->align, 1);
  if (!VAR_12->pd->pt[0])
   return -VAR_1;
 }


 FUNC_0(&VAR_12->list);
 VAR_12->free = VAR_3;
 VAR_12->root = VAR_3;

 if (VAR_7) {




  VAR_12->start = 0;
  VAR_12->limit = 1ULL << VAR_18;
  if (VAR_8 + VAR_9 < VAR_8 || VAR_8 + VAR_9 > VAR_12->limit)
   return -VAR_0;


  if (VAR_8 && (VAR_19 = FUNC_8(VAR_12, 0, VAR_8)))
   return VAR_19;


  if (VAR_9) {
   if (!(VAR_16 = FUNC_7(VAR_8, VAR_9)))
    return -VAR_1;
   FUNC_9(VAR_12, VAR_16);
   FUNC_5(&VAR_16->head, &VAR_12->list);
  }


  VAR_8 = VAR_8 + VAR_9;
  VAR_9 = VAR_12->limit - VAR_8;
  if (VAR_9 && (VAR_19 = FUNC_8(VAR_12, VAR_8, VAR_9)))
   return VAR_19;
 } else {



  VAR_12->start = VAR_8;
  VAR_12->limit = VAR_9 ? (VAR_8 + VAR_9) : (1ULL << VAR_18);
  if (VAR_12->start > VAR_12->limit || VAR_12->limit > (1ULL << VAR_18))
   return -VAR_0;

  if (!(VAR_16 = FUNC_7(VAR_12->start, VAR_12->limit - VAR_12->start)))
   return -VAR_1;

  FUNC_9(VAR_12, VAR_16);
  FUNC_4(&VAR_16->head, &VAR_12->list);
 }

 return 0;
}
