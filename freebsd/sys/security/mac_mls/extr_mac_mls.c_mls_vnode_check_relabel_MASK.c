
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {struct label* cr_label; } ;
struct mac_mls {int mm_flags; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,int) ;
 scalar_t__ FUNC_2 (struct mac_mls*) ;
 int FUNC_3 (struct mac_mls*,struct mac_mls*) ;
 int FUNC_4 (struct mac_mls*) ;

__attribute__((used)) static int
FUNC_5(struct ucred *VAR_2, struct vnode *VAR_3,
    struct label *VAR_4, struct label *VAR_5)
{
 struct mac_mls *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = FUNC_0(VAR_5);
 VAR_8 = FUNC_0(VAR_2->cr_label);





 VAR_9 = FUNC_1(VAR_7, VAR_1);
 if (VAR_9)
  return (VAR_9);





 if (!FUNC_3(VAR_6, VAR_8))
  return (VAR_0);




 if (VAR_7->mm_flags & VAR_1) {




  if (!FUNC_3(VAR_7, VAR_8))
   return (VAR_0);





  if (FUNC_2(VAR_7)) {
   VAR_9 = FUNC_4(VAR_8);
   if (VAR_9)
    return (VAR_9);
  }
 }

 return (0);
}
