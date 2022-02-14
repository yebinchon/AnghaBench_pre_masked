
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_conninfo {int inc_flags; int inc_faddr; int inc6_zoneid; int inc6_faddr; } ;
struct hc_metrics {int rmx_expire; struct hc_head* rmx_head; int ip4; int ip6_zoneid; int ip6; } ;
struct hc_head {scalar_t__ hch_length; int hch_bucket; int hch_mtx; } ;
struct TYPE_2__ {scalar_t__ bucket_limit; scalar_t__ cache_count; scalar_t__ cache_limit; struct hc_head* hashbase; int expire; int zone; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct hc_metrics*,int ) ;
 struct hc_metrics* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct hc_metrics*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct hc_metrics*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hc_metrics* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct hc_metrics*) ;

__attribute__((used)) static struct hc_metrics *
FUNC_12(struct in_conninfo *VAR_8)
{
 int VAR_9;
 struct hc_head *VAR_10;
 struct hc_metrics *VAR_11;

 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_8 != ((void*)0), ("tcp_hc_insert with NULL in_conninfo pointer"));




 if (VAR_8->inc_flags & VAR_0)
  VAR_9 = FUNC_1(&VAR_8->inc6_faddr);
 else
  VAR_9 = FUNC_0(&VAR_8->inc_faddr);

 VAR_10 = &VAR_2.hashbase[VAR_9];






 FUNC_7(&VAR_10->hch_mtx);




 if (VAR_10->hch_length >= VAR_2.bucket_limit ||
     VAR_2.cache_count >= VAR_2.cache_limit) {
  VAR_11 = FUNC_4(&VAR_10->hch_bucket, VAR_4);
  if (VAR_11 == ((void*)0)) {
   FUNC_8(&VAR_10->hch_mtx);
   return ((void*)0);
  }
  FUNC_5(&VAR_10->hch_bucket, VAR_11, VAR_5);
  VAR_2.hashbase[VAR_9].hch_length--;
  VAR_2.cache_count--;
  FUNC_6(VAR_7);



 } else {



  VAR_11 = FUNC_10(VAR_2.zone, VAR_1);
  if (VAR_11 == ((void*)0)) {
   FUNC_8(&VAR_10->hch_mtx);
   return ((void*)0);
  }
 }




 FUNC_9(VAR_11, sizeof(*VAR_11));
 if (VAR_8->inc_flags & VAR_0) {
  VAR_11->ip6 = VAR_8->inc6_faddr;
  VAR_11->ip6_zoneid = VAR_8->inc6_zoneid;
 } else
  VAR_11->ip4 = VAR_8->inc_faddr;
 VAR_11->rmx_head = VAR_10;
 VAR_11->rmx_expire = VAR_2.expire;




 FUNC_3(&VAR_10->hch_bucket, VAR_11, VAR_5);
 VAR_2.hashbase[VAR_9].hch_length++;
 VAR_2.cache_count++;
 FUNC_6(VAR_6);

 return VAR_11;
}
