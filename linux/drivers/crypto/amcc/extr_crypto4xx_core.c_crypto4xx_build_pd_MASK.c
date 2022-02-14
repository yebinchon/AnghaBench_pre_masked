
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct scatterlist {unsigned int const length; int offset; } ;
struct pd_uinfo {int num_gd; int num_sd; int sr_pa; int first_gd; int first_sd; int state; struct dynamic_sa_ctl* sa_va; TYPE_1__* sr_va; struct crypto_async_request* async_req; struct scatterlist* dest_va; } ;
struct TYPE_14__ {int gather; int scatter; } ;
struct TYPE_15__ {TYPE_3__ bf; } ;
struct TYPE_19__ {scalar_t__ crypto_mode9_8; unsigned int hash_crypto_offset; } ;
struct TYPE_20__ {TYPE_8__ bf; } ;
struct dynamic_sa_ctl {TYPE_4__ sa_command_0; TYPE_9__ sa_command_1; } ;
struct crypto_async_request {int flags; int tfm; } ;
struct crypto4xx_device {int pdr_head; int pdr_tail; int gdr_head; int sdr_head; scalar_t__ ce_base; TYPE_10__* core_dev; struct pd_uinfo* pdr_uinfo; struct ce_pd* pdr; } ;
struct crypto4xx_ctx {struct crypto4xx_device* dev; } ;
struct TYPE_16__ {int rdy; scalar_t__ done; } ;
struct ce_sd {TYPE_5__ ctl; } ;
struct TYPE_18__ {int w; } ;
struct TYPE_17__ {int w; } ;
struct ce_pd {unsigned int sa_len; int src; int dest; TYPE_7__ pd_ctl_len; TYPE_6__ pd_ctl; } ;
struct TYPE_13__ {size_t len; int ready; scalar_t__ done; } ;
struct ce_gd {TYPE_2__ ctl_len; scalar_t__ ptr; } ;
typedef void* dma_addr_t ;
typedef struct dynamic_sa_ctl __le32 ;
struct TYPE_12__ {struct dynamic_sa_ctl* save_iv; } ;
struct TYPE_11__ {int device; int lock; } ;


 unsigned int const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int const VAR_17 ;
 struct ce_gd* FUNC_0 (struct crypto4xx_device*,void**,int) ;
 int FUNC_1 (struct crypto4xx_device*,int) ;
 int FUNC_2 (struct crypto4xx_device*,int) ;
 int FUNC_3 (struct crypto4xx_device*) ;
 struct ce_sd* FUNC_4 (struct crypto4xx_device*,void**,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,size_t,int ) ;
 size_t FUNC_8 (struct dynamic_sa_ctl*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct dynamic_sa_ctl*,struct dynamic_sa_ctl const*,unsigned int const) ;
 size_t FUNC_12 (unsigned int const,unsigned int) ;
 struct scatterlist* FUNC_13 (struct scatterlist*,struct scatterlist*,unsigned int const) ;
 scalar_t__ FUNC_14 (struct scatterlist*) ;
 int FUNC_15 (struct scatterlist*,unsigned int const) ;
 struct scatterlist* FUNC_16 (struct scatterlist*) ;
 int FUNC_17 (struct scatterlist*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 () ;
 int FUNC_21 (int,scalar_t__) ;

int FUNC_22(struct crypto_async_request *VAR_18,
         struct crypto4xx_ctx *VAR_19,
         struct scatterlist *VAR_20,
         struct scatterlist *VAR_21,
         const unsigned int VAR_22,
         const __le32 *VAR_23, const u32 VAR_24,
         const struct dynamic_sa_ctl *VAR_25,
         const unsigned int VAR_26,
         const unsigned int VAR_27,
         struct scatterlist *VAR_28)
{
 struct crypto4xx_device *VAR_29 = VAR_19->dev;
 struct dynamic_sa_ctl *VAR_30;
 struct ce_gd *VAR_31;
 struct ce_pd *VAR_32;
 u32 VAR_33, VAR_34;
 u32 VAR_35 = 0xffffffff;
 u32 VAR_36 = 0xffffffff;
 u32 VAR_37;
 unsigned long VAR_38;
 struct pd_uinfo *VAR_39;
 unsigned int VAR_40 = VAR_22;
 size_t VAR_41;
 u32 VAR_42 = 0;
 int VAR_43;
 bool VAR_44, VAR_45;
 VAR_45 = (VAR_25->sa_command_1.bf.crypto_mode9_8 == VAR_4
  || VAR_25->sa_command_1.bf.crypto_mode9_8 == VAR_5)
  && (VAR_22 % VAR_0);


 VAR_43 = FUNC_15(VAR_20, VAR_27 + VAR_22);
 if (VAR_43 < 0) {
  FUNC_6(VAR_29->core_dev->device, "Invalid number of src SG.\n");
  return VAR_43;
 }
 if (VAR_43 == 1)
  VAR_43 = 0;
 VAR_33 = VAR_43;

 if (VAR_27) {
  VAR_40 += VAR_27;
  VAR_21 = FUNC_13(VAR_28, VAR_21, VAR_27);
 }


 if (FUNC_14(VAR_21) && VAR_45 == 0) {
  VAR_34 = 0;
 } else {
  if (VAR_22 > VAR_17) {
   VAR_34 = VAR_22 / VAR_17;
   if (VAR_22 % VAR_17)
    VAR_34++;
  } else {
   VAR_34 = 1;
  }
 }







 FUNC_18(&VAR_29->core_dev->lock, VAR_38);







 if (VAR_18->flags & VAR_6) {
  VAR_44 = ((VAR_29->pdr_head - VAR_29->pdr_tail) % VAR_16) >=
   ((VAR_16 * 13) / 16);
 } else {





  VAR_44 = ((VAR_29->pdr_head - VAR_29->pdr_tail) % VAR_16) >=
   ((VAR_16 * 15) / 16);

  if (VAR_44) {
   FUNC_19(&VAR_29->core_dev->lock, VAR_38);
   return -VAR_9;
  }
 }

 if (VAR_33) {
  VAR_35 = FUNC_1(VAR_29, VAR_33);
  if (VAR_35 == VAR_11) {
   FUNC_19(&VAR_29->core_dev->lock, VAR_38);
   return -VAR_8;
  }
 }
 if (VAR_34) {
  VAR_36 = FUNC_2(VAR_29, VAR_34);
  if (VAR_36 == VAR_11) {
   if (VAR_33)
    VAR_29->gdr_head = VAR_35;
   FUNC_19(&VAR_29->core_dev->lock, VAR_38);
   return -VAR_8;
  }
 }
 VAR_37 = FUNC_3(VAR_29);
 if (VAR_37 == VAR_11) {
  if (VAR_33)
   VAR_29->gdr_head = VAR_35;
  if (VAR_34)
   VAR_29->sdr_head = VAR_36;
  FUNC_19(&VAR_29->core_dev->lock, VAR_38);
  return -VAR_8;
 }
 FUNC_19(&VAR_29->core_dev->lock, VAR_38);

 VAR_32 = &VAR_29->pdr[VAR_37];
 VAR_32->sa_len = VAR_26;

 VAR_39 = &VAR_29->pdr_uinfo[VAR_37];
 VAR_39->num_gd = VAR_33;
 VAR_39->num_sd = VAR_34;
 VAR_39->dest_va = VAR_21;
 VAR_39->async_req = VAR_18;

 if (VAR_24)
  FUNC_11(VAR_39->sr_va->save_iv, VAR_23, VAR_24);

 VAR_30 = VAR_39->sa_va;
 FUNC_11(VAR_30, VAR_25, VAR_26 * 4);

 VAR_30->sa_command_1.bf.hash_crypto_offset = (VAR_27 >> 2);
 VAR_41 = FUNC_8(VAR_30);
 *(u32 *)((unsigned long)VAR_30 + VAR_41) = VAR_39->sr_pa;

 if (VAR_33) {
  dma_addr_t VAR_46;
  struct scatterlist *VAR_47;


  VAR_42 = VAR_35;
  VAR_39->first_gd = VAR_35;
  VAR_31 = FUNC_0(VAR_29, &VAR_46, VAR_42);
  VAR_32->src = VAR_46;

  VAR_30->sa_command_0.bf.gather = 1;


  VAR_47 = VAR_20;
  while (VAR_40) {
   size_t VAR_48;

   VAR_48 = FUNC_12(VAR_47->length, VAR_40);
   VAR_31->ptr = FUNC_7(VAR_29->core_dev->device,
    FUNC_17(VAR_47), VAR_47->offset, VAR_48, VAR_7);
   VAR_31->ctl_len.len = VAR_48;
   VAR_31->ctl_len.done = 0;
   VAR_31->ctl_len.ready = 1;
   if (VAR_48 >= VAR_40)
    break;

   VAR_40 -= VAR_47->length;
   VAR_42 = FUNC_9(VAR_42);
   VAR_31 = FUNC_0(VAR_29, &VAR_46, VAR_42);
   VAR_47 = FUNC_16(VAR_47);
  }
 } else {
  VAR_32->src = (u32)FUNC_7(VAR_29->core_dev->device, FUNC_17(VAR_20),
    VAR_20->offset, FUNC_12(VAR_40, VAR_20->length),
    VAR_7);



  VAR_30->sa_command_0.bf.gather = 0;



  VAR_39->first_gd = 0xffffffff;
 }
 if (!VAR_34) {




  VAR_39->first_sd = 0xffffffff;
  VAR_30->sa_command_0.bf.scatter = 0;
  VAR_32->dest = (u32)FUNC_7(VAR_29->core_dev->device,
          FUNC_17(VAR_21), VAR_21->offset,
          FUNC_12(VAR_22, VAR_21->length),
          VAR_7);
 } else {
  dma_addr_t VAR_49;
  struct ce_sd *VAR_50 = ((void*)0);

  u32 VAR_51 = VAR_36;
  VAR_40 = VAR_22;
  VAR_30->sa_command_0.bf.scatter = 1;
  VAR_39->first_sd = VAR_36;
  VAR_50 = FUNC_4(VAR_29, &VAR_49, VAR_51);
  VAR_32->dest = VAR_49;

  VAR_50->ctl.done = 0;
  VAR_50->ctl.rdy = 1;

  if (VAR_40 >= VAR_17)
   VAR_40 -= VAR_17;
  else
   VAR_40 = 0;
  while (VAR_40) {
   VAR_51 = FUNC_10(VAR_51);
   VAR_50 = FUNC_4(VAR_29, &VAR_49, VAR_51);

   VAR_50->ctl.done = 0;
   VAR_50->ctl.rdy = 1;
   if (VAR_40 >= VAR_17) {
    VAR_40 -= VAR_17;
   } else {




    VAR_40 = 0;
   }
  }
 }

 VAR_32->pd_ctl.w = VAR_13 |
  (((FUNC_5(VAR_18->tfm) == VAR_3) |
   (FUNC_5(VAR_18->tfm) == VAR_2)) ?
   VAR_12 : 0);
 VAR_32->pd_ctl_len.w = 0x00400000 | (VAR_27 + VAR_22);
 VAR_39->state = VAR_15 | (VAR_44 ? VAR_14 : 0);

 FUNC_20();

 FUNC_21(0, VAR_29->ce_base + VAR_1);
 FUNC_21(1, VAR_29->ce_base + VAR_1);
 return VAR_44 ? -VAR_9 : -VAR_10;
}
