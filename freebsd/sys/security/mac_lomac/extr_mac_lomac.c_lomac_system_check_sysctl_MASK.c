
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
struct sysctl_req {int * newptr; } ;
struct sysctl_oid {int oid_kind; } ;
struct mac_lomac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_lomac* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mac_lomac*) ;
 scalar_t__ FUNC_2 (struct mac_lomac*) ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_4, struct sysctl_oid *VAR_5,
    void *VAR_6, int VAR_7, struct sysctl_req *VAR_8)
{
 struct mac_lomac *VAR_9;

 if (!VAR_3)
  return (0);

 VAR_9 = FUNC_0(VAR_4->cr_label);





 if (VAR_8->newptr != ((void*)0) && (VAR_5->oid_kind & VAR_0) == 0) {





  if (FUNC_2(VAR_9))
   return (VAR_2);
 }

 return (0);
}
