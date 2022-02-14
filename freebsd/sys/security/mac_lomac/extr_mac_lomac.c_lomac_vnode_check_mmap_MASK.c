
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int VAR_5 ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_3 (struct mac_lomac*,struct mac_lomac*,char*,char*,struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_6, struct vnode *VAR_7,
    struct label *VAR_8, int VAR_9, int VAR_10)
{
 struct mac_lomac *VAR_11, *VAR_12;





 if (!VAR_5)
  return (0);

 VAR_11 = FUNC_0(VAR_6->cr_label);
 VAR_12 = FUNC_0(VAR_8);

 if (((VAR_9 & VAR_4) != 0) && ((VAR_10 & VAR_1) != 0)) {
  if (!FUNC_2(VAR_11, VAR_12))
   return (VAR_0);
 }
 if (VAR_9 & (VAR_3 | VAR_2)) {
  if (!FUNC_1(VAR_12, VAR_11))
   return (FUNC_3(VAR_11, VAR_12, "mapping", "file", VAR_7));
 }

 return (0);
}
