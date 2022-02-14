
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in_conninfo {int dummy; } ;
struct hc_metrics_lite {int rmx_recvpipe; int rmx_sendpipe; int rmx_cwnd; int rmx_rttvar; int rmx_rtt; int rmx_ssthresh; int rmx_mtu; } ;
struct hc_metrics {TYPE_1__* rmx_head; int rmx_recvpipe; int rmx_sendpipe; int rmx_cwnd; int rmx_rttvar; int rmx_rtt; int rmx_ssthresh; int rmx_mtu; int rmx_expire; int rmx_hits; } ;
struct TYPE_4__ {int expire; } ;
struct TYPE_3__ {int hch_mtx; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hc_metrics_lite*,int) ;
 struct hc_metrics* FUNC_2 (struct in_conninfo*) ;

void
FUNC_3(struct in_conninfo *VAR_2, struct hc_metrics_lite *VAR_3)
{
 struct hc_metrics *VAR_4;

 if (!VAR_1)
  return;




 VAR_4 = FUNC_2(VAR_2);




 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3, sizeof(*VAR_3));
  return;
 }
 VAR_4->rmx_hits++;
 VAR_4->rmx_expire = VAR_0.expire;

 VAR_3->rmx_mtu = VAR_4->rmx_mtu;
 VAR_3->rmx_ssthresh = VAR_4->rmx_ssthresh;
 VAR_3->rmx_rtt = VAR_4->rmx_rtt;
 VAR_3->rmx_rttvar = VAR_4->rmx_rttvar;
 VAR_3->rmx_cwnd = VAR_4->rmx_cwnd;
 VAR_3->rmx_sendpipe = VAR_4->rmx_sendpipe;
 VAR_3->rmx_recvpipe = VAR_4->rmx_recvpipe;




 FUNC_0(&VAR_4->rmx_head->hch_mtx);
}
