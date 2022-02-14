
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct ip {int ip_id; int ip_src; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,int ) ;
 int FUNC_1 (struct alias_link*,char**) ;
 int FUNC_2 (struct libalias*) ;
 int FUNC_3 (struct libalias*) ;
 int FUNC_4 (struct alias_link*,int ) ;
 int FUNC_5 (struct alias_link*,int *) ;

char *
FUNC_6(struct libalias *VAR_0, char *VAR_1)
{
 struct alias_link *VAR_2;
 char *VAR_3;
 struct ip *VAR_4;

 FUNC_2(VAR_0);
 VAR_4 = (struct ip *)VAR_1;
 VAR_2 = FUNC_0(VAR_0, VAR_4->ip_src, VAR_4->ip_id);
 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_2, &VAR_3);
  FUNC_5(VAR_2, ((void*)0));
  FUNC_4(VAR_2, 0);
 } else
  VAR_3 = ((void*)0);

 FUNC_3(VAR_0);
 return (VAR_3);
}
