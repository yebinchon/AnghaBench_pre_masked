
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef struct evutil_addrinfo {int ai_flags; scalar_t__ ai_family; } const evutil_addrinfo ;
struct TYPE_8__ {TYPE_2__* r; int type; } ;
struct evdns_getaddrinfo_request {TYPE_3__ ipv6_request; TYPE_3__ ipv4_request; int timeout; int cname_result; struct evdns_base* evdns_base; void* user_data; int (* user_cb ) (int,struct evutil_addrinfo const*,void*) ;int port; struct evutil_addrinfo const hints; } ;
struct evdns_base {int event_base; } ;
typedef int hints ;
typedef int (* evdns_getaddrinfo_cb ) (int,struct evutil_addrinfo const*,void*) ;
typedef int ev_uint16_t ;
struct TYPE_7__ {TYPE_1__* current_req; } ;
struct TYPE_6__ {int * put_cname_in_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evdns_base*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct evdns_base*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct evdns_base* VAR_12 ;
 TYPE_2__* FUNC_2 (struct evdns_base*,char const*,int ,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (struct evdns_base*,char const*,int ,int ,TYPE_3__*) ;
 int FUNC_4 (struct evdns_base*,char const*,struct evutil_addrinfo const*,int,struct evutil_addrinfo const**) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *,int ,int ,struct evdns_getaddrinfo_request*) ;
 int FUNC_6 (struct evutil_addrinfo const*) ;
 int FUNC_7 (char const*,char const*,struct evutil_addrinfo const*,struct evutil_addrinfo const**) ;
 int FUNC_8 (char const*,char const*,struct evutil_addrinfo const*,struct evutil_addrinfo const**,int*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct evutil_addrinfo const*,struct evutil_addrinfo const*,int) ;
 int FUNC_11 (struct evutil_addrinfo const*,int ,int) ;
 struct evdns_getaddrinfo_request* FUNC_12 (int,int) ;
 int FUNC_13 (struct evdns_getaddrinfo_request*) ;

struct evdns_getaddrinfo_request *
FUNC_14(struct evdns_base *VAR_15,
    const char *VAR_16, const char *VAR_17,
    const struct evutil_addrinfo *VAR_18,
    evdns_getaddrinfo_cb VAR_19, void *VAR_20)
{
 struct evdns_getaddrinfo_request *VAR_21;
 struct evutil_addrinfo VAR_22;
 struct evutil_addrinfo *VAR_23 = ((void*)0);
 int VAR_24;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;

 if (!VAR_15) {
  VAR_15 = VAR_12;
  if (!VAR_15) {
   FUNC_9(VAR_3,
       "Call to getaddrinfo_async with no "
       "evdns_base configured.");
   VAR_19(VAR_6, ((void*)0), VAR_20);
   return ((void*)0);
  }
 }


 if ((VAR_18 && (VAR_18->ai_flags & VAR_5))) {
  VAR_23 = ((void*)0);
  VAR_24 = FUNC_7(VAR_16, VAR_17, VAR_18, &VAR_23);
  VAR_19(VAR_24, VAR_23, VAR_20);
  return ((void*)0);
 }

 if (VAR_18) {
  FUNC_10(&VAR_22, VAR_18, sizeof(VAR_22));
 } else {
  FUNC_11(&VAR_22, 0, sizeof(VAR_22));
  VAR_22.ai_family = VAR_11;
 }

 FUNC_6(&VAR_22);






 VAR_24 = FUNC_8(VAR_16, VAR_17, &VAR_22, &VAR_23, &VAR_25);
 if (VAR_24 != VAR_8) {
  VAR_19(VAR_24, VAR_23, VAR_20);
  return ((void*)0);
 }


 if (!FUNC_4(VAR_15, VAR_16, &VAR_22, VAR_25, &VAR_23)) {
  VAR_19(0, VAR_23, VAR_20);
  return ((void*)0);
 }




 VAR_21 = FUNC_12(1,sizeof(struct evdns_getaddrinfo_request));
 if (!VAR_21) {
  VAR_19(VAR_7, ((void*)0), VAR_20);
  return ((void*)0);
 }

 FUNC_10(&VAR_21->hints, &VAR_22, sizeof(VAR_21->hints));
 VAR_21->port = (ev_uint16_t)VAR_25;
 VAR_21->ipv4_request.type = VAR_0;
 VAR_21->ipv6_request.type = VAR_1;
 VAR_21->user_cb = VAR_19;
 VAR_21->user_data = VAR_20;
 VAR_21->evdns_base = VAR_15;

 VAR_26 = (VAR_22.ai_flags & VAR_4);
 FUNC_0(VAR_15);

 if (VAR_22.ai_family != VAR_10) {
  FUNC_9(VAR_2, "Sending request for %s on ipv4 as %p",
      VAR_16, &VAR_21->ipv4_request);

  VAR_21->ipv4_request.r = FUNC_2(VAR_15,
      VAR_16, 0, VAR_13,
      &VAR_21->ipv4_request);
  if (VAR_26 && VAR_21->ipv4_request.r)
   VAR_21->ipv4_request.r->current_req->put_cname_in_ptr =
       &VAR_21->cname_result;
 }
 if (VAR_22.ai_family != VAR_9) {
  FUNC_9(VAR_2, "Sending request for %s on ipv6 as %p",
      VAR_16, &VAR_21->ipv6_request);

  VAR_21->ipv6_request.r = FUNC_3(VAR_15,
      VAR_16, 0, VAR_13,
      &VAR_21->ipv6_request);
  if (VAR_26 && VAR_21->ipv6_request.r)
   VAR_21->ipv6_request.r->current_req->put_cname_in_ptr =
       &VAR_21->cname_result;
 }

 FUNC_5(&VAR_21->timeout, VAR_15->event_base,
     VAR_14, VAR_21);

 VAR_27 = (VAR_21->ipv4_request.r || VAR_21->ipv6_request.r);

 FUNC_1(VAR_15);

 if (VAR_27) {
  return VAR_21;
 } else {
  FUNC_13(VAR_21);
  VAR_19(VAR_6, ((void*)0), VAR_20);
  return ((void*)0);
 }
}
