
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdosfsmount {scalar_t__ pm_fsinfo; int pm_flags; int pm_nxtfree; int pm_freeclustercount; int pm_BytesPerSec; int pm_devvp; } ;
struct fsinfo {int fsinxtfree; int fsinfree; } ;
struct buf {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,struct buf**) ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(struct msdosfsmount *VAR_2)
{
 struct fsinfo *VAR_3;
 struct buf *VAR_4;
 int VAR_5;

 if (VAR_2->pm_fsinfo == 0 || (VAR_2->pm_flags & VAR_0) == 0) {
  VAR_5 = 0;
  goto out;
 }
 VAR_5 = FUNC_0(VAR_2->pm_devvp, VAR_2->pm_fsinfo, VAR_2->pm_BytesPerSec,
     VAR_1, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_1(VAR_4);
  goto out;
 }
 VAR_3 = (struct fsinfo *)VAR_4->b_data;
 FUNC_3(VAR_3->fsinfree, VAR_2->pm_freeclustercount);
 FUNC_3(VAR_3->fsinxtfree, VAR_2->pm_nxtfree);
 VAR_2->pm_flags &= ~VAR_0;
 VAR_5 = FUNC_2(VAR_4);

out:
 return (VAR_5);
}
