
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct mac_mls {int mm_flags; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,int) ;
 scalar_t__ FUNC_2 (struct mac_mls*) ;
 int FUNC_3 (struct mac_mls*,struct mac_mls*) ;
 int FUNC_4 (struct mac_mls*,struct mac_mls*) ;
 int FUNC_5 (struct mac_mls*) ;

__attribute__((used)) static int
FUNC_6(struct ucred *VAR_5, struct label *VAR_6)
{
 struct mac_mls *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_5->cr_label);
 VAR_8 = FUNC_0(VAR_6);





 VAR_9 = FUNC_1(VAR_8, VAR_2);
 if (VAR_9)
  return (VAR_9);




 if (VAR_8->mm_flags & VAR_2) {





  if ((VAR_8->mm_flags & VAR_2) ==
      VAR_2 && !FUNC_3(VAR_8, VAR_8))
   return (VAR_0);





  if (VAR_8->mm_flags & VAR_3 &&
      !FUNC_3(VAR_8, VAR_7))
   return (VAR_1);





  if (VAR_8->mm_flags & VAR_4 &&
      !FUNC_4(VAR_8, VAR_7))
   return (VAR_1);





  if (FUNC_2(VAR_8)) {
   VAR_9 = FUNC_5(VAR_7);
   if (VAR_9)
    return (VAR_9);
  }
 }

 return (0);
}
