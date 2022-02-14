
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
struct hc_metrics {int dummy; } ;
struct hc_head {int hch_mtx; scalar_t__ hch_length; int hch_bucket; } ;
struct TYPE_2__ {int hashsize; int bucket_limit; int prune; int hashmask; int cache_limit; int zone; struct hc_head* hashbase; int expire; scalar_t__ cache_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int VAR_13 ;
 int FUNC_8 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_9 (int ,void*) ;

void
FUNC_10(void)
{
 u_int VAR_14;
 int VAR_15;




 VAR_10.cache_count = 0;
 VAR_10.hashsize = VAR_6;
 VAR_10.bucket_limit = VAR_4;
 VAR_10.expire = VAR_5;
 VAR_10.prune = VAR_7;

 FUNC_1("net.inet.tcp.hostcache.hashsize",
     &VAR_10.hashsize);
 if (!FUNC_6(VAR_10.hashsize)) {
  FUNC_7("WARNING: hostcache hash size is not a power of 2.\n");
  VAR_10.hashsize = VAR_6;
 }
 VAR_10.hashmask = VAR_10.hashsize - 1;

 FUNC_1("net.inet.tcp.hostcache.bucketlimit",
     &VAR_10.bucket_limit);

 VAR_14 = VAR_10.hashsize * VAR_10.bucket_limit;
 VAR_10.cache_limit = VAR_14;
 FUNC_1("net.inet.tcp.hostcache.cachelimit",
     &VAR_10.cache_limit);
 if (VAR_10.cache_limit > VAR_14)
  VAR_10.cache_limit = VAR_14;




 VAR_10.hashbase = (struct hc_head *)
     FUNC_4(VAR_10.hashsize * sizeof(struct hc_head),
     VAR_1, VAR_2 | VAR_3);




 for (VAR_15 = 0; VAR_15 < VAR_10.hashsize; VAR_15++) {
  FUNC_0(&VAR_10.hashbase[VAR_15].hch_bucket);
  VAR_10.hashbase[VAR_15].hch_length = 0;
  FUNC_5(&VAR_10.hashbase[VAR_15].hch_mtx, "tcp_hc_entry",
     ((void*)0), VAR_0);
 }




 VAR_10.zone =
     FUNC_8("hostcache", sizeof(struct hc_metrics),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_8, 0);
 FUNC_9(VAR_10.zone, VAR_10.cache_limit);




 FUNC_2(&VAR_9, 1);
 FUNC_3(&VAR_9, VAR_10.prune * VAR_12,
     VAR_13, VAR_11);
}
