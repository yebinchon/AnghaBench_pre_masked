
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
struct TYPE_13__ {int sb; TYPE_7__ dma; } ;
struct TYPE_14__ {int type; TYPE_5__ u; } ;
struct TYPE_11__ {int sb; TYPE_7__ dma; } ;
struct TYPE_12__ {int type; TYPE_3__ u; } ;
struct TYPE_9__ {int bit_mod; int byte_swap; } ;
struct TYPE_10__ {TYPE_1__ passthru; } ;
struct ccp_op {int sb_key; scalar_t__ eom; TYPE_6__ dst; TYPE_4__ src; TYPE_2__ u; } ;


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
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct ccp_op*,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct ccp_op *VAR_12)
{
 u32 VAR_13[6];


 VAR_13[0] = (VAR_0 << VAR_5)
  | (VAR_12->u.passthru.bit_mod << VAR_8)
  | (VAR_12->u.passthru.byte_swap << VAR_7);

 if (VAR_12->src.type == VAR_2)
  VAR_13[1] = VAR_12->src.u.dma.length - 1;
 else
  VAR_13[1] = VAR_12->dst.u.dma.length - 1;

 if (VAR_12->src.type == VAR_2) {
  VAR_13[2] = FUNC_2(&VAR_12->src.u.dma);
  VAR_13[3] = (VAR_2 << VAR_10)
   | FUNC_1(&VAR_12->src.u.dma);

  if (VAR_12->u.passthru.bit_mod != VAR_3)
   VAR_13[3] |= (VAR_12->sb_key << VAR_9);
 } else {
  VAR_13[2] = VAR_12->src.u.sb * VAR_4;
  VAR_13[3] = (VAR_1 << VAR_10);
 }

 if (VAR_12->dst.type == VAR_2) {
  VAR_13[4] = FUNC_2(&VAR_12->dst.u.dma);
  VAR_13[5] = (VAR_2 << VAR_11)
   | FUNC_1(&VAR_12->dst.u.dma);
 } else {
  VAR_13[4] = VAR_12->dst.u.sb * VAR_4;
  VAR_13[5] = (VAR_1 << VAR_11);
 }

 if (VAR_12->eom)
  VAR_13[0] |= VAR_6;

 return FUNC_3(VAR_12, VAR_13, FUNC_0(VAR_13));
}
