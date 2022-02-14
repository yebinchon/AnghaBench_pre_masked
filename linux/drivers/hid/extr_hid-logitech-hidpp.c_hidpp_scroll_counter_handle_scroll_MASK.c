
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hidpp_scroll_counter {int wheel_multiplier; int remainder; unsigned long long last_time; int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 unsigned long long FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_2,
            struct hidpp_scroll_counter *VAR_3,
            int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned long long VAR_8, VAR_9;

 VAR_4 = VAR_4 * 120/VAR_3->wheel_multiplier;
 FUNC_1(VAR_2, VAR_1, VAR_4);

 VAR_6 = VAR_3->remainder;
 VAR_7 = VAR_4 > 0 ? 1 : -1;

 VAR_8 = FUNC_2();
 VAR_9 = VAR_3->last_time;
 VAR_3->last_time = VAR_8;






 if (VAR_8 - VAR_9 > 1000000000 || VAR_7 != VAR_3->direction)
  VAR_6 = 0;

 VAR_3->direction = VAR_7;
 VAR_6 += VAR_4;






 if (FUNC_0(VAR_6) >= 60) {





  VAR_5 = VAR_6 / 120;
  if (VAR_5 == 0)
   VAR_5 = (VAR_4 > 0 ? 1 : -1);
  FUNC_1(VAR_2, VAR_0, VAR_5);
  VAR_6 -= VAR_5 * 120;
 }
 VAR_3->remainder = VAR_6;
}
