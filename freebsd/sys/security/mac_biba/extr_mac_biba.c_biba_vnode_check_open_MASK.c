
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;
typedef int accmode_t ;


 int VAR_0 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_6, struct vnode *VAR_7,
    struct label *VAR_8, accmode_t VAR_9)
{
 struct mac_biba *VAR_10, *VAR_11;

 if (!VAR_5)
  return (0);

 VAR_10 = FUNC_0(VAR_6->cr_label);
 VAR_11 = FUNC_0(VAR_8);


 if (VAR_9 & (VAR_3 | VAR_1 | VAR_4)) {
  if (!FUNC_1(VAR_11, VAR_10))
   return (VAR_0);
 }
 if (VAR_9 & VAR_2) {
  if (!FUNC_1(VAR_10, VAR_11))
   return (VAR_0);
 }

 return (0);
}
