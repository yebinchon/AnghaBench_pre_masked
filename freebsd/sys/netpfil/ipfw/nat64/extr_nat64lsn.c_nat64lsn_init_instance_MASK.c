
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nat64lsn_hosts_slist {int dummy; } ;
struct TYPE_3__ {int cnt; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct nat64lsn_cfg {int hosts_hashsize; int prefix4; int pmask4; int plen4; int jcallout; int periodic_lock; int periodic; struct nat64lsn_alias* aliases; int * hosts_hash; int hash_seed; TYPE_2__ base; int vp; int jhead; } ;
struct nat64lsn_alias {int addr; int hosts; } ;
struct ip_fw_chain {int dummy; } ;
typedef int in_addr_t ;


 int FUNC_0 (struct nat64lsn_alias*) ;
 int FUNC_1 (struct nat64lsn_cfg*) ;
 int VAR_0 ;
 int FUNC_2 (struct nat64lsn_cfg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int VAR_6 ;
 void* FUNC_9 (int,int ,int) ;

struct nat64lsn_cfg *
FUNC_10(struct ip_fw_chain *VAR_7, in_addr_t VAR_8, int VAR_9)
{
 struct nat64lsn_cfg *VAR_10;
 struct nat64lsn_alias *VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_9(sizeof(struct nat64lsn_cfg), VAR_1,
     VAR_2 | VAR_3);

 FUNC_2(VAR_10);
 FUNC_1(VAR_10);
 FUNC_5(&VAR_10->jhead);
 VAR_10->vp = VAR_6;
 FUNC_4(VAR_10->base.stats.cnt, VAR_5, VAR_2);

 VAR_10->hash_seed = FUNC_6();
 VAR_10->hosts_hashsize = VAR_4;
 VAR_10->hosts_hash = FUNC_9(sizeof(struct nat64lsn_hosts_slist) *
     VAR_10->hosts_hashsize, VAR_1, VAR_2 | VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_10->hosts_hashsize; VAR_12++)
  FUNC_3(&VAR_10->hosts_hash[VAR_12]);

 VAR_13 = 1 << (32 - VAR_9);
 VAR_10->prefix4 = VAR_8;
 VAR_10->pmask4 = VAR_8 | (VAR_13 - 1);
 VAR_10->plen4 = VAR_9;
 VAR_10->aliases = FUNC_9(sizeof(struct nat64lsn_alias) * VAR_13,
     VAR_1, VAR_2 | VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_11 = &VAR_10->aliases[VAR_12];
  VAR_11->addr = VAR_8 + VAR_12;
  FUNC_3(&VAR_11->hosts);
  FUNC_0(VAR_11);
 }

        FUNC_8(&VAR_10->periodic, &VAR_10->periodic_lock, 0);
        FUNC_7(&VAR_10->jcallout, VAR_0);

 return (VAR_10);
}
