
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_name; int h_aliases; int h_addr; int h_addrtype; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int ,char*,char*,char*,char*,int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(const struct hostent *VAR_1)
{
 char VAR_2[VAR_0];

 FUNC_0(VAR_1 != ((void*)0));
 if (FUNC_1(VAR_1->h_addrtype, VAR_1->h_addr, VAR_2, sizeof(VAR_2)) == ((void*)0))
  FUNC_3(VAR_2, "# unknown", sizeof(VAR_2));
 FUNC_2(VAR_1->h_aliases, "  ", " ", "%-16s  %s", VAR_2, VAR_1->h_name);
}
