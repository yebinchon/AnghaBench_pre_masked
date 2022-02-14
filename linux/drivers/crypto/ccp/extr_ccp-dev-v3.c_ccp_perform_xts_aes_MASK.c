
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
struct TYPE_15__ {int length; } ;
struct TYPE_13__ {TYPE_7__ dma; } ;
struct TYPE_14__ {TYPE_5__ u; } ;
struct TYPE_11__ {TYPE_7__ dma; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_9__ {int action; int unit_size; } ;
struct TYPE_10__ {TYPE_1__ xts; } ;
struct ccp_op {int sb_key; int sb_ctx; scalar_t__ init; scalar_t__ eom; TYPE_6__ dst; TYPE_4__ src; TYPE_2__ u; } ;


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
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct ccp_op*,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct ccp_op *VAR_11)
{
 u32 VAR_12[6];


 VAR_12[0] = (VAR_0 << VAR_3)
  | (VAR_11->u.xts.action << VAR_2)
  | (VAR_11->u.xts.unit_size << VAR_7)
  | (VAR_11->sb_key << VAR_6);
 VAR_12[1] = VAR_11->src.u.dma.length - 1;
 VAR_12[2] = FUNC_2(&VAR_11->src.u.dma);
 VAR_12[3] = (VAR_11->sb_ctx << VAR_8)
  | (VAR_1 << VAR_9)
  | FUNC_1(&VAR_11->src.u.dma);
 VAR_12[4] = FUNC_2(&VAR_11->dst.u.dma);
 VAR_12[5] = (VAR_1 << VAR_10)
  | FUNC_1(&VAR_11->dst.u.dma);

 if (VAR_11->eom)
  VAR_12[0] |= VAR_4;

 if (VAR_11->init)
  VAR_12[0] |= VAR_5;

 return FUNC_3(VAR_11, VAR_12, FUNC_0(VAR_12));
}
