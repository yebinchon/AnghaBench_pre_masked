
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {void* s_addr; } ;
struct in6_addr {int* s6_addr; } ;
struct evdns_server_request {int nquestions; TYPE_1__** questions; } ;
typedef int ans6 ;
struct TYPE_2__ {int type; int dns_question_class; char* name; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct evdns_server_request*,char const*,int,void**,int) ;
 int FUNC_4 (struct evdns_server_request*,char const*,int,int**,int) ;
 int FUNC_5 (struct evdns_server_request*,char const*,char*,int) ;
 int FUNC_6 (struct evdns_server_request*) ;
 int FUNC_7 (struct evdns_server_request*,int) ;
 int FUNC_8 (char const*,char*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct in6_addr*,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct evdns_server_request *VAR_3, void *VAR_4)
{
 int VAR_5;
 int *VAR_6=VAR_4;
 int VAR_7=0;
 ++*VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->nquestions; ++VAR_5) {
  const int VAR_8 = VAR_3->questions[VAR_5]->type;
  const int VAR_9 = VAR_3->questions[VAR_5]->dns_question_class;
  const char *VAR_10 = VAR_3->questions[VAR_5]->name;
  struct in_addr VAR_11;
  struct in6_addr VAR_12;
  FUNC_10(&VAR_12, 0, sizeof(VAR_12));

  FUNC_0(("Got question about %s, type=%d", VAR_10, VAR_8));

  if (VAR_8 == VAR_1 &&
      VAR_9 == VAR_0 &&
      !FUNC_8(VAR_10, "nobodaddy.example.com")) {
   VAR_11.s_addr = FUNC_9(0x7f000001);
   FUNC_3(VAR_3, VAR_10,
       1, &VAR_11.s_addr, 2000);
   VAR_7 = 1;
  } else if (!FUNC_8(VAR_10,
   "nosuchplace.example.com")) {

  } else if (!FUNC_8(VAR_10,
   "both.example.com")) {
   if (VAR_8 == VAR_1) {
    VAR_11.s_addr = FUNC_9(0x50502020);
    FUNC_3(VAR_3, VAR_10,
        1, &VAR_11.s_addr, 2000);
    VAR_7 = 1;
   } else if (VAR_8 == VAR_2) {
    VAR_12[0] = 0x80;
    VAR_12[1] = 0xff;
    VAR_12[14] = 0xbb;
    VAR_12[15] = 0xbb;
    FUNC_4(VAR_3, VAR_10,
        1, &VAR_12, 2000);
    VAR_7 = 1;
   }
   FUNC_5(VAR_3, VAR_10,
       "both-canonical.example.com", 1000);
  } else if (!FUNC_8(VAR_10,
   "v4only.example.com") ||
      !FUNC_8(VAR_10, "v4assert.example.com")) {
   if (VAR_8 == VAR_1) {
    VAR_11.s_addr = FUNC_9(0x12345678);
    FUNC_3(VAR_3, VAR_10,
        1, &VAR_11.s_addr, 2000);
    VAR_7 = 1;
   } else if (!FUNC_8(VAR_10,
    "v4assert.example.com")) {
    FUNC_1(("Got an AAAA request for v4assert"));
   }
  } else if (!FUNC_8(VAR_10,
   "v6only.example.com") ||
      !FUNC_8(VAR_10, "v6assert.example.com")) {
   if (VAR_8 == VAR_2) {
    VAR_12[0] = 0x0b;
    VAR_12[1] = 0x0b;
    VAR_12[14] = 0xf0;
    VAR_12[15] = 0x0d;
    FUNC_4(VAR_3, VAR_10,
        1, &VAR_12, 2000);
    VAR_7 = 1;
   } else if (!FUNC_8(VAR_10,
    "v6assert.example.com")) {
    FUNC_1(("Got a A request for v6assert"));
   }
  } else if (!FUNC_8(VAR_10,
   "v6timeout.example.com")) {
   if (VAR_8 == VAR_1) {
    VAR_11.s_addr = FUNC_9(0xabcdef01);
    FUNC_3(VAR_3, VAR_10,
        1, &VAR_11.s_addr, 2000);
    VAR_7 = 1;
   } else if (VAR_8 == VAR_2) {

    FUNC_6(VAR_3);
    return;
   }
  } else if (!FUNC_8(VAR_10,
   "v4timeout.example.com")) {
   if (VAR_8 == VAR_2) {
    VAR_12[0] = 0x0a;
    VAR_12[1] = 0x0a;
    VAR_12[14] = 0xff;
    VAR_12[15] = 0x01;
    FUNC_4(VAR_3, VAR_10,
        1, &VAR_12, 2000);
    VAR_7 = 1;
   } else if (VAR_8 == VAR_1) {

    FUNC_6(VAR_3);
    return;
   }
  } else if (!FUNC_8(VAR_10,
   "v6timeout-nonexist.example.com")) {
   if (VAR_8 == VAR_1) {

   } else if (VAR_8 == VAR_2) {

    FUNC_6(VAR_3);
    return;
   }
  } else if (!FUNC_8(VAR_10,
   "all-timeout.example.com")) {

   FUNC_6(VAR_3);
   return;
  } else {
   FUNC_2(("Got weird request for %s",VAR_10));
  }
 }
 if (VAR_7) {
  FUNC_0(("answering"));
  FUNC_7(VAR_3, 0);
 } else {
  FUNC_0(("saying nexist."));
  FUNC_7(VAR_3, 3);
 }
}
