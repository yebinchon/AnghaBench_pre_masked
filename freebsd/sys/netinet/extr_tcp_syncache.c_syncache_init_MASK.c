
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct syncache_head {int dummy; } ;
struct syncache {int dummy; } ;
struct TYPE_5__ {int reseed; int * key; } ;
struct TYPE_7__ {int hashsize; int bucket_limit; int hashmask; int cache_limit; int paused; scalar_t__ pause_backoff; scalar_t__ pause_until; int pause_mtx; int pause_co; TYPE_1__ secret; int zone; TYPE_2__* hashbase; int vnet; int hash_secret; int rexmt_limit; } ;
struct TYPE_6__ {int sch_last_overflow; TYPE_3__* sch_sc; scalar_t__ sch_length; int sch_mtx; int sch_timer; int sch_bucket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,int*) ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int,int ,TYPE_3__*) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_11 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_12 (int ,int) ;

void
FUNC_13(void)
{
 int VAR_16;

 VAR_11.hashsize = VAR_8;
 VAR_11.bucket_limit = VAR_7;
 VAR_11.rexmt_limit = VAR_4;
 VAR_11.hash_secret = FUNC_3();

 FUNC_1("net.inet.tcp.syncache.hashsize",
     &VAR_11.hashsize);
 FUNC_1("net.inet.tcp.syncache.bucketlimit",
     &VAR_11.bucket_limit);
 if (!FUNC_9(VAR_11.hashsize) ||
     VAR_11.hashsize == 0) {
  FUNC_10("WARNING: syncache hash size is not a power of 2.\n");
  VAR_11.hashsize = VAR_8;
 }
 VAR_11.hashmask = VAR_11.hashsize - 1;


 VAR_11.cache_limit =
     VAR_11.hashsize * VAR_11.bucket_limit;
 FUNC_1("net.inet.tcp.syncache.cachelimit",
     &VAR_11.cache_limit);


 VAR_11.hashbase = FUNC_7(VAR_11.hashsize *
     sizeof(struct syncache_head), VAR_1, VAR_2 | VAR_3);






 for (VAR_16 = 0; VAR_16 < VAR_11.hashsize; VAR_16++) {
  FUNC_0(&VAR_11.hashbase[VAR_16].sch_bucket);
  FUNC_8(&VAR_11.hashbase[VAR_16].sch_mtx, "tcp_sc_head",
    ((void*)0), VAR_0);
  FUNC_5(&VAR_11.hashbase[VAR_16].sch_timer,
    &VAR_11.hashbase[VAR_16].sch_mtx, 0);
  VAR_11.hashbase[VAR_16].sch_length = 0;
  VAR_11.hashbase[VAR_16].sch_sc = &VAR_11;
  VAR_11.hashbase[VAR_16].sch_last_overflow =
      -(VAR_5 + 1);
 }


 VAR_11.zone = FUNC_11("syncache", sizeof(struct syncache),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_10, 0);
 VAR_11.cache_limit = FUNC_12(VAR_11.zone,
     VAR_11.cache_limit);


 FUNC_4(&VAR_11.secret.reseed, 1);
 FUNC_2(VAR_11.secret.key[0], VAR_6, 0);
 FUNC_2(VAR_11.secret.key[1], VAR_6, 0);
 FUNC_6(&VAR_11.secret.reseed, VAR_5 * VAR_13,
     VAR_14, &VAR_11);


 FUNC_8(&VAR_11.pause_mtx, "tcp_sc_pause", ((void*)0), VAR_0);
 FUNC_5(&VAR_11.pause_co, &VAR_11.pause_mtx,
     0);
 VAR_11.pause_until = VAR_15 - VAR_9;
 VAR_11.pause_backoff = 0;
 VAR_11.paused = 0;
}
