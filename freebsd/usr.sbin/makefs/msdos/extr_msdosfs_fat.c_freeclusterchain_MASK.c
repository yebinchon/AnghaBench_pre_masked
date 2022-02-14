
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct msdosfsmount {scalar_t__ pm_maxcluster; int pm_fatmask; int pm_devvp; } ;
struct buf {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ FUNC_0 (struct msdosfsmount*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,struct buf**) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct msdosfsmount*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (struct msdosfsmount*,struct buf*,scalar_t__) ;
 int FUNC_9 (struct msdosfsmount*,scalar_t__) ;

int
FUNC_10(struct msdosfsmount *VAR_4, u_long VAR_5)
{
 int VAR_6;
 struct buf *VAR_7 = ((void*)0);
 u_long VAR_8, VAR_9, VAR_10, VAR_11;
 u_long VAR_12, VAR_13 = -1;

 while (VAR_5 >= VAR_0 && VAR_5 <= VAR_4->pm_maxcluster) {
  VAR_11 = FUNC_0(VAR_4, VAR_5);
  FUNC_3(VAR_4, VAR_11, &VAR_8, &VAR_10, &VAR_9);
  if (VAR_13 != VAR_8) {
   if (VAR_7)
    FUNC_8(VAR_4, VAR_7, VAR_13);
   VAR_6 = FUNC_1(VAR_4->pm_devvp, VAR_8, VAR_10, VAR_3, &VAR_7);
   if (VAR_6) {
    FUNC_2(VAR_7);
    return (VAR_6);
   }
   VAR_13 = VAR_8;
  }
  FUNC_9(VAR_4, VAR_5);
  switch (VAR_4->pm_fatmask) {
  case 130:
   VAR_12 = FUNC_5(VAR_7->b_data + VAR_9);
   if (VAR_5 & 1) {
    VAR_5 = VAR_12 >> 4;
    VAR_12 &= 0x000f;
    VAR_12 |= VAR_2 << 4;
   } else {
    VAR_5 = VAR_12;
    VAR_12 &= 0xf000;
    VAR_12 |= VAR_2 & 0xfff;
   }
   FUNC_7(VAR_7->b_data + VAR_9, VAR_12);
   break;
  case 129:
   VAR_5 = FUNC_5(VAR_7->b_data + VAR_9);
   FUNC_7(VAR_7->b_data + VAR_9, VAR_2);
   break;
  case 128:
   VAR_5 = FUNC_4(VAR_7->b_data + VAR_9);
   FUNC_6(VAR_7->b_data + VAR_9,
     (VAR_2 & 128) | (VAR_5 & ~128));
   break;
  }
  VAR_5 &= VAR_4->pm_fatmask;
  if ((VAR_5 | ~VAR_4->pm_fatmask) >= VAR_1)
   VAR_5 |= VAR_4->pm_fatmask;
 }
 if (VAR_7)
  FUNC_8(VAR_4, VAR_7, VAR_8);
 return (0);
}
