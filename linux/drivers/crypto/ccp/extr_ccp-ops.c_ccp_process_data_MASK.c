
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ address; int length; } ;
struct TYPE_10__ {TYPE_3__ dma; } ;
struct TYPE_9__ {TYPE_5__ u; } ;
struct ccp_op {TYPE_4__ dst; scalar_t__ init; } ;
struct TYPE_6__ {scalar_t__ address; } ;
struct TYPE_7__ {TYPE_1__ dma; } ;
struct ccp_data {int sg_wa; TYPE_2__ dm_wa; } ;


 int FUNC_0 (struct ccp_data*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ccp_data *VAR_0, struct ccp_data *VAR_1,
        struct ccp_op *VAR_2)
{
 VAR_2->init = 0;

 if (VAR_1) {
  if (VAR_2->dst.u.dma.address == VAR_1->dm_wa.dma.address)
   FUNC_0(VAR_1);
  else
   FUNC_1(&VAR_1->sg_wa,
            VAR_2->dst.u.dma.length);
 }
}
