
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct request {struct nameserver* ns; } ;
struct nameserver {int base; struct evdns_request* probe_request; int address; } ;
struct evdns_request {int dummy; } ;
typedef int addrbuf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sockaddr*,char*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 struct evdns_request* FUNC_3 (int,int) ;
 int FUNC_4 (struct evdns_request*) ;
 int VAR_3 ;
 struct request* FUNC_5 (int ,struct evdns_request*,int ,char*,int ,int ,struct nameserver* const) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct nameserver *const VAR_4) {
 struct evdns_request *VAR_5;
 struct request *VAR_6;
 char VAR_7[128];



 FUNC_0(VAR_4->base);
 FUNC_2(VAR_1, "Sending probe to %s",
     FUNC_1(
      (struct sockaddr *)&VAR_4->address,
      VAR_7, sizeof(VAR_7)));
 VAR_5 = FUNC_3(1, sizeof(*VAR_5));
 if (!VAR_5) return;
 VAR_6 = FUNC_5(VAR_4->base, VAR_5, VAR_2, "google.com", VAR_0, VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_4(VAR_5);
  return;
 }
 VAR_4->probe_request = VAR_5;

 FUNC_7(VAR_6, FUNC_8(VAR_4->base));
 VAR_6->ns = VAR_4;
 FUNC_6(VAR_6);
}
