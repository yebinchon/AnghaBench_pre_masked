
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls {int dummy; } ;
struct label {int dummy; } ;
struct inpcb {struct label* inp_label; } ;


 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,struct mac_mls*) ;

__attribute__((used)) static void
FUNC_2(struct label *VAR_0, struct inpcb *VAR_1)
{
 struct mac_mls *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_1->inp_label);
 VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_3);
}
