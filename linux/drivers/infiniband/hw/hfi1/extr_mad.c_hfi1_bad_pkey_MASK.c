
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int sl; void* qp2; void* qp1; void* key; void* lid2; void* lid1; } ;
struct TYPE_7__ {TYPE_2__ ntc_257_258; } ;
struct trap_node {int len; TYPE_3__ data; } ;
struct TYPE_5__ {int pkey_violations; int n_pkt_drops; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;
struct TYPE_8__ {int lid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 struct trap_node* FUNC_1 (int ,int ,int) ;
 TYPE_4__* FUNC_2 (struct hfi1_ibport*) ;
 int FUNC_3 (struct hfi1_ibport*,struct trap_node*) ;

void FUNC_4(struct hfi1_ibport *VAR_2, u32 VAR_3, u32 VAR_4,
     u32 VAR_5, u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct trap_node *VAR_9;
 u32 VAR_10 = FUNC_2(VAR_2)->lid;

 VAR_2->rvp.n_pkt_drops++;
 VAR_2->rvp.pkey_violations++;

 VAR_9 = FUNC_1(VAR_0, VAR_1,
    VAR_10);
 if (!VAR_9)
  return;


 VAR_9->data.ntc_257_258.lid1 = FUNC_0(VAR_7);
 VAR_9->data.ntc_257_258.lid2 = FUNC_0(VAR_8);
 VAR_9->data.ntc_257_258.key = FUNC_0(VAR_3);
 VAR_9->data.ntc_257_258.sl = VAR_4 << 3;
 VAR_9->data.ntc_257_258.qp1 = FUNC_0(VAR_5);
 VAR_9->data.ntc_257_258.qp2 = FUNC_0(VAR_6);

 VAR_9->len = sizeof(VAR_9->data);
 FUNC_3(VAR_2, VAR_9);
}
