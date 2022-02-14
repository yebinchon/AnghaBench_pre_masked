
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_drvdata {struct input_dev* pen_input; } ;
struct timer_list {int dummy; } ;
struct input_dev {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct uclogic_drvdata* VAR_5 ;
 struct uclogic_drvdata* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_7)
{
 struct uclogic_drvdata *VAR_8 = FUNC_0(VAR_8, VAR_7,
       VAR_6);
 struct input_dev *VAR_9 = VAR_8->pen_input;

 if (VAR_9 == ((void*)0))
  return;
 FUNC_2(VAR_9, VAR_0, 0);

 if (FUNC_5(VAR_2, VAR_9->key)) {
  FUNC_1(VAR_9, VAR_3, VAR_4,

    0xd0042);
  FUNC_3(VAR_9, VAR_2, 0);
 }
 FUNC_3(VAR_9, VAR_1, 0);
 FUNC_4(VAR_9);
}
