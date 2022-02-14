
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct slookup {scalar_t__ reg_value; int value; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(const struct slookup *VAR_0,
   int VAR_1, u32 VAR_2)
{
 s32 VAR_3;
 int VAR_4 = 0;
 int VAR_5 = VAR_1 - 1;
 int VAR_6;
 s32 VAR_7;


 if (VAR_2 >= VAR_0[0].reg_value) {
  VAR_3 = VAR_0[0].value;
 } else if (VAR_2 <= VAR_0[VAR_5].reg_value) {
  VAR_3 = VAR_0[VAR_5].value;
 } else {
  while ((VAR_5 - VAR_4) > 1) {
   VAR_6 = (VAR_5 + VAR_4) / 2;
   if ((VAR_0[VAR_4].reg_value >= VAR_2) &&
       (VAR_2 >= VAR_0[VAR_6].reg_value))
    VAR_5 = VAR_6;
   else
    VAR_4 = VAR_6;
  }

  VAR_7 = VAR_0[VAR_5].reg_value - VAR_0[VAR_4].reg_value;
  VAR_3 = VAR_0[VAR_4].value;
  if (VAR_7 != 0)
   VAR_3 += ((s32)(VAR_2 - VAR_0[VAR_4].reg_value) *
      (s32)(VAR_0[VAR_5].value
     - VAR_0[VAR_4].value))
     / (VAR_7);
 }

 return VAR_3;
}
