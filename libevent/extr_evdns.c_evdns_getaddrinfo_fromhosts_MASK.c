
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sa_family; } ;
struct TYPE_3__ {TYPE_2__ sa; } ;
struct hosts_entry {int addrlen; TYPE_1__ addr; } ;
struct evutil_addrinfo {int ai_family; int ai_addr; } ;
struct evdns_base {int dummy; } ;
typedef int ev_uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct evutil_addrinfo* FUNC_2 (struct evutil_addrinfo*,struct evutil_addrinfo*) ;
 int FUNC_3 (struct evutil_addrinfo*) ;
 struct evutil_addrinfo* FUNC_4 (TYPE_2__*,int ,struct evutil_addrinfo*) ;
 struct hosts_entry* FUNC_5 (struct evdns_base*,char const*,struct hosts_entry*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct evdns_base *VAR_4,
    const char *VAR_5, struct evutil_addrinfo *VAR_6, ev_uint16_t VAR_7,
    struct evutil_addrinfo **VAR_8)
{
 int VAR_9 = 0;
 struct hosts_entry *VAR_10;
 struct evutil_addrinfo *VAR_11=((void*)0);
 int VAR_12 = VAR_6->ai_family;

 FUNC_0(VAR_4);
 for (VAR_10 = FUNC_5(VAR_4, VAR_5, ((void*)0)); VAR_10;
     VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_10)) {
  struct evutil_addrinfo *VAR_13;
  ++VAR_9;
  if ((VAR_10->addr.sa.sa_family == VAR_0 && VAR_12 == VAR_3) ||
      (VAR_10->addr.sa.sa_family == VAR_1 && VAR_12 == VAR_2))
   continue;
  VAR_13 = FUNC_4(&VAR_10->addr.sa, VAR_10->addrlen, VAR_6);
  if (!VAR_13) {
   VAR_9 = 0;
   goto out;
  }
  FUNC_6(VAR_13->ai_addr, VAR_7);
  VAR_11 = FUNC_2(VAR_11, VAR_13);
 }
 FUNC_1(VAR_4);
out:
 if (VAR_9) {


  *VAR_8 = VAR_11;
  return 0;
 } else {
  if (VAR_11)
   FUNC_3(VAR_11);
  return -1;
 }
}
