
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {struct input_dev* vals; struct input_dev* absinfo; struct input_dev* poller; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int ) ;
 struct input_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct input_dev *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2->poller);
 FUNC_2(VAR_2->absinfo);
 FUNC_2(VAR_2->vals);
 FUNC_2(VAR_2);

 FUNC_3(VAR_0);
}
