
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_lomac {int ml_flags; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,int) ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;
 scalar_t__ FUNC_3 (struct mac_lomac*) ;
 int FUNC_4 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_5 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_6 (struct mac_lomac*) ;

__attribute__((used)) static int
FUNC_7(struct ucred *VAR_3, struct vnode *VAR_4,
    struct label *VAR_5, struct label *VAR_6)
{
 struct mac_lomac *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_5);
 VAR_8 = FUNC_0(VAR_6);
 VAR_9 = FUNC_0(VAR_3->cr_label);





 VAR_10 = FUNC_1(VAR_8,
     VAR_2 | VAR_1);
 if (VAR_10)
  return (VAR_10);





 if (!FUNC_5(VAR_7, VAR_9))
  return (VAR_0);




 if (VAR_8->ml_flags & VAR_2) {




  if (!FUNC_5(VAR_8, VAR_9))
   return (VAR_0);





  if (FUNC_3(VAR_8)) {
   VAR_10 = FUNC_6(VAR_9);
   if (VAR_10)
    return (VAR_10);
  }
 }
 if (VAR_8->ml_flags & VAR_1) {



  if ((VAR_8->ml_flags & VAR_2) == 0)
   FUNC_4(VAR_9, VAR_8);





  if (!FUNC_2(VAR_8, VAR_9))
   return (VAR_0);





  if (FUNC_3(VAR_8)) {
   VAR_10 = FUNC_6(VAR_9);
   if (VAR_10)
    return (VAR_10);
  }
 }

 return (0);
}
