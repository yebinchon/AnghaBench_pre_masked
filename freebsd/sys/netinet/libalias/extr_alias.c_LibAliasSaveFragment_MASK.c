
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct ip {int ip_id; int ip_src; } ;
struct alias_link {int dummy; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,int ) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct alias_link*,char*) ;

int
FUNC_4(struct libalias *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct alias_link *VAR_5;
 struct ip *VAR_6;

 FUNC_1(VAR_2);
 VAR_6 = (struct ip *)VAR_3;
 VAR_5 = FUNC_0(VAR_2, VAR_6->ip_src, VAR_6->ip_id);
 VAR_4 = VAR_0;
 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_5, VAR_3);
  VAR_4 = VAR_1;
 }
 FUNC_2(VAR_2);
 return (VAR_4);
}
