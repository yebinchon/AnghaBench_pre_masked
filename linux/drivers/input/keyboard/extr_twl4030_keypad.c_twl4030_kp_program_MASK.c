
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_keypad {int kp_state; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct twl4030_keypad*,int,int ) ;
 scalar_t__ FUNC_2 (struct twl4030_keypad*,int ) ;

__attribute__((used)) static int FUNC_3(struct twl4030_keypad *VAR_18)
{
 u8 VAR_19;
 int VAR_20;


 VAR_19 = VAR_4 | VAR_3
  | VAR_5 | VAR_2;
 if (FUNC_1(VAR_18, VAR_19, VAR_1) < 0)
  return -VAR_0;







 VAR_19 = VAR_8 | VAR_9;
 if (FUNC_1(VAR_18, VAR_19, VAR_7) < 0)
  return -VAR_0;


 VAR_19 = (VAR_15 << VAR_11);
 if (FUNC_1(VAR_18, VAR_19, VAR_10) < 0)
  return -VAR_0;


 VAR_20 = FUNC_0(20000, VAR_15);
 if (FUNC_1(VAR_18, VAR_20, VAR_6) < 0)
  return -VAR_0;


 VAR_20 = FUNC_0(200000, VAR_15);
 if (FUNC_1(VAR_18, (VAR_20 & 0xFF), VAR_14) < 0)
  return -VAR_0;

 if (FUNC_1(VAR_18, (VAR_20 >> 8), VAR_13) < 0)
  return -VAR_0;





 VAR_19 = VAR_16 | VAR_17;
 if (FUNC_1(VAR_18, VAR_19, VAR_12) < 0)
  return -VAR_0;


 if (FUNC_2(VAR_18, VAR_18->kp_state) < 0)
  return -VAR_0;

 return 0;
}
