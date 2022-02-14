
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_flags; scalar_t__ pm_nxtfree; scalar_t__ pm_maxcluster; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct msdosfsmount*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct msdosfsmount*,int ) ;
 int FUNC_4 (struct msdosfsmount*,int ) ;

__attribute__((used)) static int
FUNC_5(struct msdosfsmount *VAR_3, u_long VAR_4, u_long VAR_5,
    u_long VAR_6, u_long *VAR_7, u_long *VAR_8)
{
 int VAR_9;
 u_long VAR_10, VAR_11;

 FUNC_0((VAR_3->pm_flags & VAR_1) == 0);

 for (VAR_10 = VAR_4, VAR_11 = VAR_5; VAR_11-- > 0;)
  FUNC_3(VAR_3, VAR_10++);
 VAR_3->pm_nxtfree = VAR_4 + VAR_5;
 if (VAR_3->pm_nxtfree > VAR_3->pm_maxcluster)
  VAR_3->pm_nxtfree = VAR_0;
 VAR_3->pm_flags |= VAR_2;
 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_9 != 0) {
  for (VAR_10 = VAR_4, VAR_11 = VAR_5; VAR_11-- > 0;)
   FUNC_4(VAR_3, VAR_10++);
  return (VAR_9);
 }




 if (VAR_7)
  *VAR_7 = VAR_4;
 if (VAR_8)
  *VAR_8 = VAR_5;
 return (0);
}
