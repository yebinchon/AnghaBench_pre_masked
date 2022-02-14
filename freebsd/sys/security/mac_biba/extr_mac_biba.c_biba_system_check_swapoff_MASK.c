
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int cr_label; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;


 struct mac_biba* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mac_biba*) ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_1, struct vnode *VAR_2,
    struct label *VAR_3)
{
 struct mac_biba *VAR_4;
 int VAR_5;

 if (!VAR_0)
  return (0);

 VAR_4 = FUNC_0(VAR_1->cr_label);

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return (VAR_5);

 return (0);
}
