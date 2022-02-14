
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_10__ {scalar_t__ mode; unsigned int iv_len; int src_len; int dst; int src; struct scatterlist* iv; scalar_t__ key_len; int * key; int action; int type; } ;
struct TYPE_11__ {TYPE_3__ des3; } ;
struct TYPE_12__ {TYPE_4__ u; int engine; int entry; } ;
struct ccp_des3_req_ctx {TYPE_5__ cmd; int iv; struct scatterlist iv_sg; } ;
struct TYPE_8__ {scalar_t__ mode; scalar_t__ key_len; int key_sg; int type; } ;
struct TYPE_9__ {TYPE_1__ des3; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct TYPE_13__ {int tfm; } ;
struct ablkcipher_request {int nbytes; TYPE_6__ base; int dst; int src; int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct ccp_des3_req_ctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*) ;
 struct ccp_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (struct scatterlist*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct ablkcipher_request *VAR_7, bool VAR_8)
{
 struct ccp_ctx *VAR_9 = FUNC_3(VAR_7->base.tfm);
 struct ccp_des3_req_ctx *VAR_10 = FUNC_1(VAR_7);
 struct scatterlist *VAR_11 = ((void*)0);
 unsigned int VAR_12 = 0;
 int VAR_13;

 if (!VAR_9->u.des3.key_len)
  return -VAR_6;

 if (((VAR_9->u.des3.mode == VAR_3) ||
      (VAR_9->u.des3.mode == VAR_2)) &&
     (VAR_7->nbytes & (VAR_5 - 1)))
  return -VAR_6;

 if (VAR_9->u.des3.mode != VAR_3) {
  if (!VAR_7->info)
   return -VAR_6;

  FUNC_4(VAR_10->iv, VAR_7->info, VAR_5);
  VAR_11 = &VAR_10->iv_sg;
  VAR_12 = VAR_5;
  FUNC_6(VAR_11, VAR_10->iv, VAR_12);
 }

 FUNC_5(&VAR_10->cmd, 0, sizeof(VAR_10->cmd));
 FUNC_0(&VAR_10->cmd.entry);
 VAR_10->cmd.engine = VAR_4;
 VAR_10->cmd.u.des3.type = VAR_9->u.des3.type;
 VAR_10->cmd.u.des3.mode = VAR_9->u.des3.mode;
 VAR_10->cmd.u.des3.action = (VAR_8)
      ? VAR_1
      : VAR_0;
 VAR_10->cmd.u.des3.key = &VAR_9->u.des3.key_sg;
 VAR_10->cmd.u.des3.key_len = VAR_9->u.des3.key_len;
 VAR_10->cmd.u.des3.iv = VAR_11;
 VAR_10->cmd.u.des3.iv_len = VAR_12;
 VAR_10->cmd.u.des3.src = VAR_7->src;
 VAR_10->cmd.u.des3.src_len = VAR_7->nbytes;
 VAR_10->cmd.u.des3.dst = VAR_7->dst;

 VAR_13 = FUNC_2(&VAR_7->base, &VAR_10->cmd);

 return VAR_13;
}
