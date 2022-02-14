
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int type; int msg_bits; } ;
struct TYPE_10__ {TYPE_3__ sha; } ;
struct TYPE_11__ {int length; } ;
struct TYPE_7__ {TYPE_5__ dma; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct ccp_op {int sb_ctx; TYPE_4__ u; scalar_t__ eom; TYPE_2__ src; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct ccp_op*,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ccp_op *VAR_8)
{
 u32 VAR_9[6];


 VAR_9[0] = (VAR_0 << VAR_2)
  | (VAR_8->u.sha.type << VAR_5)
  | VAR_4;
 VAR_9[1] = VAR_8->src.u.dma.length - 1;
 VAR_9[2] = FUNC_2(&VAR_8->src.u.dma);
 VAR_9[3] = (VAR_8->sb_ctx << VAR_6)
  | (VAR_1 << VAR_7)
  | FUNC_1(&VAR_8->src.u.dma);

 if (VAR_8->eom) {
  VAR_9[0] |= VAR_3;
  VAR_9[4] = FUNC_4(VAR_8->u.sha.msg_bits);
  VAR_9[5] = FUNC_5(VAR_8->u.sha.msg_bits);
 } else {
  VAR_9[4] = 0;
  VAR_9[5] = 0;
 }

 return FUNC_3(VAR_8, VAR_9, FUNC_0(VAR_9));
}
