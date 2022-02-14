
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int u64 ;
struct scatterlist {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_15__ {struct scatterlist* sgl; } ;
struct TYPE_14__ {int type; int src_len; unsigned int final; int msg_bits; scalar_t__ first; int opad_len; int * opad; struct scatterlist* src; int ctx_len; struct scatterlist* ctx; } ;
struct TYPE_13__ {TYPE_4__ sha; } ;
struct TYPE_16__ {TYPE_3__ u; int engine; int entry; } ;
struct ccp_sha_req_ctx {int buf_count; unsigned int nbytes; unsigned int final; unsigned int hash_rem; unsigned int hash_cnt; int msg_bits; int type; TYPE_5__ data_sg; TYPE_7__ cmd; scalar_t__ first; struct scatterlist ctx_sg; struct scatterlist buf_sg; int buf; int ctx; struct scatterlist* src; } ;
struct TYPE_11__ {int opad_count; scalar_t__ key_len; int opad_sg; } ;
struct TYPE_12__ {TYPE_1__ sha; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct TYPE_17__ {int flags; } ;
struct ahash_request {TYPE_9__ base; struct scatterlist* src; } ;
typedef int gfp_t ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ccp_sha_req_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (TYPE_9__*,TYPE_7__*) ;
 struct scatterlist* FUNC_3 (TYPE_5__*,struct scatterlist*) ;
 struct ccp_ctx* FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct crypto_ahash*) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_7__*,int ,int) ;
 int FUNC_9 (int ,struct scatterlist*,int ,unsigned int,int ) ;
 int FUNC_10 (TYPE_5__*,unsigned int,int ) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (struct scatterlist*,int ,int) ;
 int FUNC_13 (struct scatterlist*) ;
 int FUNC_14 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_15(struct ahash_request *VAR_10, unsigned int VAR_11,
        unsigned int VAR_12)
{
 struct crypto_ahash *VAR_13 = FUNC_5(VAR_10);
 struct ccp_ctx *VAR_14 = FUNC_4(VAR_13);
 struct ccp_sha_req_ctx *VAR_15 = FUNC_1(VAR_10);
 struct scatterlist *VAR_16;
 unsigned int VAR_17 =
  FUNC_7(FUNC_6(VAR_13));
 unsigned int VAR_18;
 gfp_t VAR_19;
 u64 VAR_20;
 int VAR_21;

 VAR_20 = (u64)VAR_15->buf_count + (u64)VAR_11;

 if (!VAR_12 && (VAR_20 <= VAR_17)) {
  FUNC_9(VAR_15->buf + VAR_15->buf_count, VAR_10->src,
      0, VAR_11, 0);
  VAR_15->buf_count += VAR_11;

  return 0;
 }

 VAR_15->src = VAR_10->src;
 VAR_15->nbytes = VAR_11;

 VAR_15->final = VAR_12;
 VAR_15->hash_rem = VAR_12 ? 0 : VAR_20 & (VAR_17 - 1);
 VAR_15->hash_cnt = VAR_20 - VAR_15->hash_rem;
 if (!VAR_12 && !VAR_15->hash_rem) {

  VAR_15->hash_cnt -= VAR_17;
  VAR_15->hash_rem = VAR_17;
 }


 FUNC_12(&VAR_15->ctx_sg, VAR_15->ctx, sizeof(VAR_15->ctx));

 VAR_16 = ((void*)0);
 if (VAR_15->buf_count && VAR_11) {



  VAR_19 = VAR_10->base.flags & VAR_1 ?
   VAR_4 : VAR_3;
  VAR_18 = FUNC_14(VAR_10->src) + 1;
  VAR_21 = FUNC_10(&VAR_15->data_sg, VAR_18, VAR_19);
  if (VAR_21)
   return VAR_21;

  FUNC_12(&VAR_15->buf_sg, VAR_15->buf, VAR_15->buf_count);
  VAR_16 = FUNC_3(&VAR_15->data_sg, &VAR_15->buf_sg);
  if (!VAR_16) {
   VAR_21 = -VAR_2;
   goto e_free;
  }
  VAR_16 = FUNC_3(&VAR_15->data_sg, VAR_10->src);
  if (!VAR_16) {
   VAR_21 = -VAR_2;
   goto e_free;
  }
  FUNC_13(VAR_16);

  VAR_16 = VAR_15->data_sg.sgl;
 } else if (VAR_15->buf_count) {
  FUNC_12(&VAR_15->buf_sg, VAR_15->buf, VAR_15->buf_count);

  VAR_16 = &VAR_15->buf_sg;
 } else if (VAR_11) {
  VAR_16 = VAR_10->src;
 }

 VAR_15->msg_bits += (VAR_15->hash_cnt << 3);

 FUNC_8(&VAR_15->cmd, 0, sizeof(VAR_15->cmd));
 FUNC_0(&VAR_15->cmd.entry);
 VAR_15->cmd.engine = VAR_0;
 VAR_15->cmd.u.sha.type = VAR_15->type;
 VAR_15->cmd.u.sha.ctx = &VAR_15->ctx_sg;

 switch (VAR_15->type) {
 case 132:
  VAR_15->cmd.u.sha.ctx_len = VAR_5;
  break;
 case 131:
  VAR_15->cmd.u.sha.ctx_len = VAR_6;
  break;
 case 130:
  VAR_15->cmd.u.sha.ctx_len = VAR_7;
  break;
 case 129:
  VAR_15->cmd.u.sha.ctx_len = VAR_8;
  break;
 case 128:
  VAR_15->cmd.u.sha.ctx_len = VAR_9;
  break;
 default:

  break;
 }

 VAR_15->cmd.u.sha.src = VAR_16;
 VAR_15->cmd.u.sha.src_len = VAR_15->hash_cnt;
 VAR_15->cmd.u.sha.opad = VAR_14->u.sha.key_len ?
  &VAR_14->u.sha.opad_sg : ((void*)0);
 VAR_15->cmd.u.sha.opad_len = VAR_14->u.sha.key_len ?
  VAR_14->u.sha.opad_count : 0;
 VAR_15->cmd.u.sha.first = VAR_15->first;
 VAR_15->cmd.u.sha.final = VAR_15->final;
 VAR_15->cmd.u.sha.msg_bits = VAR_15->msg_bits;

 VAR_15->first = 0;

 VAR_21 = FUNC_2(&VAR_10->base, &VAR_15->cmd);

 return VAR_21;

e_free:
 FUNC_11(&VAR_15->data_sg);

 return VAR_21;
}
