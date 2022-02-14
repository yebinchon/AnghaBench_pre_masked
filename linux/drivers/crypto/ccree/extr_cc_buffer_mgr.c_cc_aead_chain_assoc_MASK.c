
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_drvdata {int dummy; } ;
struct buffer_array {int dummy; } ;
struct aead_request {int src; } ;
struct TYPE_2__ {int nents; scalar_t__ mlli_nents; } ;
struct aead_req_ctx {unsigned int assoclen; scalar_t__ assoc_buff_type; scalar_t__ ccm_hdr_size; TYPE_1__ assoc; scalar_t__ is_gcm4543; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct device*,struct buffer_array*,int,int ,unsigned int,int ,int,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct device*,char*,int ,int) ;
 int FUNC_6 (struct device*,char*,int,int) ;
 struct device* FUNC_7 (struct cc_drvdata*) ;
 int FUNC_8 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct cc_drvdata *VAR_7,
          struct aead_request *VAR_8,
          struct buffer_array *VAR_9,
          bool VAR_10, bool VAR_11)
{
 struct aead_req_ctx *VAR_12 = FUNC_0(VAR_8);
 int VAR_13 = 0;
 int VAR_14 = 0;
 struct crypto_aead *VAR_15 = FUNC_4(VAR_8);
 unsigned int VAR_16 = VAR_12->assoclen;
 struct device *VAR_17 = FUNC_7(VAR_7);

 if (VAR_12->is_gcm4543)
  VAR_16 += FUNC_3(VAR_15);

 if (!VAR_9) {
  VAR_13 = -VAR_3;
  goto chain_assoc_exit;
 }

 if (VAR_12->assoclen == 0) {
  VAR_12->assoc_buff_type = VAR_2;
  VAR_12->assoc.nents = 0;
  VAR_12->assoc.mlli_nents = 0;
  FUNC_5(VAR_17, "Chain assoc of length 0: buff_type=%s nents=%u\n",
   FUNC_2(VAR_12->assoc_buff_type),
   VAR_12->assoc.nents);
  goto chain_assoc_exit;
 }

 VAR_14 = FUNC_8(VAR_8->src, VAR_16);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_14 > VAR_5) {
  FUNC_6(VAR_17, "Too many fragments. current %d max %d\n",
   VAR_14, VAR_5);
  return -VAR_4;
 }
 VAR_12->assoc.nents = VAR_14;




 if (VAR_12->ccm_hdr_size != VAR_6) {
  if ((VAR_14 + 1) > VAR_5) {
   FUNC_6(VAR_17, "CCM case.Too many fragments. Current %d max %d\n",
    (VAR_12->assoc.nents + 1),
    VAR_5);
   VAR_13 = -VAR_4;
   goto chain_assoc_exit;
  }
 }

 if (VAR_14 == 1 && VAR_12->ccm_hdr_size == VAR_6)
  VAR_12->assoc_buff_type = VAR_0;
 else
  VAR_12->assoc_buff_type = VAR_1;

 if (VAR_11 || VAR_12->assoc_buff_type == VAR_1) {
  FUNC_5(VAR_17, "Chain assoc: buff_type=%s nents=%u\n",
   FUNC_2(VAR_12->assoc_buff_type),
   VAR_12->assoc.nents);
  FUNC_1(VAR_17, VAR_9, VAR_12->assoc.nents, VAR_8->src,
    VAR_12->assoclen, 0, VAR_10,
    &VAR_12->assoc.mlli_nents);
  VAR_12->assoc_buff_type = VAR_1;
 }

chain_assoc_exit:
 return VAR_13;
}
