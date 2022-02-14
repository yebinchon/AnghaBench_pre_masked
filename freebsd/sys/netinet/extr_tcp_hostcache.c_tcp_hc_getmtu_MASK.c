
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct in_conninfo {int dummy; } ;
struct hc_metrics {TYPE_1__* rmx_head; int rmx_mtu; int rmx_expire; int rmx_hits; } ;
struct TYPE_4__ {int expire; } ;
struct TYPE_3__ {int hch_mtx; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 struct hc_metrics* FUNC_1 (struct in_conninfo*) ;

uint32_t
FUNC_2(struct in_conninfo *VAR_2)
{
 struct hc_metrics *VAR_3;
 uint32_t VAR_4;

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0)) {
  return 0;
 }
 VAR_3->rmx_hits++;
 VAR_3->rmx_expire = VAR_0.expire;

 VAR_4 = VAR_3->rmx_mtu;
 FUNC_0(&VAR_3->rmx_head->hch_mtx);
 return VAR_4;
}
