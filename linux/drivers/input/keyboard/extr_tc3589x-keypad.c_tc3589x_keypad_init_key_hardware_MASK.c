
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_keypad {struct tc3589x_keypad_platform_data* board; struct tc3589x* tc3589x; } ;
struct tc3589x_keypad_platform_data {int kcol; int krow; int settle_time; int debounce_period; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct tc3589x*,int ,int) ;
 int FUNC_1 (struct tc3589x*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct tc_keypad *VAR_18)
{
 int VAR_19;
 struct tc3589x *VAR_20 = VAR_18->tc3589x;
 const struct tc3589x_keypad_platform_data *VAR_21 = VAR_18->board;


 if (VAR_21->kcol > VAR_15 || VAR_21->krow > VAR_16)
  return -VAR_1;


 VAR_19 = FUNC_0(VAR_20, VAR_14,
   (VAR_21->krow << VAR_3) | VAR_21->kcol);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_0(VAR_20, VAR_10, VAR_0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_11, VAR_0);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_0(VAR_20, VAR_13,
    VAR_21->settle_time);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_0(VAR_20, VAR_12,
    VAR_21->debounce_period);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_1(VAR_20, VAR_4, 0x0, VAR_2);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_0(VAR_20, VAR_5,
     VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_6,
     VAR_17);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_0(VAR_20, VAR_7,
   VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_8,
   VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_0(VAR_20, VAR_9,
   VAR_17);

 return VAR_19;
}
