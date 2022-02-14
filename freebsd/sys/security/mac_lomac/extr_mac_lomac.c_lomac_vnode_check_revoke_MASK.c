
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

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_2, struct vnode *VAR_3,
    struct label *VAR_4)
{
 struct mac_lomac *VAR_5, *VAR_6;

 if (!VAR_1)
  return (0);

 VAR_5 = FUNC_0(VAR_2->cr_label);
 VAR_6 = FUNC_0(VAR_4);

 if (!FUNC_1(VAR_5, VAR_6))
  return (VAR_0);

 return (0);
}
