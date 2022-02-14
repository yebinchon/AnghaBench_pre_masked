
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int dma; } ;
struct TYPE_12__ {TYPE_5__ u; } ;
struct TYPE_9__ {int dma; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_7__ {int mod_size; int input_len; } ;
struct TYPE_8__ {TYPE_1__ rsa; } ;
struct ccp_op {int sb_key; int sb_ctx; TYPE_6__ dst; TYPE_4__ src; TYPE_2__ u; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ccp_op*,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct ccp_op *VAR_9)
{
 u32 VAR_10[6];


 VAR_10[0] = (VAR_0 << VAR_2)
  | (VAR_9->u.rsa.mod_size << VAR_5)
  | (VAR_9->sb_key << VAR_4)
  | VAR_3;
 VAR_10[1] = VAR_9->u.rsa.input_len - 1;
 VAR_10[2] = FUNC_2(&VAR_9->src.u.dma);
 VAR_10[3] = (VAR_9->sb_ctx << VAR_6)
  | (VAR_1 << VAR_7)
  | FUNC_1(&VAR_9->src.u.dma);
 VAR_10[4] = FUNC_2(&VAR_9->dst.u.dma);
 VAR_10[5] = (VAR_1 << VAR_8)
  | FUNC_1(&VAR_9->dst.u.dma);

 return FUNC_3(VAR_9, VAR_10, FUNC_0(VAR_10));
}
