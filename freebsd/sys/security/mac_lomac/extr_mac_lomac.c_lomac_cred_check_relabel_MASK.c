
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct mac_lomac {int ml_flags; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,int) ;
 scalar_t__ FUNC_2 (struct mac_lomac*) ;
 int FUNC_3 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_4 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_5 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_6 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_7 (struct mac_lomac*) ;

__attribute__((used)) static int
FUNC_8(struct ucred *VAR_4, struct label *VAR_5)
{
 struct mac_lomac *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_4->cr_label);
 VAR_7 = FUNC_0(VAR_5);





 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (VAR_8)
  return (VAR_8);




 if (VAR_7->ml_flags & VAR_1) {



  if ((VAR_7->ml_flags & VAR_3) == 0)
   FUNC_4(VAR_6, VAR_7);
  if ((VAR_7->ml_flags & VAR_2) == 0)
   FUNC_3(VAR_6, VAR_7);





  if (!FUNC_5(VAR_7, VAR_6))
   return (VAR_0);






  if (!FUNC_6(VAR_7, VAR_7))
   return (VAR_0);





  if (FUNC_2(VAR_7)) {
   VAR_8 = FUNC_7(VAR_6);
   if (VAR_8)
    return (VAR_8);
  }





 }

 return (0);
}
