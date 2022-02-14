
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {scalar_t__ length; } ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_drvdata {int dummy; } ;
struct buffer_array {int dummy; } ;
struct aead_request {unsigned int cryptlen; struct scatterlist* dst; struct scatterlist* src; } ;
struct TYPE_6__ {scalar_t__ nents; } ;
struct TYPE_5__ {scalar_t__ nents; } ;
struct TYPE_4__ {int op_type; } ;
struct aead_req_ctx {unsigned int req_authsize; unsigned int assoclen; int is_gcm4543; int data_buff_type; scalar_t__ dst_offset; TYPE_3__ dst; struct scatterlist* dst_sgl; scalar_t__ src_offset; TYPE_2__ src; struct scatterlist* src_sgl; TYPE_1__ gen_ctx; } ;
typedef enum drv_crypto_direction { ____Placeholder_drv_crypto_direction } drv_crypto_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 scalar_t__ FUNC_1 (struct device*,struct scatterlist*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct device*,struct scatterlist*,unsigned int,int ,scalar_t__*,scalar_t__,unsigned int*,scalar_t__*) ;
 int FUNC_3 (struct aead_request*,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct cc_drvdata*,struct aead_request*,struct buffer_array*,unsigned int*,unsigned int*,int) ;
 scalar_t__ FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 int FUNC_7 (struct device*,char*,scalar_t__,scalar_t__) ;
 struct device* FUNC_8 (struct cc_drvdata*) ;
 struct scatterlist* FUNC_9 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_10(struct cc_drvdata *VAR_7,
         struct aead_request *VAR_8,
         struct buffer_array *VAR_9,
         bool VAR_10, bool VAR_11)
{
 struct aead_req_ctx *VAR_12 = FUNC_0(VAR_8);
 struct device *VAR_13 = FUNC_8(VAR_7);
 enum drv_crypto_direction VAR_14 = VAR_12->gen_ctx.op_type;
 unsigned int VAR_15 = VAR_12->req_authsize;
 unsigned int VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0;
 u32 VAR_19 = 0, VAR_20 = 0;
 u32 VAR_21 = 0;

 unsigned int VAR_22 = VAR_12->assoclen + VAR_8->cryptlen;
 struct crypto_aead *VAR_23 = FUNC_6(VAR_8);
 u32 VAR_24 = 0;
 bool VAR_25 = VAR_12->is_gcm4543;
 u32 VAR_26 = VAR_12->assoclen;
 struct scatterlist *VAR_27;

 if (VAR_25)
  VAR_26 += FUNC_5(VAR_23);

 VAR_21 = VAR_26;

 if (!VAR_9)
  return -VAR_4;

 VAR_12->src_sgl = VAR_8->src;
 VAR_12->dst_sgl = VAR_8->dst;

 if (VAR_25)
  VAR_22 += FUNC_5(VAR_23);

 VAR_22 += (VAR_14 == VAR_3) ?
   VAR_15 : 0;
 VAR_19 = FUNC_1(VAR_13, VAR_8->src, VAR_22,
         &VAR_16);
 VAR_24 = VAR_12->src_sgl->length;

 while (VAR_24 <= VAR_26) {
  VAR_19--;
  VAR_21 -= VAR_12->src_sgl->length;
  VAR_27 = FUNC_9(VAR_12->src_sgl);
  if (!VAR_27)
   break;
  VAR_12->src_sgl = VAR_27;
  VAR_24 += VAR_12->src_sgl->length;
 }
 if (VAR_19 > VAR_6) {
  FUNC_7(VAR_13, "Too many fragments. current %d max %d\n",
   VAR_19, VAR_6);
  return -VAR_5;
 }

 VAR_12->src.nents = VAR_19;

 VAR_12->src_offset = VAR_21;

 if (VAR_8->src != VAR_8->dst) {
  VAR_22 = VAR_12->assoclen + VAR_8->cryptlen;
  VAR_22 += (VAR_14 == VAR_3) ?
    VAR_15 : 0;
  if (VAR_25)
   VAR_22 += FUNC_5(VAR_23);

  VAR_18 = FUNC_2(VAR_13, VAR_8->dst, VAR_22, VAR_2,
          &VAR_12->dst.nents,
          VAR_6, &VAR_17,
          &VAR_20);
  if (VAR_18)
   goto chain_data_exit;
 }

 VAR_20 = FUNC_1(VAR_13, VAR_8->dst, VAR_22,
         &VAR_17);
 VAR_24 = VAR_12->dst_sgl->length;
 VAR_21 = VAR_26;


 while (VAR_24 <= VAR_26) {
  VAR_20--;
  VAR_21 -= VAR_12->dst_sgl->length;
  VAR_27 = FUNC_9(VAR_12->dst_sgl);
  if (!VAR_27)
   break;
  VAR_12->dst_sgl = VAR_27;
  VAR_24 += VAR_12->dst_sgl->length;
 }
 if (VAR_20 > VAR_6) {
  FUNC_7(VAR_13, "Too many fragments. current %d max %d\n",
   VAR_20, VAR_6);
  return -VAR_5;
 }
 VAR_12->dst.nents = VAR_20;
 VAR_12->dst_offset = VAR_21;
 if (VAR_19 > 1 ||
     VAR_20 > 1 ||
     VAR_11) {
  VAR_12->data_buff_type = VAR_1;
  FUNC_4(VAR_7, VAR_8, VAR_9,
       &VAR_16, &VAR_17,
       VAR_10);
 } else {
  VAR_12->data_buff_type = VAR_0;
  FUNC_3(VAR_8, &VAR_16,
       &VAR_17);
 }

chain_data_exit:
 return VAR_18;
}
