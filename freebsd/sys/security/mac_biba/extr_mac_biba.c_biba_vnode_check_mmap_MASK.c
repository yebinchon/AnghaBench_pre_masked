
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_7, struct vnode *VAR_8,
    struct label *VAR_9, int VAR_10, int VAR_11)
{
 struct mac_biba *VAR_12, *VAR_13;





 if (!VAR_5 || !VAR_6)
  return (0);

 VAR_12 = FUNC_0(VAR_7->cr_label);
 VAR_13 = FUNC_0(VAR_9);

 if (VAR_10 & (VAR_3 | VAR_2)) {
  if (!FUNC_1(VAR_13, VAR_12))
   return (VAR_0);
 }
 if (((VAR_10 & VAR_4) != 0) && ((VAR_11 & VAR_1) != 0)) {
  if (!FUNC_1(VAR_12, VAR_13))
   return (VAR_0);
 }

 return (0);
}
