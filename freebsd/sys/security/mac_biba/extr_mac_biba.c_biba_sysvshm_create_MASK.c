
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct shmid_kernel {int dummy; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;


 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;

__attribute__((used)) static void
FUNC_2(struct ucred *VAR_0, struct shmid_kernel *VAR_1,
    struct label *VAR_2)
{
 struct mac_biba *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(VAR_0->cr_label);
 VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3, VAR_4);
}
