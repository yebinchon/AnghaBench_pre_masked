
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vadc_map_pt {scalar_t__ x; int y; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct vadc_map_pt *VAR_1,
          u32 VAR_2, s32 VAR_3, int *VAR_4)
{
 bool VAR_5 = 1;
 u32 VAR_6 = 0;

 if (!VAR_1)
  return -VAR_0;


 if (VAR_2 > 1) {
  if (VAR_1[0].x < VAR_1[1].x)
   VAR_5 = 0;
 }

 while (VAR_6 < VAR_2) {
  if ((VAR_5) && (VAR_1[VAR_6].x < VAR_3)) {


   break;
  } else if ((!VAR_5) &&
    (VAR_1[VAR_6].x > VAR_3)) {


   break;
  }
  VAR_6++;
 }

 if (VAR_6 == 0) {
  *VAR_4 = VAR_1[0].y;
 } else if (VAR_6 == VAR_2) {
  *VAR_4 = VAR_1[VAR_2 - 1].y;
 } else {


  *VAR_4 = (((s32)((VAR_1[VAR_6].y - VAR_1[VAR_6 - 1].y) *
   (VAR_3 - VAR_1[VAR_6 - 1].x)) /
   (VAR_1[VAR_6].x - VAR_1[VAR_6 - 1].x)) +
   VAR_1[VAR_6 - 1].y);
 }

 return 0;
}
