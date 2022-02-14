
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
struct mac_biba {int dummy; } ;


 struct mac_biba* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mac_biba*) ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_1, int VAR_2)
{
 struct mac_biba *VAR_3;
 int VAR_4;

 if (!VAR_0)
  return (0);

 VAR_3 = FUNC_0(VAR_1->cr_label);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return (VAR_4);

 return (0);
}
