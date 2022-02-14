
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
struct mac_biba {int dummy; } ;


 int VAR_0 ;
 struct mac_biba* FUNC_0 (int ) ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_2, struct ucred *VAR_3)
{
 struct mac_biba *VAR_4, *VAR_5;

 if (!VAR_1)
  return (0);

 VAR_4 = FUNC_0(VAR_2->cr_label);
 VAR_5 = FUNC_0(VAR_3->cr_label);


 if (!FUNC_1(VAR_5, VAR_4))
  return (VAR_0);

 return (0);
}
