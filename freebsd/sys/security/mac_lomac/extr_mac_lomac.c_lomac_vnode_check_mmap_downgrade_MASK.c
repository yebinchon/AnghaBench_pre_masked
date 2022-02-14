
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 struct mac_lomac* FUNC_0 (struct label*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct ucred *VAR_3, struct vnode *VAR_4,
    struct label *VAR_5, int *VAR_6)
{
 struct mac_lomac *VAR_7, *VAR_8;





 if (!VAR_1 || !VAR_2)
  return;

 VAR_7 = FUNC_0(VAR_3->cr_label);
 VAR_8 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_7, VAR_8))
  *VAR_6 &= ~VAR_0;
}
