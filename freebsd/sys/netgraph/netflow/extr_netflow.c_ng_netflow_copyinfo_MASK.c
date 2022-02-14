
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_netflow_info {int nfinfo_act_t; int nfinfo_inact_t; int nfinfo_alloc_fibs; int nfinfo_realloc_mbuf; int nfinfo_export9_failed; int nfinfo_export_failed; int nfinfo_alloc_failed; void* nfinfo_used6; void* nfinfo_used; void* nfinfo_inact_exp; void* nfinfo_act_exp; void* nfinfo_spackets6; void* nfinfo_sbytes6; void* nfinfo_spackets; void* nfinfo_sbytes; void* nfinfo_packets6; void* nfinfo_bytes6; void* nfinfo_packets; void* nfinfo_bytes; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_3__ {int nfinfo_act_t; int nfinfo_inact_t; int nfinfo_alloc_fibs; int nfinfo_realloc_mbuf; int nfinfo_export9_failed; int nfinfo_export_failed; int nfinfo_alloc_failed; int zone6; int zone; int nfinfo_inact_exp; int nfinfo_act_exp; int nfinfo_spackets6; int nfinfo_sbytes6; int nfinfo_spackets; int nfinfo_sbytes; int nfinfo_packets6; int nfinfo_bytes6; int nfinfo_packets; int nfinfo_bytes; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

void
FUNC_2(priv_p VAR_0, struct ng_netflow_info *VAR_1)
{

 VAR_1->nfinfo_bytes = FUNC_0(VAR_0->nfinfo_bytes);
 VAR_1->nfinfo_packets = FUNC_0(VAR_0->nfinfo_packets);
 VAR_1->nfinfo_bytes6 = FUNC_0(VAR_0->nfinfo_bytes6);
 VAR_1->nfinfo_packets6 = FUNC_0(VAR_0->nfinfo_packets6);
 VAR_1->nfinfo_sbytes = FUNC_0(VAR_0->nfinfo_sbytes);
 VAR_1->nfinfo_spackets = FUNC_0(VAR_0->nfinfo_spackets);
 VAR_1->nfinfo_sbytes6 = FUNC_0(VAR_0->nfinfo_sbytes6);
 VAR_1->nfinfo_spackets6 = FUNC_0(VAR_0->nfinfo_spackets6);
 VAR_1->nfinfo_act_exp = FUNC_0(VAR_0->nfinfo_act_exp);
 VAR_1->nfinfo_inact_exp = FUNC_0(VAR_0->nfinfo_inact_exp);

 VAR_1->nfinfo_used = FUNC_1(VAR_0->zone);




 VAR_1->nfinfo_alloc_failed = VAR_0->nfinfo_alloc_failed;
 VAR_1->nfinfo_export_failed = VAR_0->nfinfo_export_failed;
 VAR_1->nfinfo_export9_failed = VAR_0->nfinfo_export9_failed;
 VAR_1->nfinfo_realloc_mbuf = VAR_0->nfinfo_realloc_mbuf;
 VAR_1->nfinfo_alloc_fibs = VAR_0->nfinfo_alloc_fibs;
 VAR_1->nfinfo_inact_t = VAR_0->nfinfo_inact_t;
 VAR_1->nfinfo_act_t = VAR_0->nfinfo_act_t;
}
