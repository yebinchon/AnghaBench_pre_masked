
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(int VAR_5, int VAR_6, struct test *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = FUNC_2(VAR_2, VAR_4, VAR_3);
 if (VAR_9 < 0)
  VAR_8 = -1;
 else
  VAR_8 = 0;




 if (VAR_5 && VAR_6)
  FUNC_1("priv_netinet_ipsec_pfkey(asroot, injail)", VAR_8,
      -1, VAR_1);
 if (VAR_5 && !VAR_6)
  FUNC_1("priv_netinet_ipsec_pfkey(asroot, !injail)", VAR_8,
      0, 0);
 if (!VAR_5 && VAR_6)
  FUNC_1("priv_netinet_ipsec_pfkey(!asroot, injail)", VAR_8,
      -1, VAR_1);
 if (!VAR_5 && !VAR_6)
  FUNC_1("priv_netinet_ipsec_pfkey(!asroot, !injail)", VAR_8,
      -1, VAR_0);
 if (VAR_9 >= 0)
  (void)FUNC_0(VAR_9);
}
