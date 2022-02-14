
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etnaviv_iommu_context {int cmdbuf_mapping; TYPE_1__* global; int flush_seq; } ;
struct etnaviv_cmdbuf {int user_size; int size; unsigned int vaddr; } ;
struct etnaviv_gpu {int exec_state; unsigned int flush_seq; scalar_t__ sec_mode; struct etnaviv_iommu_context* mmu_context; int lock; struct etnaviv_cmdbuf buffer; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 int FUNC_0 (struct etnaviv_cmdbuf*,int,int) ;
 int FUNC_1 (struct etnaviv_cmdbuf*,int ,int) ;
 int FUNC_2 (struct etnaviv_cmdbuf*,int ,int ) ;
 int FUNC_3 (struct etnaviv_cmdbuf*,int ,int ) ;
 int FUNC_4 (struct etnaviv_cmdbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (unsigned short) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_8 (int) ;
 int VAR_28 ;
 int FUNC_9 (struct etnaviv_gpu*,struct etnaviv_cmdbuf*,int ,int) ;
 int FUNC_10 (struct etnaviv_cmdbuf*,unsigned int,int,int) ;
 int FUNC_11 (struct etnaviv_gpu*,struct etnaviv_cmdbuf*,int) ;
 int FUNC_12 (struct etnaviv_gpu*,struct etnaviv_cmdbuf*,int) ;
 int FUNC_13 (struct etnaviv_cmdbuf*,int *) ;
 int FUNC_14 (struct etnaviv_iommu_context*) ;
 int FUNC_15 (struct etnaviv_iommu_context*) ;
 int FUNC_16 (struct etnaviv_iommu_context*) ;
 unsigned short FUNC_17 (struct etnaviv_iommu_context*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,unsigned int,...) ;
 int FUNC_20 (int ,char*,int ,int,int,unsigned int,int,int ) ;

void FUNC_21(struct etnaviv_gpu *VAR_29, u32 VAR_30,
 struct etnaviv_iommu_context *VAR_31, unsigned int VAR_32,
 struct etnaviv_cmdbuf *VAR_33)
{
 struct etnaviv_cmdbuf *VAR_34 = &VAR_29->buffer;
 unsigned int VAR_35 = VAR_34->user_size - 16;
 u32 VAR_36, VAR_37;
 u32 VAR_38, VAR_39;
 bool VAR_40 = VAR_29->exec_state != VAR_30;
 bool VAR_41 = VAR_29->mmu_context != VAR_31;
 unsigned int VAR_42 = FUNC_5(VAR_29->mmu_context->flush_seq);
 bool VAR_43 = VAR_41 || VAR_29->flush_seq != VAR_42;

 FUNC_18(&VAR_29->lock);

 if (VAR_28 & VAR_0)
  FUNC_9(VAR_29, VAR_34, 0, 0x50);

 VAR_38 = FUNC_13(VAR_33,
         &VAR_29->mmu_context->cmdbuf_mapping);
 VAR_39 = VAR_33->size / 8;






 if (VAR_43 || VAR_40) {
  u32 VAR_44, VAR_45;


  VAR_45 = 1;


  if (VAR_43) {
   if (VAR_29->mmu_context->global->version == VAR_2)
    VAR_45 += 1;
   else
    VAR_45 += 3;
  }


  if (VAR_40)
   VAR_45 += 4;


  if (VAR_41 && VAR_29->sec_mode == VAR_4)
   VAR_45 += 1;

  VAR_44 = FUNC_11(VAR_29, VAR_34, VAR_45);






  if (VAR_41) {
   struct etnaviv_iommu_context *VAR_46 = VAR_29->mmu_context;

   FUNC_14(VAR_31);
   VAR_29->mmu_context = VAR_31;
   FUNC_15(VAR_46);
  }

  if (VAR_43) {

   if (VAR_29->mmu_context->global->version == VAR_2) {
    FUNC_1(VAR_34, VAR_15,
            VAR_16 |
            VAR_18 |
            VAR_19 |
            VAR_17 |
            VAR_20);
   } else {
    u32 VAR_47 = VAR_23 |
         VAR_22;

    if (VAR_41 &&
        VAR_29->sec_mode == VAR_4) {
     unsigned short VAR_48 =
      FUNC_17(VAR_29->mmu_context);
     FUNC_1(VAR_34,
      VAR_24,
      FUNC_7(VAR_48));
    }

    if (VAR_29->sec_mode == VAR_5)
     VAR_47 |= FUNC_16(VAR_29->mmu_context);

    FUNC_1(VAR_34, VAR_21,
            VAR_47);
    FUNC_2(VAR_34, VAR_7,
     VAR_8);
    FUNC_3(VAR_34, VAR_7,
     VAR_8);
   }

   VAR_29->flush_seq = VAR_42;
  }

  if (VAR_40) {
   FUNC_12(VAR_29, VAR_34, VAR_30);
   VAR_29->exec_state = VAR_30;
  }


  VAR_38 = FUNC_13(VAR_33,
     &VAR_29->mmu_context->cmdbuf_mapping);
  FUNC_0(VAR_34, VAR_39, VAR_38);


  VAR_38 = VAR_44;
  VAR_39 = VAR_45;
 }







 VAR_37 = 7;
 VAR_36 = FUNC_11(VAR_29, VAR_34, VAR_37);
 FUNC_0(VAR_33, VAR_37, VAR_36);





 if (VAR_29->exec_state == VAR_3) {
  FUNC_1(VAR_34, VAR_11,
           VAR_14);
 } else {
  FUNC_1(VAR_34, VAR_11,
           VAR_13 |
           VAR_12);
  FUNC_1(VAR_34, VAR_25,
           VAR_26);
 }
 FUNC_2(VAR_34, VAR_7, VAR_8);
 FUNC_3(VAR_34, VAR_7, VAR_8);
 FUNC_1(VAR_34, VAR_9, FUNC_6(VAR_32) |
         VAR_10);
 FUNC_4(VAR_34);
 FUNC_0(VAR_34, 2,
   FUNC_13(VAR_34, &VAR_29->mmu_context->cmdbuf_mapping)
   + VAR_34->user_size - 4);

 if (VAR_28 & VAR_0)
  FUNC_19("stream link to 0x%08x @ 0x%08x %p\n",
   VAR_36,
   FUNC_13(VAR_33, &VAR_29->mmu_context->cmdbuf_mapping),
   VAR_33->vaddr);

 if (VAR_28 & VAR_0) {
  FUNC_20(VAR_6, "cmd ", VAR_1, 16, 4,
          VAR_33->vaddr, VAR_33->size, 0);

  FUNC_19("link op: %p\n", VAR_34->vaddr + VAR_35);
  FUNC_19("addr: 0x%08x\n", VAR_38);
  FUNC_19("back: 0x%08x\n", VAR_36);
  FUNC_19("event: %d\n", VAR_32);
 }





 FUNC_10(VAR_34, VAR_35,
        VAR_27 |
        FUNC_8(VAR_39),
        VAR_38);

 if (VAR_28 & VAR_0)
  FUNC_9(VAR_29, VAR_34, 0, 0x50);
}
