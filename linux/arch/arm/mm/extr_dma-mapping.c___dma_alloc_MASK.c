
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef void page ;
struct device {int dummy; } ;
struct arm_dma_buffer {int list; void* virt; TYPE_1__* allocator; } ;
struct arm_dma_alloc_args {int gfp; void const* caller; int want_vaddr; int coherent_flag; int prot; int size; struct device* dev; } ;
typedef int pgprot_t ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_5__ {void* (* alloc ) (struct arm_dma_alloc_args*,void**) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,size_t,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct arm_dma_buffer*) ;
 struct arm_dma_buffer* FUNC_6 (int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct device*,int ) ;
 TYPE_1__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 void* FUNC_12 (struct arm_dma_alloc_args*,void**) ;

__attribute__((used)) static void *FUNC_13(struct device *VAR_15, size_t VAR_16, dma_addr_t *VAR_17,
    gfp_t VAR_18, pgprot_t VAR_19, bool VAR_20,
    unsigned long VAR_21, const void *VAR_22)
{
 u64 VAR_23 = FUNC_3(VAR_15);
 struct page *VAR_24 = ((void*)0);
 void *VAR_25;
 bool VAR_26, VAR_27;
 struct arm_dma_buffer *VAR_28;
 struct arm_dma_alloc_args VAR_29 = {
  .dev = VAR_15,
  .size = FUNC_0(VAR_16),
  .gfp = VAR_18,
  .prot = VAR_19,
  .caller = VAR_22,
  .want_vaddr = ((VAR_21 & VAR_1) == 0),
  .coherent_flag = VAR_20 ? VAR_0 : VAR_4,
 };
 if (!VAR_23)
  return ((void*)0);

 VAR_28 = FUNC_6(sizeof(*VAR_28),
        VAR_18 & ~(VAR_6 | VAR_7 | VAR_8));
 if (!VAR_28)
  return ((void*)0);

 if (VAR_23 < 0xffffffffULL)
  VAR_18 |= VAR_3;
 VAR_18 &= ~(VAR_5);
 VAR_29.gfp = VAR_18;

 *VAR_17 = VAR_2;
 VAR_26 = FUNC_4(VAR_18);
 VAR_27 = VAR_26 ? FUNC_1(VAR_15) : 0;

 if (VAR_27)
  VAR_28->allocator = &VAR_11;
 else if (VAR_20)
  VAR_28->allocator = &VAR_14;
 else if (VAR_26)
  VAR_28->allocator = &VAR_13;
 else
  VAR_28->allocator = &VAR_12;

 VAR_25 = VAR_28->allocator->alloc(&VAR_29, &VAR_24);

 if (VAR_24) {
  unsigned long VAR_30;

  *VAR_17 = FUNC_9(VAR_15, FUNC_8(VAR_24));
  VAR_28->virt = VAR_29.want_vaddr ? VAR_25 : VAR_24;

  FUNC_10(&VAR_10, VAR_30);
  FUNC_7(&VAR_28->list, &VAR_9);
  FUNC_11(&VAR_10, VAR_30);
 } else {
  FUNC_5(VAR_28);
 }

 return VAR_29.want_vaddr ? VAR_25 : VAR_24;
}
