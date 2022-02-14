
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jail {char* path; char* hostname; char* jailname; int ip4s; int ip6s; struct in6_addr* ip6; struct in_addr* ip4; int version; } ;
struct in_addr {int s_addr; } ;
struct in6_addr {int dummy; } ;
typedef int j ;


 struct in6_addr VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jail*,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct jail*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3)
{
 struct jail VAR_4;
 struct in_addr VAR_5;




 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.version = VAR_2;
 VAR_4.path = "/";
 VAR_4.hostname = "test";
 VAR_4.jailname = "regressions/priv";
 VAR_5 = FUNC_2(VAR_1);
 VAR_4.ip4s = 1;
 VAR_4.ip4 = &VAR_5;




 if (FUNC_3(&VAR_4) < 0)
  FUNC_1(-1, "test %s: jail", VAR_3);
}
