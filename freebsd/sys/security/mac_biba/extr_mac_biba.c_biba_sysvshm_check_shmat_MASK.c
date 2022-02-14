
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct shmid_kernel {int dummy; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_3, struct shmid_kernel *VAR_4,
    struct label *VAR_5, int VAR_6)
{
 struct mac_biba *VAR_7, *VAR_8;

 if (!VAR_2)
  return (0);

 VAR_7 = FUNC_0(VAR_3->cr_label);
 VAR_8 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_8, VAR_7))
  return (VAR_0);
 if ((VAR_6 & VAR_1) == 0) {
  if (!FUNC_1(VAR_7, VAR_8))
   return (VAR_0);
 }

 return (0);
}
