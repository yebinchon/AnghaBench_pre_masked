
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct flow_hash_entry {int head; int mtx; } ;
struct flow_entry {int dummy; } ;
struct flow6_entry {int dummy; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_4__ {void* nfinfo_inact_exp; void* nfinfo_act_exp; void* nfinfo_spackets6; void* nfinfo_sbytes6; void* nfinfo_spackets; void* nfinfo_sbytes; void* nfinfo_packets6; void* nfinfo_bytes6; void* nfinfo_packets; void* nfinfo_bytes; struct flow_hash_entry* hash6; struct flow_hash_entry* hash; void* zone6; void* zone; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_7 (void*,int ) ;

void
FUNC_8(priv_p VAR_8)
{
 struct flow_hash_entry *VAR_9;
 int VAR_10;


 VAR_8->zone = FUNC_6("NetFlow IPv4 cache",
     sizeof(struct flow_entry), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_7, 0);
 FUNC_7(VAR_8->zone, VAR_0);
 VAR_8->hash = FUNC_3(VAR_6 * sizeof(struct flow_hash_entry),
     VAR_3, VAR_4 | VAR_5);


 for (VAR_10 = 0, VAR_9 = VAR_8->hash; VAR_10 < VAR_6; VAR_10++, VAR_9++) {
  FUNC_4(&VAR_9->mtx, "hash mutex", ((void*)0), VAR_2);
  FUNC_1(&VAR_9->head);
 }
 VAR_8->nfinfo_bytes = FUNC_2(VAR_4);
 VAR_8->nfinfo_packets = FUNC_2(VAR_4);
 VAR_8->nfinfo_bytes6 = FUNC_2(VAR_4);
 VAR_8->nfinfo_packets6 = FUNC_2(VAR_4);
 VAR_8->nfinfo_sbytes = FUNC_2(VAR_4);
 VAR_8->nfinfo_spackets = FUNC_2(VAR_4);
 VAR_8->nfinfo_sbytes6 = FUNC_2(VAR_4);
 VAR_8->nfinfo_spackets6 = FUNC_2(VAR_4);
 VAR_8->nfinfo_act_exp = FUNC_2(VAR_4);
 VAR_8->nfinfo_inact_exp = FUNC_2(VAR_4);

 FUNC_5(VAR_8);
 FUNC_0(VAR_1, "ng_netflow startup()");
}
