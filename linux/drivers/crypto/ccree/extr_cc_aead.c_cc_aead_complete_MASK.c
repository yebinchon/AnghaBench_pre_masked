
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {scalar_t__ authsize; int cipher_mode; } ;
struct aead_request {scalar_t__ cryptlen; int dst; int iv; } ;
struct TYPE_2__ {scalar_t__ op_type; } ;
struct aead_req_ctx {int dst_sgl; int mac_buf; scalar_t__ dst_offset; scalar_t__ is_icv_fragmented; int icv_virt_addr; TYPE_1__ gen_ctx; int backup_iv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aead_request*,int) ;
 struct aead_req_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct device*,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct device*,struct aead_request*) ;
 struct cc_aead_ctx* FUNC_4 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_5 (void*) ;
 int FUNC_6 (struct device*,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_4, void *VAR_5, int VAR_6)
{
 struct aead_request *VAR_7 = (struct aead_request *)VAR_5;
 struct aead_req_ctx *VAR_8 = FUNC_1(VAR_7);
 struct crypto_aead *VAR_9 = FUNC_5(VAR_5);
 struct cc_aead_ctx *VAR_10 = FUNC_4(VAR_9);


 if (VAR_6 == -VAR_3)
  goto done;

 FUNC_3(VAR_4, VAR_7);


 VAR_7->iv = VAR_8->backup_iv;

 if (VAR_6)
  goto done;

 if (VAR_8->gen_ctx.op_type == VAR_1) {
  if (FUNC_7(VAR_8->mac_buf, VAR_8->icv_virt_addr,
      VAR_10->authsize) != 0) {
   FUNC_6(VAR_4, "Payload authentication failure, (auth-size=%d, cipher=%d)\n",
    VAR_10->authsize, VAR_10->cipher_mode);



   FUNC_9(VAR_7->dst, FUNC_8(VAR_7->dst),
           VAR_7->cryptlen, 0);
   VAR_6 = -VAR_2;
  }

 } else if (VAR_8->is_icv_fragmented) {
  u32 VAR_11 = VAR_7->cryptlen + VAR_8->dst_offset;

  FUNC_2(VAR_4, VAR_8->mac_buf, VAR_8->dst_sgl,
       VAR_11, (VAR_11 + VAR_10->authsize),
       VAR_0);
 }
done:
 FUNC_0(VAR_7, VAR_6);
}
