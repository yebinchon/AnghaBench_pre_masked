
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdns_base {TYPE_1__* global_search_state; int server_head; } ;
struct TYPE_2__ {scalar_t__ num_domains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct evdns_base*,char*) ;
 int FUNC_1 (struct evdns_base*,char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (struct evdns_base*,int) ;
 int FUNC_4 (char const* const,char**,size_t*,int ) ;
 int FUNC_5 (int ,char*,char const* const) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct evdns_base*,char*,int) ;
 int FUNC_8 (struct evdns_base*) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static int
FUNC_10(struct evdns_base *VAR_5, int VAR_6, const char *const VAR_7) {
 size_t VAR_8;
 char *VAR_9;
 char *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_5(VAR_4, "Parsing resolv.conf file %s", VAR_7);

 VAR_12 = VAR_6 & VAR_1;
 if (VAR_6 & VAR_2)
  VAR_12 = 0;

 if (VAR_6 & VAR_0) {
  char *VAR_13 = FUNC_2();
  FUNC_0(VAR_5, VAR_13);
  if (VAR_13)
   FUNC_6(VAR_13);
 }

 if (!VAR_7) {
  FUNC_3(VAR_5, VAR_6);
  return 1;
 }

 if ((VAR_11 = FUNC_4(VAR_7, &VAR_9, &VAR_8, 0)) < 0) {
  if (VAR_11 == -1) {

   FUNC_3(VAR_5, VAR_6);
   return 1;
  } else {
   return 2;
  }
 }

 VAR_10 = VAR_9;
 for (;;) {
  char *const VAR_14 = FUNC_9(VAR_10, '\n');
  if (!VAR_14) {
   FUNC_7(VAR_5, VAR_10, VAR_6);
   break;
  } else {
   *VAR_14 = 0;
   FUNC_7(VAR_5, VAR_10, VAR_6);
   VAR_10 = VAR_14 + 1;
  }
 }

 if (!VAR_5->server_head && VAR_12) {

  FUNC_1(VAR_5, "127.0.0.1");
  VAR_11 = 6;
 }
 if (VAR_6 & VAR_3 && (!VAR_5->global_search_state || VAR_5->global_search_state->num_domains == 0)) {
  FUNC_8(VAR_5);
 }

 FUNC_6(VAR_9);
 return VAR_11;
}
