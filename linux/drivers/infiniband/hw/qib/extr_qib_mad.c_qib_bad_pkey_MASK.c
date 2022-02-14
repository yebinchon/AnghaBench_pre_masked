
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int pkey_violations; int n_pkt_drops; } ;
struct qib_ibport {TYPE_1__ rvp; } ;
struct TYPE_6__ {void* qp2; void* sl_qp1; void* key; void* lid2; void* lid1; } ;
struct TYPE_8__ {TYPE_2__ ntc_257_258; } ;
struct ib_mad_notice_attr {TYPE_4__ details; scalar_t__ toggle_count; int issuer_lid; int trap_num; int prod_type_lsb; scalar_t__ prod_type_msb; int generic_type; } ;
typedef int data ;
typedef void* __be16 ;
struct TYPE_7__ {int lid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 TYPE_3__* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_ibport*,struct ib_mad_notice_attr*,int) ;

void FUNC_5(struct qib_ibport *VAR_3, u32 VAR_4, u32 VAR_5,
    u32 VAR_6, u32 VAR_7, __be16 VAR_8, __be16 VAR_9)
{
 struct ib_mad_notice_attr VAR_10;

 VAR_3->rvp.n_pkt_drops++;
 VAR_3->rvp.pkey_violations++;


 VAR_10.generic_type = VAR_2;
 VAR_10.prod_type_msb = 0;
 VAR_10.prod_type_lsb = VAR_0;
 VAR_10.trap_num = VAR_1;
 VAR_10.issuer_lid = FUNC_0(FUNC_3(VAR_3)->lid);
 VAR_10.toggle_count = 0;
 FUNC_2(&VAR_10.details, 0, sizeof(VAR_10.details));
 VAR_10.details.ntc_257_258.lid1 = VAR_8;
 VAR_10.details.ntc_257_258.lid2 = VAR_9;
 VAR_10.details.ntc_257_258.key = FUNC_1(VAR_4);
 VAR_10.details.ntc_257_258.sl_qp1 = FUNC_1((VAR_5 << 28) | VAR_6);
 VAR_10.details.ntc_257_258.qp2 = FUNC_1(VAR_7);

 FUNC_4(VAR_3, &VAR_10, sizeof(VAR_10));
}
