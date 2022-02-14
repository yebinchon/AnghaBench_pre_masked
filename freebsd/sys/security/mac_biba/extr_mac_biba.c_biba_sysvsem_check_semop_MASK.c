
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct semid_kernel {int dummy; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_4, struct semid_kernel *VAR_5,
    struct label *VAR_6, size_t VAR_7)
{
 struct mac_biba *VAR_8, *VAR_9;

 if (!VAR_3)
  return (0);

 VAR_8 = FUNC_0(VAR_4->cr_label);
 VAR_9 = FUNC_0(VAR_6);

 if (VAR_7 & VAR_2)
  if (!FUNC_1(VAR_9, VAR_8))
   return (VAR_0);

 if (VAR_7 & VAR_1)
  if (!FUNC_1(VAR_8, VAR_9))
   return (VAR_0);

 return (0);
}
