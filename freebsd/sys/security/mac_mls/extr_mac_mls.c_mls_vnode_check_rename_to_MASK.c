
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,struct mac_mls*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_2, struct vnode *VAR_3,
    struct label *VAR_4, struct vnode *VAR_5, struct label *VAR_6,
    int VAR_7, struct componentname *VAR_8)
{
 struct mac_mls *VAR_9, *VAR_10;

 if (!VAR_1)
  return (0);

 VAR_9 = FUNC_0(VAR_2->cr_label);
 VAR_10 = FUNC_0(VAR_4);

 if (!FUNC_1(VAR_10, VAR_9))
  return (VAR_0);

 if (VAR_5 != ((void*)0)) {
  VAR_10 = FUNC_0(VAR_6);

  if (!FUNC_1(VAR_10, VAR_9))
   return (VAR_0);
 }

 return (0);
}
