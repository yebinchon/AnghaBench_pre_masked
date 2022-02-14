
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat64lsn_states_chunk {int dummy; } ;
struct nat64lsn_pgchunk {int dummy; } ;
struct nat64lsn_pg {int dummy; } ;
struct nat64lsn_job_item {int dummy; } ;
struct nat64lsn_host {int dummy; } ;
struct nat64lsn_aliaslink {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;
 void* FUNC_1 (char*,int,int *,int *,int *,int *,int ,int ) ;

void
FUNC_2(void)
{

 VAR_2 = FUNC_1("NAT64LSN hosts",
     sizeof(struct nat64lsn_host), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, 0);
 VAR_5 = FUNC_1("NAT64LSN portgroup chunks",
     sizeof(struct nat64lsn_pgchunk), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, 0);
 VAR_4 = FUNC_1("NAT64LSN portgroups",
     sizeof(struct nat64lsn_pg), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, 0);
 VAR_1 = FUNC_1("NAT64LSN links",
     sizeof(struct nat64lsn_aliaslink), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, 0);
 VAR_7 = FUNC_1("NAT64LSN states",
     sizeof(struct nat64lsn_states_chunk), VAR_6,
     ((void*)0), ((void*)0), ((void*)0), VAR_0, 0);
 VAR_3 = FUNC_1("NAT64LSN jobs",
     sizeof(struct nat64lsn_job_item), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, 0);
 FUNC_0();
}
