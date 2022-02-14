
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int VAR_1 ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_3,
    struct ucred *VAR_4, struct vnode *VAR_5, struct label *VAR_6)
{
 struct mac_lomac *VAR_7, *VAR_8;

 if (!VAR_1 || !VAR_2)
  return (0);

 VAR_7 = FUNC_0(VAR_3->cr_label);
 VAR_8 = FUNC_0(VAR_6);

 if (!FUNC_1(VAR_7, VAR_8))
  return (VAR_0);

 return (0);
}
