
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addrpolicy {int dummy; } ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,char*) ;
 scalar_t__ FUNC_3 (int,int ,struct in6_addrpolicy*) ;
 int FUNC_4 (struct in6_addrpolicy*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,struct in6_addrpolicy*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(char *VAR_4)
{
 struct in6_addrpolicy VAR_5;
 int VAR_6;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 if (FUNC_5((const char *)VAR_4, &VAR_5))
  FUNC_2(1, "bad prefix: %s", VAR_4);

 if ((VAR_6 = FUNC_6(VAR_0, VAR_3, VAR_1)) < 0)
  FUNC_1(1, "socket(UDP)");
 if (FUNC_3(VAR_6, VAR_2, &VAR_5))
  FUNC_1(1, "ioctl(SIOCDADDRCTL_POLICY)");

 FUNC_0(VAR_6);
}
