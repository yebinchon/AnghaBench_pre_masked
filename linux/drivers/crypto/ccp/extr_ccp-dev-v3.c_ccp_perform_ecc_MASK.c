
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
struct TYPE_9__ {int function; } ;
struct TYPE_10__ {TYPE_1__ ecc; } ;
struct ccp_op {TYPE_6__ dst; TYPE_4__ src; TYPE_2__ u; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct ccp_op*,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct ccp_op *VAR_8)
{
 u32 VAR_9[6];


 VAR_9[0] = VAR_2
  | (VAR_0 << VAR_4)
  | (VAR_8->u.ecc.function << VAR_3)
  | VAR_5;
 VAR_9[1] = VAR_8->src.u.dma.length - 1;
 VAR_9[2] = FUNC_2(&VAR_8->src.u.dma);
 VAR_9[3] = (VAR_1 << VAR_6)
  | FUNC_1(&VAR_8->src.u.dma);
 VAR_9[4] = FUNC_2(&VAR_8->dst.u.dma);
 VAR_9[5] = (VAR_1 << VAR_7)
  | FUNC_1(&VAR_8->dst.u.dma);

 return FUNC_3(VAR_8, VAR_9, FUNC_0(VAR_9));
}
