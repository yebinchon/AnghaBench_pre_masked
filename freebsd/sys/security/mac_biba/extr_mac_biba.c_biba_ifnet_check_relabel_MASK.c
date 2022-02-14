
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_biba*,int ) ;
 int FUNC_2 (struct mac_biba*) ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_1, struct ifnet *VAR_2,
    struct label *VAR_3, struct label *VAR_4)
{
 struct mac_biba *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_1->cr_label);
 VAR_6 = FUNC_0(VAR_4);





 VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (VAR_7)
  return (VAR_7);




 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return (VAR_7);

 return (0);
}
