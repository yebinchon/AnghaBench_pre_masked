
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gdsc {int flags; unsigned int gdscr; int gds_hw_ctrl; int regmap; } ;
typedef enum gdsc_status { ____Placeholder_gdsc_status } gdsc_status ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned int,int*) ;

__attribute__((used)) static int FUNC_1(struct gdsc *VAR_6, enum gdsc_status VAR_7)
{
 unsigned int VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (VAR_6->flags & VAR_4)
  VAR_8 = VAR_6->gdscr + VAR_0;
 else if (VAR_6->gds_hw_ctrl)
  VAR_8 = VAR_6->gds_hw_ctrl;
 else
  VAR_8 = VAR_6->gdscr;

 VAR_10 = FUNC_0(VAR_6->regmap, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_6->flags & VAR_4) {
  switch (VAR_7) {
  case 128:
   return !!(VAR_9 & VAR_3);
  case 129:
   return !!(VAR_9 & VAR_2);
  }
 }

 switch (VAR_7) {
 case 128:
  return !!(VAR_9 & VAR_5);
 case 129:
  return !(VAR_9 & VAR_5);
 }

 return -VAR_1;
}
