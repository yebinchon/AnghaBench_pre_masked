
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(int VAR_6)
{
 struct ifreq VAR_7;

 FUNC_1(VAR_7.ifr_name, VAR_5, VAR_1);

 if (FUNC_0(VAR_4, VAR_2, &VAR_7) < 0)
  return -1;

 if (VAR_6 && !(VAR_7.ifr_flags & VAR_0))
 {
  VAR_7.ifr_flags |= VAR_0;

  if (FUNC_0(VAR_4, VAR_3, &VAR_7))
   return -1;

  return 1;
 }
 else if (!VAR_6 && (VAR_7.ifr_flags & VAR_0))
 {
  VAR_7.ifr_flags &= ~VAR_0;

  if (FUNC_0(VAR_4, VAR_3, &VAR_7))
   return -1;

  return 1;
 }

 return 0;
}
