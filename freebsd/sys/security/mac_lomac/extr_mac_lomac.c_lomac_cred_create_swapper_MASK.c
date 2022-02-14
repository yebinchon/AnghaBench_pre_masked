
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
struct mac_lomac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_lomac* FUNC_0 (int ) ;
 int FUNC_1 (struct mac_lomac*,int ,int ,int ,int ) ;
 int FUNC_2 (struct mac_lomac*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ucred *VAR_3)
{
 struct mac_lomac *VAR_4;

 VAR_4 = FUNC_0(VAR_3->cr_label);

 FUNC_2(VAR_4, VAR_0, 0);
 FUNC_1(VAR_4, VAR_2, 0, VAR_1, 0);
}
