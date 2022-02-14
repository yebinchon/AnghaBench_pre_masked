
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct pipepair {int dummy; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_0 ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*,char*,char*,int *) ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_1, struct pipepair *VAR_2,
    struct label *VAR_3)
{
 struct mac_lomac *VAR_4, *VAR_5;

 if (!VAR_0)
  return (0);

 VAR_4 = FUNC_0(VAR_1->cr_label);
 VAR_5 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_5, VAR_4))
  return (FUNC_2(VAR_4, VAR_5, "reading", "pipe", ((void*)0)));

 return (0);
}
