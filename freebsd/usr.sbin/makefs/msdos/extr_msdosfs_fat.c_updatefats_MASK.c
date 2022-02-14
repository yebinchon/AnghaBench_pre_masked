
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_flags; scalar_t__ pm_fatblk; int pm_FATs; scalar_t__ pm_FATsecs; int pm_devvp; } ;
struct buf {scalar_t__ b_data; int b_bcount; } ;


 scalar_t__ FUNC_0 (struct msdosfsmount*) ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct msdosfsmount*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 struct buf* FUNC_5 (int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (char*,struct msdosfsmount*,struct buf*,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct msdosfsmount *VAR_1, struct buf *VAR_2, u_long VAR_3)
{
 struct buf *VAR_4;
 int VAR_5, VAR_6;





 if (VAR_1->pm_flags & VAR_0) {
  if (VAR_3 != VAR_1->pm_fatblk || FUNC_0(VAR_1))
   VAR_5 = 0;
  else if (FUNC_1(VAR_1))
   VAR_5 = 16;
  else
   VAR_5 = 32;
  for (VAR_6 = 1; VAR_6 < VAR_1->pm_FATs; VAR_6++) {
   VAR_3 += VAR_1->pm_FATsecs;

   VAR_4 = FUNC_5(VAR_1->pm_devvp, VAR_3, VAR_2->b_bcount,
       0, 0, 0);
   FUNC_6(VAR_4->b_data, VAR_2->b_data, VAR_2->b_bcount);

   if (VAR_5 == 16)
    ((uint8_t *)VAR_4->b_data)[3] |= 0x80;
   else if (VAR_5 == 32)
    ((uint8_t *)VAR_4->b_data)[7] |= 0x08;
   if (FUNC_2(VAR_1))
    FUNC_4(VAR_4);
   else
    FUNC_3(VAR_4);
  }
 }




 if (FUNC_2(VAR_1))
  FUNC_4(VAR_2);
 else
  FUNC_3(VAR_2);
}
