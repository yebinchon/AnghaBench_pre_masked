
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_0 ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*,char*,char*,struct vnode*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_2, struct ucred *VAR_3,
    struct vnode *VAR_4, struct label *VAR_5)
{
 struct mac_lomac *VAR_6, *VAR_7;

 if (!VAR_0 || !VAR_1)
  return (0);

 VAR_6 = FUNC_0(VAR_2->cr_label);
 VAR_7 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_7, VAR_6))
  return (FUNC_2(VAR_6, VAR_7, "reading", "file", VAR_4));

 return (0);
}
