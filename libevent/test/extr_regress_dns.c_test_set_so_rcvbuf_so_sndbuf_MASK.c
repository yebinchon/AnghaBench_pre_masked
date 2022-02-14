
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_base {int dummy; } ;
struct basic_test_data {int base; } ;


 int FUNC_0 (struct evdns_base*,int ) ;
 int FUNC_1 (struct evdns_base*,char*) ;
 struct evdns_base* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct evdns_base*,char*,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct basic_test_data *VAR_1 = VAR_0;
 struct evdns_base *VAR_2;

 VAR_2 = FUNC_2(VAR_1->base, 0);
 FUNC_4(VAR_2);

 FUNC_4(!FUNC_3(VAR_2, "so-rcvbuf", "10240"));
 FUNC_4(!FUNC_3(VAR_2, "so-sndbuf", "10240"));


 FUNC_4(!FUNC_1(VAR_2, "127.0.0.1"));

end:
 if (VAR_2)
  FUNC_0(VAR_2, 0);
}
