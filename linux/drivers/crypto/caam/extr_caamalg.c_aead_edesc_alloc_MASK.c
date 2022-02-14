
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec4_sg_entry {int dummy; } ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct caam_ctx {unsigned int authsize; struct device* jrdev; } ;
struct TYPE_2__ {int flags; } ;
struct aead_request {int assoclen; int cryptlen; int dst; int src; TYPE_1__ base; } ;
struct aead_edesc {int src_nents; int dst_nents; int mapped_src_nents; int mapped_dst_nents; int sec4_sg_bytes; int sec4_sg_dma; void* sec4_sg; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct aead_edesc* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct device*,struct aead_edesc*,struct aead_request*) ;
 int FUNC_2 (struct device*,int ,int ,int,int,int ,int ,int ,int ) ;
 struct caam_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,int ,int,int ) ;
 int FUNC_7 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_8 (struct device*,int ) ;
 int FUNC_9 (struct device*,int ,int,int ) ;
 int FUNC_10 (struct aead_edesc*) ;
 struct aead_edesc* FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,void*,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static struct aead_edesc *FUNC_17(struct aead_request *VAR_8,
        int VAR_9, bool *VAR_10,
        bool VAR_11)
{
 struct crypto_aead *VAR_12 = FUNC_4(VAR_8);
 struct caam_ctx *VAR_13 = FUNC_3(VAR_12);
 struct device *VAR_14 = VAR_13->jrdev;
 gfp_t VAR_15 = (VAR_8->base.flags & VAR_0) ?
         VAR_7 : VAR_5;
 int VAR_16, VAR_17, VAR_18 = 0, VAR_19 = 0;
 int VAR_20, VAR_21 = 0;
 struct aead_edesc *VAR_22;
 int VAR_23, VAR_24, VAR_25;
 unsigned int VAR_26 = VAR_13->authsize;

 if (FUNC_16(VAR_8->dst != VAR_8->src)) {
  VAR_20 = VAR_8->assoclen + VAR_8->cryptlen;
  VAR_21 = VAR_20 + (VAR_11 ? VAR_26 : (-VAR_26));

  VAR_16 = FUNC_14(VAR_8->src, VAR_20);
  if (FUNC_16(VAR_16 < 0)) {
   FUNC_5(VAR_14, "Insufficient bytes (%d) in src S/G\n",
    VAR_20);
   return FUNC_0(VAR_16);
  }

  VAR_18 = FUNC_14(VAR_8->dst, VAR_21);
  if (FUNC_16(VAR_18 < 0)) {
   FUNC_5(VAR_14, "Insufficient bytes (%d) in dst S/G\n",
    VAR_21);
   return FUNC_0(VAR_18);
  }
 } else {
  VAR_20 = VAR_8->assoclen + VAR_8->cryptlen +
     (VAR_11 ? VAR_26 : 0);

  VAR_16 = FUNC_14(VAR_8->src, VAR_20);
  if (FUNC_16(VAR_16 < 0)) {
   FUNC_5(VAR_14, "Insufficient bytes (%d) in src S/G\n",
    VAR_20);
   return FUNC_0(VAR_16);
  }
 }

 if (FUNC_12(VAR_8->src == VAR_8->dst)) {
  VAR_17 = FUNC_6(VAR_14, VAR_8->src, VAR_16,
           VAR_1);
  if (FUNC_16(!VAR_17)) {
   FUNC_5(VAR_14, "unable to map source\n");
   return FUNC_0(-VAR_4);
  }
 } else {

  if (VAR_16) {
   VAR_17 = FUNC_6(VAR_14, VAR_8->src,
            VAR_16, VAR_3);
   if (FUNC_16(!VAR_17)) {
    FUNC_5(VAR_14, "unable to map source\n");
    return FUNC_0(-VAR_4);
   }
  } else {
   VAR_17 = 0;
  }


  if (VAR_18) {
   VAR_19 = FUNC_6(VAR_14, VAR_8->dst,
            VAR_18,
            VAR_2);
   if (FUNC_16(!VAR_19)) {
    FUNC_5(VAR_14, "unable to map destination\n");
    FUNC_9(VAR_14, VAR_8->src, VAR_16,
          VAR_3);
    return FUNC_0(-VAR_4);
   }
  } else {
   VAR_19 = 0;
  }
 }





 VAR_24 = VAR_17 > 1 ? VAR_17 : 0;
 if (VAR_19 > 1)
  VAR_24 += FUNC_13(VAR_19);
 else
  VAR_24 = FUNC_13(VAR_24);

 VAR_25 = VAR_24 * sizeof(struct sec4_sg_entry);


 VAR_22 = FUNC_11(sizeof(*VAR_22) + VAR_9 + VAR_25,
   VAR_6 | VAR_15);
 if (!VAR_22) {
  FUNC_2(VAR_14, VAR_8->src, VAR_8->dst, VAR_16, VAR_18, 0,
      0, 0, 0);
  return FUNC_0(-VAR_4);
 }

 VAR_22->src_nents = VAR_16;
 VAR_22->dst_nents = VAR_18;
 VAR_22->mapped_src_nents = VAR_17;
 VAR_22->mapped_dst_nents = VAR_19;
 VAR_22->sec4_sg = (void *)VAR_22 + sizeof(struct aead_edesc) +
    VAR_9;
 *VAR_10 = !(VAR_17 > 1);

 VAR_23 = 0;
 if (VAR_17 > 1) {
  FUNC_15(VAR_8->src, VAR_20,
       VAR_22->sec4_sg + VAR_23, 0);
  VAR_23 += VAR_17;
 }
 if (VAR_19 > 1) {
  FUNC_15(VAR_8->dst, VAR_21,
       VAR_22->sec4_sg + VAR_23, 0);
 }

 if (!VAR_25)
  return VAR_22;

 VAR_22->sec4_sg_dma = FUNC_7(VAR_14, VAR_22->sec4_sg,
         VAR_25, VAR_3);
 if (FUNC_8(VAR_14, VAR_22->sec4_sg_dma)) {
  FUNC_5(VAR_14, "unable to map S/G table\n");
  FUNC_1(VAR_14, VAR_22, VAR_8);
  FUNC_10(VAR_22);
  return FUNC_0(-VAR_4);
 }

 VAR_22->sec4_sg_bytes = VAR_25;

 return VAR_22;
}
