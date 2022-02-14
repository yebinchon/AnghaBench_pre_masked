
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int type; int mode; int action; } ;
struct TYPE_14__ {TYPE_5__ aes; } ;
struct TYPE_15__ {int length; } ;
struct TYPE_11__ {TYPE_7__ dma; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_9__ {TYPE_7__ dma; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
struct ccp_op {int sb_key; int sb_ctx; scalar_t__ init; scalar_t__ eom; TYPE_6__ u; TYPE_4__ dst; TYPE_2__ src; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct ccp_op*,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct ccp_op *VAR_14)
{
 u32 VAR_15[6];


 VAR_15[0] = (VAR_1 << VAR_7)
  | (VAR_14->u.aes.type << VAR_6)
  | (VAR_14->u.aes.mode << VAR_5)
  | (VAR_14->u.aes.action << VAR_3)
  | (VAR_14->sb_key << VAR_10);
 VAR_15[1] = VAR_14->src.u.dma.length - 1;
 VAR_15[2] = FUNC_2(&VAR_14->src.u.dma);
 VAR_15[3] = (VAR_14->sb_ctx << VAR_11)
  | (VAR_2 << VAR_12)
  | FUNC_1(&VAR_14->src.u.dma);
 VAR_15[4] = FUNC_2(&VAR_14->dst.u.dma);
 VAR_15[5] = (VAR_2 << VAR_13)
  | FUNC_1(&VAR_14->dst.u.dma);

 if (VAR_14->u.aes.mode == VAR_0)
  VAR_15[0] |= ((0x7f) << VAR_4);

 if (VAR_14->eom)
  VAR_15[0] |= VAR_8;

 if (VAR_14->init)
  VAR_15[0] |= VAR_9;

 return FUNC_3(VAR_14, VAR_15, FUNC_0(VAR_15));
}
