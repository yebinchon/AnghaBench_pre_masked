
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct shmfd {int dummy; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mac_mls*,struct mac_mls*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_6, struct shmfd *VAR_7,
    struct label *VAR_8, int VAR_9, int VAR_10)
{
 struct mac_mls *VAR_11, *VAR_12;

 if (!VAR_5)
  return (0);

 VAR_11 = FUNC_0(VAR_6->cr_label);
 VAR_12 = FUNC_0(VAR_8);

 if (VAR_9 & (VAR_3 | VAR_2)) {
  if (!FUNC_1(VAR_11, VAR_12))
   return (VAR_0);
 }
 if (((VAR_9 & VAR_4) != 0) && ((VAR_10 & VAR_1) != 0)) {
  if (!FUNC_1(VAR_12, VAR_11))
   return (VAR_0);
 }

 return (0);
}
