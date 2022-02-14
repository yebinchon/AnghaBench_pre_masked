
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ucred {int dummy; } ;
struct ip6_pktopts {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip6_pktopts*) ;
 int FUNC_1 (int,int *,int,struct ip6_pktopts*,struct ucred*,int,int ,int) ;
 struct ip6_pktopts* FUNC_2 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, u_char *VAR_4, int VAR_5, struct ip6_pktopts **VAR_6,
    struct ucred *VAR_7, int VAR_8)
{
 struct ip6_pktopts *VAR_9;

 if (*VAR_6 == ((void*)0)) {
  *VAR_6 = FUNC_2(sizeof(struct ip6_pktopts), VAR_1,
      VAR_2);
  if (*VAR_6 == ((void*)0))
   return (VAR_0);
  FUNC_0(*VAR_6);
 }
 VAR_9 = *VAR_6;

 return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_9, VAR_7, 1, 0, VAR_8));
}
