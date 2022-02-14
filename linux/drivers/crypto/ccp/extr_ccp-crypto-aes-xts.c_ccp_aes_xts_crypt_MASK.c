
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_10__ {scalar_t__ key_len; int key_sg; int tfm_skcipher; } ;
struct TYPE_11__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct TYPE_12__ {unsigned int unit_size; scalar_t__ key_len; scalar_t__ src_len; int dst; int src; int iv_len; int * iv; int * key; int action; int type; } ;
struct TYPE_13__ {TYPE_3__ xts; } ;
struct TYPE_15__ {TYPE_4__ u; int engine; int entry; } ;
struct ccp_aes_req_ctx {TYPE_6__ cmd; int iv_sg; int iv; } ;
struct TYPE_16__ {int flags; int tfm; } ;
struct ablkcipher_request {scalar_t__ nbytes; TYPE_7__ base; int dst; int src; int info; } ;
struct TYPE_14__ {scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (int,int ) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct ccp_aes_req_ctx* FUNC_4 (struct ablkcipher_request*) ;
 int FUNC_5 (TYPE_7__*,TYPE_6__*) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct ccp_ctx* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (TYPE_6__*,int ,int) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int ,int ,int *,int *) ;
 int FUNC_14 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;

__attribute__((used)) static int FUNC_17(struct ablkcipher_request *VAR_11,
        unsigned int VAR_12)
{
 struct ccp_ctx *VAR_13 = FUNC_9(VAR_11->base.tfm);
 struct ccp_aes_req_ctx *VAR_14 = FUNC_4(VAR_11);
 unsigned int VAR_15 = FUNC_6();
 unsigned int VAR_16 = 0;
 unsigned int VAR_17;
 u32 VAR_18;
 int VAR_19;

 if (!VAR_13->u.aes.key_len)
  return -VAR_8;

 if (!VAR_11->info)
  return -VAR_8;







 VAR_18 = VAR_7;
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_10); VAR_17++) {
  if (VAR_11->nbytes == VAR_10[VAR_17].size) {
   VAR_18 = VAR_17;
   break;
  }
 }




 if (VAR_18 == VAR_7)
  VAR_16 = 1;
 if ((VAR_15 < FUNC_1(5, 0)) &&
     (VAR_13->u.aes.key_len != VAR_1))
  VAR_16 = 1;
 if ((VAR_13->u.aes.key_len != VAR_1) &&
     (VAR_13->u.aes.key_len != VAR_2))
  VAR_16 = 1;
 if (VAR_16) {
  FUNC_3(VAR_9,
            VAR_13->u.aes.tfm_skcipher);




  FUNC_15(VAR_9, VAR_13->u.aes.tfm_skcipher);
  FUNC_13(VAR_9, VAR_11->base.flags,
           ((void*)0), ((void*)0));
  FUNC_14(VAR_9, VAR_11->src, VAR_11->dst,
        VAR_11->nbytes, VAR_11->info);
  VAR_19 = VAR_12 ? FUNC_8(VAR_9) :
    FUNC_7(VAR_9);
  FUNC_16(VAR_9);
  return VAR_19;
 }

 FUNC_10(VAR_14->iv, VAR_11->info, VAR_0);
 FUNC_12(&VAR_14->iv_sg, VAR_14->iv, VAR_0);

 FUNC_11(&VAR_14->cmd, 0, sizeof(VAR_14->cmd));
 FUNC_2(&VAR_14->cmd.entry);
 VAR_14->cmd.engine = VAR_6;
 VAR_14->cmd.u.xts.type = VAR_5;
 VAR_14->cmd.u.xts.action = (VAR_12) ? VAR_4
        : VAR_3;
 VAR_14->cmd.u.xts.unit_size = VAR_18;
 VAR_14->cmd.u.xts.key = &VAR_13->u.aes.key_sg;
 VAR_14->cmd.u.xts.key_len = VAR_13->u.aes.key_len;
 VAR_14->cmd.u.xts.iv = &VAR_14->iv_sg;
 VAR_14->cmd.u.xts.iv_len = VAR_0;
 VAR_14->cmd.u.xts.src = VAR_11->src;
 VAR_14->cmd.u.xts.src_len = VAR_11->nbytes;
 VAR_14->cmd.u.xts.dst = VAR_11->dst;

 VAR_19 = FUNC_5(&VAR_11->base, &VAR_14->cmd);

 return VAR_19;
}
