
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;

__attribute__((used)) static void
FUNC_2(struct ucred *VAR_0, struct label *VAR_1)
{
 struct mac_lomac *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_0(VAR_0->cr_label);

 FUNC_1(VAR_2, VAR_3);
}
