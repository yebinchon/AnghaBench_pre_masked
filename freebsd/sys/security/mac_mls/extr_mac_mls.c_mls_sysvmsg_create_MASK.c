
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct msqid_kernel {int dummy; } ;
struct msg {int dummy; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;


 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,struct mac_mls*) ;

__attribute__((used)) static void
FUNC_2(struct ucred *VAR_0, struct msqid_kernel *VAR_1,
    struct label *VAR_2, struct msg *VAR_3, struct label *VAR_4)
{
 struct mac_mls *VAR_5, *VAR_6;


 VAR_5 = FUNC_0(VAR_0->cr_label);
 VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_5, VAR_6);
}
