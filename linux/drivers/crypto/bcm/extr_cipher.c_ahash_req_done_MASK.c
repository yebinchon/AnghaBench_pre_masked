
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct spu_hw {scalar_t__ spu_type; } ;
struct TYPE_4__ {int digest; } ;
struct iproc_reqctx_s {scalar_t__ is_sw_hmac; TYPE_1__ msg_buf; struct iproc_ctx_s* ctx; struct crypto_async_request* parent; } ;
struct TYPE_5__ {size_t alg; scalar_t__ mode; } ;
struct iproc_ctx_s {TYPE_2__ auth; int digestsize; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {scalar_t__ result; } ;
struct TYPE_6__ {int * hash_cnt; int * op_counts; int * hmac_cnt; struct spu_hw spu; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct ahash_request* FUNC_1 (struct crypto_async_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct ahash_request*,struct iproc_ctx_s*) ;

__attribute__((used)) static int FUNC_6(struct iproc_reqctx_s *VAR_6)
{
 struct spu_hw *VAR_7 = &VAR_5.spu;
 struct crypto_async_request *VAR_8 = VAR_6->parent;
 struct ahash_request *VAR_9 = FUNC_1(VAR_8);
 struct iproc_ctx_s *VAR_10 = VAR_6->ctx;
 int VAR_11;

 FUNC_4(VAR_9->result, VAR_6->msg_buf.digest, VAR_10->digestsize);

 if (VAR_7->spu_type == VAR_4) {



  if (VAR_10->auth.alg == VAR_0) {
   FUNC_0((u32 *)VAR_9->result);
   FUNC_0(((u32 *)VAR_9->result) + 1);
   FUNC_0(((u32 *)VAR_9->result) + 2);
   FUNC_0(((u32 *)VAR_9->result) + 3);
   FUNC_0(((u32 *)VAR_9->result) + 4);
  }
 }

 FUNC_3("  digest ", VAR_9->result, VAR_10->digestsize);


 if (VAR_6->is_sw_hmac) {
  VAR_11 = FUNC_5(VAR_9, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
  FUNC_3("  hmac: ", VAR_9->result, VAR_10->digestsize);
 }

 if (VAR_6->is_sw_hmac || VAR_10->auth.mode == VAR_1) {
  FUNC_2(&VAR_5.op_counts[VAR_3]);
  FUNC_2(&VAR_5.hmac_cnt[VAR_10->auth.alg]);
 } else {
  FUNC_2(&VAR_5.op_counts[VAR_2]);
  FUNC_2(&VAR_5.hash_cnt[VAR_10->auth.alg]);
 }

 return 0;
}
