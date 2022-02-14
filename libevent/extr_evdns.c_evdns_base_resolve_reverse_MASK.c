
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct request {int dummy; } ;
struct in_addr {int s_addr; } ;
struct evdns_request {int * current_req; } ;
struct evdns_base {int dummy; } ;
typedef int evdns_callback_type ;
typedef int buf ;
typedef scalar_t__ a ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int FUNC_1 (struct evdns_base*) ;
 int FUNC_2 (struct in_addr const*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,char*,int,int,int,int) ;
 int FUNC_4 (int ,char*,char*) ;
 struct evdns_request* FUNC_5 (int,int) ;
 int FUNC_6 (struct evdns_request*) ;
 int FUNC_7 (int ) ;
 struct request* FUNC_8 (struct evdns_base*,struct evdns_request*,int ,char*,int,int ,void*) ;
 int FUNC_9 (struct request*) ;

struct evdns_request *
FUNC_10(struct evdns_base *VAR_2, const struct in_addr *VAR_3, int VAR_4, evdns_callback_type VAR_5, void *VAR_6) {
 char VAR_7[32];
 struct evdns_request *VAR_8;
 struct request *VAR_9;
 u32 VAR_10;
 FUNC_2(VAR_3);
 VAR_10 = FUNC_7(VAR_3->s_addr);
 FUNC_3(VAR_7, sizeof(VAR_7), "%d.%d.%d.%d.in-addr.arpa",
   (int)(u8)((VAR_10 )&0xff),
   (int)(u8)((VAR_10>>8 )&0xff),
   (int)(u8)((VAR_10>>16)&0xff),
   (int)(u8)((VAR_10>>24)&0xff));
 VAR_8 = FUNC_5(1, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_0, "Resolve requested for %s (reverse)", VAR_7);
 FUNC_0(VAR_2);
 VAR_9 = FUNC_8(VAR_2, VAR_8, VAR_1, VAR_7, VAR_4, VAR_5, VAR_6);
 if (VAR_9)
  FUNC_9(VAR_9);
 if (VAR_8->current_req == ((void*)0)) {
  FUNC_6(VAR_8);
  VAR_8 = ((void*)0);
 }
 FUNC_1(VAR_2);
 return (VAR_8);
}
