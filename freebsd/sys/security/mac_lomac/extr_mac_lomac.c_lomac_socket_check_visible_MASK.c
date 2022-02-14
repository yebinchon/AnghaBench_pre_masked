
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct socket {int dummy; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_2, struct socket *VAR_3,
    struct label *VAR_4)
{
 struct mac_lomac *VAR_5, *VAR_6;

 if (!VAR_1)
  return (0);

 VAR_5 = FUNC_0(VAR_2->cr_label);
 VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_3);
 if (!FUNC_3(VAR_6, VAR_5)) {
  FUNC_2(VAR_3);
  return (VAR_0);
 }
 FUNC_2(VAR_3);

 return (0);
}
