
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent {int n_name; int n_aliases; int n_addrtype; int n_net; } ;
struct in_addr {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct in_addr FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,struct in_addr*,char*,int) ;
 int FUNC_3 (int ,char*,char*,char*,int ,char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(const struct netent *VAR_1)
{
 char VAR_2[VAR_0];
 struct in_addr VAR_3;

 FUNC_0(VAR_1 != ((void*)0));
 VAR_3 = FUNC_1(VAR_1->n_net, 0);
 if (FUNC_2(VAR_1->n_addrtype, &VAR_3, VAR_2, sizeof(VAR_2)) == ((void*)0))
  FUNC_4(VAR_2, "# unknown", sizeof(VAR_2));
 FUNC_3(VAR_1->n_aliases, "  ", " ", "%-16s  %s", VAR_1->n_name, VAR_2);
}
