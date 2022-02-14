
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_lomac {int ml_flags; int ml_auxsingle; int ml_single; } ;
struct label {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_3, struct vnode *VAR_4,
    struct label *VAR_5, struct componentname *VAR_6, struct vattr *VAR_7)
{
 struct mac_lomac *VAR_8, *VAR_9;

 if (!VAR_2)
  return (0);

 VAR_8 = FUNC_0(VAR_3->cr_label);
 VAR_9 = FUNC_0(VAR_5);

 if (!FUNC_2(VAR_8, VAR_9))
  return (VAR_0);
 if (VAR_9->ml_flags & VAR_1 &&
     !FUNC_1(&VAR_8->ml_single, &VAR_9->ml_auxsingle))
  return (VAR_0);

 return (0);
}
