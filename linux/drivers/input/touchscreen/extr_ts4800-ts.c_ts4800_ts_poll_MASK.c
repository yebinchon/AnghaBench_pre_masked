
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ts4800_ts {int pendown; scalar_t__ debounce; scalar_t__ base; } ;
struct input_polled_dev {struct ts4800_ts* private; struct input_dev* input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct input_polled_dev *VAR_8)
{
 struct input_dev *VAR_9 = VAR_8->input;
 struct ts4800_ts *VAR_10 = VAR_8->private;
 u16 VAR_11 = FUNC_3(VAR_10->base + VAR_6);
 u16 VAR_12 = FUNC_3(VAR_10->base + VAR_7);
 bool VAR_13 = VAR_11 & VAR_5;

 if (VAR_13) {
  if (VAR_10->debounce) {
   VAR_10->debounce--;
   return;
  }

  if (!VAR_10->pendown) {
   FUNC_1(VAR_9, VAR_2, 1);
   VAR_10->pendown = 1;
  }

  VAR_11 = ((~VAR_11) >> 4) & VAR_4;
  VAR_12 = ((~VAR_12) >> 4) & VAR_4;

  FUNC_0(VAR_9, VAR_0, VAR_11);
  FUNC_0(VAR_9, VAR_1, VAR_12);
  FUNC_2(VAR_9);
 } else if (VAR_10->pendown) {
  VAR_10->pendown = 0;
  VAR_10->debounce = VAR_3;
  FUNC_1(VAR_9, VAR_2, 0);
  FUNC_2(VAR_9);
 }
}
