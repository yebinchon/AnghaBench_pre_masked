
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_keypad {int keypad_stopped; struct tc3589x* tc3589x; } ;
struct tc3589x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tc3589x*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct tc_keypad *VAR_10)
{
 struct tc3589x *VAR_11 = VAR_10->tc3589x;
 int VAR_12;


 VAR_12 = FUNC_0(VAR_11, VAR_8, VAR_7, 0x0);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_0(VAR_11, VAR_4, 0x0, VAR_5);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_0(VAR_11, VAR_1, 0x0, VAR_0);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_0(VAR_11, VAR_9, 0x0, 0x1);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_0(VAR_11, VAR_6, 0x0,
     VAR_3 | VAR_2);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10->keypad_stopped = 0;

 return VAR_12;
}
