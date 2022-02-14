
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
struct sysctl_req {int * newptr; } ;
struct sysctl_oid {int oid_kind; } ;
struct mac_biba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_biba* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mac_biba*) ;
 int FUNC_2 (struct mac_biba*) ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_3, struct sysctl_oid *VAR_4,
    void *VAR_5, int VAR_6, struct sysctl_req *VAR_7)
{
 struct mac_biba *VAR_8;
 int VAR_9;

 if (!VAR_2)
  return (0);

 VAR_8 = FUNC_0(VAR_3->cr_label);





 if (VAR_7->newptr != ((void*)0) && (VAR_4->oid_kind & VAR_0) == 0) {
  if (!FUNC_1(VAR_8))
   return (VAR_1);

  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9)
   return (VAR_9);
 }

 return (0);
}
