
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nat64lsn_host {int dummy; } ;
struct TYPE_3__ {int cnt; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct nat64lsn_cfg {int hosts_hashsize; int plen4; struct nat64lsn_cfg* aliases; struct nat64lsn_cfg* hosts_hash; TYPE_2__ base; int jcallout; int periodic; } ;


 int FUNC_0 (struct nat64lsn_cfg*) ;
 int FUNC_1 (struct nat64lsn_cfg*) ;
 int FUNC_2 (struct nat64lsn_cfg*) ;
 int FUNC_3 (struct nat64lsn_cfg*) ;
 int FUNC_4 (struct nat64lsn_cfg*) ;
 struct nat64lsn_host* FUNC_5 (struct nat64lsn_cfg*) ;
 int FUNC_6 (struct nat64lsn_cfg*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (struct nat64lsn_cfg*,int ) ;
 int FUNC_10 (struct nat64lsn_cfg*,struct nat64lsn_cfg*) ;
 int FUNC_11 (struct nat64lsn_host*) ;

void
FUNC_12(struct nat64lsn_cfg *VAR_3)
{
 struct nat64lsn_host *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3);
 FUNC_8(&VAR_3->periodic);
 FUNC_2(VAR_3);
 FUNC_8(&VAR_3->jcallout);

 for (VAR_5 = 0; VAR_5 < VAR_3->hosts_hashsize; VAR_5++) {
  while (!FUNC_4(&VAR_3->hosts_hash[VAR_5])) {
   VAR_4 = FUNC_5(&VAR_3->hosts_hash[VAR_5]);
   FUNC_6(&VAR_3->hosts_hash[VAR_5], VAR_2);
   FUNC_11(VAR_4);
  }
 }

 for (VAR_5 = 0; VAR_5 < (1 << (32 - VAR_3->plen4)); VAR_5++)
  FUNC_10(VAR_3, &VAR_3->aliases[VAR_5]);

 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
 FUNC_7(VAR_3->base.stats.cnt, VAR_1);
 FUNC_9(VAR_3->hosts_hash, VAR_0);
 FUNC_9(VAR_3->aliases, VAR_0);
 FUNC_9(VAR_3, VAR_0);
}
