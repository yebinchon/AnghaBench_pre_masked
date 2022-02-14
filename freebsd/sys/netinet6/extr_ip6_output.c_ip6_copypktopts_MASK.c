
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_pktopts {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip6_pktopts*,struct ip6_pktopts*,int) ;
 int FUNC_1 (struct ip6_pktopts*,int ) ;
 int FUNC_2 (struct ip6_pktopts*) ;
 struct ip6_pktopts* FUNC_3 (int,int ,int) ;

struct ip6_pktopts *
FUNC_4(struct ip6_pktopts *VAR_1, int VAR_2)
{
 int VAR_3;
 struct ip6_pktopts *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0, VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_4);

 if ((VAR_3 = FUNC_0(VAR_4, VAR_1, VAR_2)) != 0) {
  FUNC_1(VAR_4, VAR_0);
  return (((void*)0));
 }

 return (VAR_4);
}
