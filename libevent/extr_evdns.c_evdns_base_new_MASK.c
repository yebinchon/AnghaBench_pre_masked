
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {int tv_sec; scalar_t__ tv_usec; } ;
struct evdns_base {int global_max_reissues; int global_max_retransmits; int global_max_nameserver_timeout; int global_randomize_case; int disable_when_inactive; int hostsdb; TYPE_3__ global_nameserver_probe_initial_timeout; TYPE_2__ global_getaddrinfo_allow_skew; int * global_search_state; TYPE_1__ global_timeout; scalar_t__ global_requests_waiting; scalar_t__ global_requests_inflight; scalar_t__ global_good_nameservers; struct event_base* event_base; int * server_head; int * req_heads; int lock; int * req_waiting_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct evdns_base*) ;
 int VAR_6 ;
 int FUNC_1 (struct evdns_base*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct evdns_base*) ;
 int FUNC_5 (struct evdns_base*,int ) ;
 int FUNC_6 (struct evdns_base*,int,char*) ;
 int FUNC_7 (struct evdns_base*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct evdns_base*,int ,int) ;
 struct evdns_base* FUNC_13 (int) ;

struct evdns_base *
FUNC_14(struct event_base *VAR_10, int VAR_11)
{
 struct evdns_base *VAR_12;

 if (FUNC_8() < 0) {
  FUNC_11(VAR_6, "Unable to seed random number generator; "
      "DNS can't run.");
  return ((void*)0);
 }




 FUNC_10(VAR_8);
 FUNC_9(VAR_9);

 VAR_12 = FUNC_13(sizeof(struct evdns_base));
 if (VAR_12 == ((void*)0))
  return (((void*)0));
 FUNC_12(VAR_12, 0, sizeof(struct evdns_base));
 VAR_12->req_waiting_head = ((void*)0);

 FUNC_2(VAR_12->lock, VAR_7);
 FUNC_0(VAR_12);


 VAR_12->req_heads = ((void*)0);

 FUNC_7(VAR_12, 64);

 VAR_12->server_head = ((void*)0);
 VAR_12->event_base = VAR_10;
 VAR_12->global_good_nameservers = VAR_12->global_requests_inflight =
  VAR_12->global_requests_waiting = 0;

 VAR_12->global_timeout.tv_sec = 5;
 VAR_12->global_timeout.tv_usec = 0;
 VAR_12->global_max_reissues = 1;
 VAR_12->global_max_retransmits = 3;
 VAR_12->global_max_nameserver_timeout = 3;
 VAR_12->global_search_state = ((void*)0);
 VAR_12->global_randomize_case = 1;
 VAR_12->global_getaddrinfo_allow_skew.tv_sec = 3;
 VAR_12->global_getaddrinfo_allow_skew.tv_usec = 0;
 VAR_12->global_nameserver_probe_initial_timeout.tv_sec = 10;
 VAR_12->global_nameserver_probe_initial_timeout.tv_usec = 0;

 FUNC_3(&VAR_12->hostsdb);







 if (VAR_11 & ~( VAR_4 | VAR_3 | VAR_5 | 0)) {
  VAR_11 = VAR_4;
  FUNC_11(VAR_6,
      "Unrecognized flag passed to evdns_base_new(). Assuming "
      "you meant EVDNS_BASE_INITIALIZE_NAMESERVERS.");
 }


 if (VAR_11 & VAR_4) {
  int VAR_13;
  int VAR_14 = VAR_0;
  if (VAR_11 & VAR_5) {
   VAR_14 |= VAR_1;
  }




  VAR_13 = FUNC_6(VAR_12, VAR_14, "/etc/resolv.conf");

  if (VAR_13) {
   FUNC_5(VAR_12, 0);
   return ((void*)0);
  }
 }
 if (VAR_11 & VAR_3) {
  VAR_12->disable_when_inactive = 1;
 }

 FUNC_1(VAR_12);
 return VAR_12;
}
