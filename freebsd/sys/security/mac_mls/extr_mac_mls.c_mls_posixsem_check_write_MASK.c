
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;
struct ksem {int dummy; } ;


 int VAR_0 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,struct mac_mls*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_2, struct ucred *VAR_3,
    struct ksem *VAR_4, struct label *VAR_5)
{
 struct mac_mls *VAR_6, *VAR_7;

 if (!VAR_1)
  return (0);

 VAR_6 = FUNC_0(VAR_2->cr_label);
 VAR_7 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_7, VAR_6))
  return (VAR_0);

 return (0);
}
