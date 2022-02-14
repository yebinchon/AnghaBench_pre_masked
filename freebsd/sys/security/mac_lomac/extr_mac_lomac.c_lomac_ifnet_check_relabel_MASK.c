
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct mac_lomac {int ml_flags; } ;
struct label {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_lomac*,int) ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_3 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_4 (struct mac_lomac*) ;
 int FUNC_5 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ucred *VAR_5, struct ifnet *VAR_6,
    struct label *VAR_7, struct label *VAR_8)
{
 struct mac_lomac *VAR_9, *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_5->cr_label);
 VAR_10 = FUNC_0(VAR_8);





 VAR_11 = FUNC_1(VAR_10, VAR_1);
 if (VAR_11)
  return (VAR_11);




 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11)
  return (VAR_11);




 if (VAR_10->ml_flags & VAR_1) {



  if ((VAR_10->ml_flags & VAR_3) == 0)
   FUNC_3(VAR_9, VAR_10);
  if ((VAR_10->ml_flags & VAR_2) == 0)
   FUNC_2(VAR_9, VAR_10);
  VAR_11 = FUNC_5(VAR_5, VAR_4);
  if (VAR_11)
   return (VAR_0);





 }

 return (0);
}
