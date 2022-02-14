
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct socket {int dummy; } ;
struct mac_biba {int mb_flags; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct mac_biba*,int) ;
 scalar_t__ FUNC_3 (struct mac_biba*) ;
 int FUNC_4 (struct mac_biba*,struct mac_biba*) ;
 int FUNC_5 (struct mac_biba*) ;

__attribute__((used)) static int
FUNC_6(struct ucred *VAR_2, struct socket *VAR_3,
    struct label *VAR_4, struct label *VAR_5)
{
 struct mac_biba *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_1(VAR_3);

 VAR_8 = FUNC_0(VAR_5);
 VAR_6 = FUNC_0(VAR_2->cr_label);
 VAR_7 = FUNC_0(VAR_4);





 VAR_9 = FUNC_2(VAR_8, VAR_1);
 if (VAR_9)
  return (VAR_9);





 if (!FUNC_4(VAR_7, VAR_6))
  return (VAR_0);




 if (VAR_8->mb_flags & VAR_1) {




  if (!FUNC_4(VAR_8, VAR_6))
   return (VAR_0);





  if (FUNC_3(VAR_8)) {
   VAR_9 = FUNC_5(VAR_6);
   if (VAR_9)
    return (VAR_9);
  }
 }

 return (0);
}
