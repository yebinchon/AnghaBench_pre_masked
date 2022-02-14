
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_base {int dummy; } ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct evdns_base*,char*) ;
 int FUNC_2 (struct evdns_base*) ;

__attribute__((used)) static void
FUNC_3(struct evdns_base *VAR_3, int VAR_4) {
 int VAR_5 = VAR_4 & VAR_0;
 if (VAR_4 & VAR_1)
  VAR_5 = 0;


 FUNC_0(VAR_3);
 if (VAR_4 & VAR_2)
  FUNC_2(VAR_3);
 if (VAR_5)
  FUNC_1(VAR_3, "127.0.0.1");
}
