
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_3(struct input_polled_dev *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->input;
 s16 VAR_8, VAR_9;

 if (FUNC_0(VAR_2, &VAR_8))
  return;
 if (FUNC_0(VAR_3, &VAR_9))
  return;

 VAR_8 = -VAR_8;
 FUNC_1(VAR_7, VAR_0, VAR_8 - VAR_4);
 FUNC_1(VAR_7, VAR_1, VAR_9 - VAR_5);
 FUNC_2(VAR_7);
}
