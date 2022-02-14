
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct in_conninfo {int dummy; } ;
struct hc_metrics {TYPE_1__* rmx_head; int rmx_mtu; int rmx_expire; int rmx_updates; } ;
struct TYPE_4__ {int expire; } ;
struct TYPE_3__ {int hch_mtx; int hch_bucket; } ;


 int FUNC_0 (int *,struct hc_metrics*,int ) ;
 int FUNC_1 (int *,struct hc_metrics*,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hc_metrics* FUNC_3 (struct in_conninfo*) ;
 struct hc_metrics* FUNC_4 (struct in_conninfo*) ;

void
FUNC_5(struct in_conninfo *VAR_3, uint32_t VAR_4)
{
 struct hc_metrics *VAR_5;

 if (!VAR_1)
  return;




 VAR_5 = FUNC_4(VAR_3);




 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 == ((void*)0))
   return;
 }
 VAR_5->rmx_updates++;
 VAR_5->rmx_expire = VAR_0.expire;

 VAR_5->rmx_mtu = VAR_4;




 FUNC_1(&VAR_5->rmx_head->hch_bucket, VAR_5, VAR_2);
 FUNC_0(&VAR_5->rmx_head->hch_bucket, VAR_5, VAR_2);




 FUNC_2(&VAR_5->rmx_head->hch_mtx);
}
