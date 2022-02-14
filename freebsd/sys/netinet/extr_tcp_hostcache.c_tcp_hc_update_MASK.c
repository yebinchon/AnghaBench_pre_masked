
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct in_conninfo {int dummy; } ;
struct hc_metrics_lite {scalar_t__ rmx_rtt; scalar_t__ rmx_rttvar; int rmx_ssthresh; scalar_t__ rmx_cwnd; scalar_t__ rmx_sendpipe; scalar_t__ rmx_recvpipe; } ;
struct hc_metrics {scalar_t__ rmx_rtt; scalar_t__ rmx_rttvar; int rmx_ssthresh; scalar_t__ rmx_cwnd; scalar_t__ rmx_sendpipe; scalar_t__ rmx_recvpipe; TYPE_1__* rmx_head; int rmx_expire; int rmx_updates; } ;
struct TYPE_4__ {int expire; } ;
struct TYPE_3__ {int hch_mtx; int hch_bucket; } ;


 int FUNC_0 (int *,struct hc_metrics*,int ) ;
 int FUNC_1 (int *,struct hc_metrics*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hc_metrics* FUNC_4 (struct in_conninfo*) ;
 struct hc_metrics* FUNC_5 (struct in_conninfo*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_6(struct in_conninfo *VAR_6, struct hc_metrics_lite *VAR_7)
{
 struct hc_metrics *VAR_8;

 if (!VAR_1)
  return;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 == ((void*)0)) {
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8 == ((void*)0))
   return;
 }
 VAR_8->rmx_updates++;
 VAR_8->rmx_expire = VAR_0.expire;

 if (VAR_7->rmx_rtt != 0) {
  if (VAR_8->rmx_rtt == 0)
   VAR_8->rmx_rtt = VAR_7->rmx_rtt;
  else
   VAR_8->rmx_rtt = ((uint64_t)VAR_8->rmx_rtt +
       (uint64_t)VAR_7->rmx_rtt) / 2;
  FUNC_2(VAR_3);
 }
 if (VAR_7->rmx_rttvar != 0) {
         if (VAR_8->rmx_rttvar == 0)
   VAR_8->rmx_rttvar = VAR_7->rmx_rttvar;
  else
   VAR_8->rmx_rttvar = ((uint64_t)VAR_8->rmx_rttvar +
       (uint64_t)VAR_7->rmx_rttvar) / 2;
  FUNC_2(VAR_4);
 }
 if (VAR_7->rmx_ssthresh != 0) {
  if (VAR_8->rmx_ssthresh == 0)
   VAR_8->rmx_ssthresh = VAR_7->rmx_ssthresh;
  else
   VAR_8->rmx_ssthresh =
       (VAR_8->rmx_ssthresh + VAR_7->rmx_ssthresh) / 2;
  FUNC_2(VAR_5);
 }
 if (VAR_7->rmx_cwnd != 0) {
  if (VAR_8->rmx_cwnd == 0)
   VAR_8->rmx_cwnd = VAR_7->rmx_cwnd;
  else
   VAR_8->rmx_cwnd = ((uint64_t)VAR_8->rmx_cwnd +
       (uint64_t)VAR_7->rmx_cwnd) / 2;

 }
 if (VAR_7->rmx_sendpipe != 0) {
  if (VAR_8->rmx_sendpipe == 0)
   VAR_8->rmx_sendpipe = VAR_7->rmx_sendpipe;
  else
   VAR_8->rmx_sendpipe =
       ((uint64_t)VAR_8->rmx_sendpipe +
       (uint64_t)VAR_7->rmx_sendpipe) /2;

 }
 if (VAR_7->rmx_recvpipe != 0) {
  if (VAR_8->rmx_recvpipe == 0)
   VAR_8->rmx_recvpipe = VAR_7->rmx_recvpipe;
  else
   VAR_8->rmx_recvpipe =
       ((uint64_t)VAR_8->rmx_recvpipe +
       (uint64_t)VAR_7->rmx_recvpipe) /2;

 }

 FUNC_1(&VAR_8->rmx_head->hch_bucket, VAR_8, VAR_2);
 FUNC_0(&VAR_8->rmx_head->hch_bucket, VAR_8, VAR_2);
 FUNC_3(&VAR_8->rmx_head->hch_mtx);
}
