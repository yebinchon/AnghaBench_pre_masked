
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_base {int dummy; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 struct evdns_base* VAR_0 ;
 int FUNC_2 (struct evdns_base*,char const*) ;

int
FUNC_3(struct evdns_base *VAR_1, const char *VAR_2)
{
 int VAR_3;
 if (!VAR_1)
  VAR_1 = VAR_0;
 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1);
 return VAR_3;
}
