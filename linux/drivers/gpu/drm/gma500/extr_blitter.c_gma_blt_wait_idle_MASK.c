
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_2 (unsigned long,unsigned long) ;

int FUNC_3(struct drm_psb_private *VAR_7)
{
 unsigned long VAR_8 = VAR_6 + VAR_1;
 int VAR_9 = 1;


 if (FUNC_0(VAR_7->dev))
  return 0;


 if ((FUNC_1(VAR_3) == VAR_5) &&
     ((FUNC_1(VAR_2) & VAR_4) == 0))
  return 0;

 do {
  VAR_9 = (FUNC_1(VAR_3) != VAR_5);
 } while (VAR_9 && !FUNC_2(VAR_6, VAR_8));

 if (VAR_9)
  return -VAR_0;

 do {
  VAR_9 = ((FUNC_1(VAR_2) &
   VAR_4) != 0);
 } while (VAR_9 && !FUNC_2(VAR_6, VAR_8));


 return (VAR_9) ? -VAR_0 : 0;
}
