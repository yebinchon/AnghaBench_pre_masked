
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addrpolicy {void* label; void* preced; } ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,char*) ;
 scalar_t__ FUNC_4 (int,int ,struct in6_addrpolicy*) ;
 int FUNC_5 (struct in6_addrpolicy*,int ,int) ;
 scalar_t__ FUNC_6 (char const*,struct in6_addrpolicy*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(char *VAR_4, char *VAR_5, char *VAR_6)
{
 struct in6_addrpolicy VAR_7;
 int VAR_8;

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));

 if (FUNC_6((const char *)VAR_4, &VAR_7))
  FUNC_3(1, "bad prefix: %s", VAR_4);
 VAR_7.preced = FUNC_0(VAR_5);
 VAR_7.label = FUNC_0(VAR_6);

 if ((VAR_8 = FUNC_7(VAR_0, VAR_3, VAR_1)) < 0)
  FUNC_2(1, "socket(UDP)");
 if (FUNC_4(VAR_8, VAR_2, &VAR_7))
  FUNC_2(1, "ioctl(SIOCAADDRCTL_POLICY)");

 FUNC_1(VAR_8);
}
