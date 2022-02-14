
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {scalar_t__ poll_interval; int (* poll ) (struct input_polled_dev*) ;int (* open ) (struct input_polled_dev*) ;} ;
struct input_dev {int dummy; } ;


 struct input_polled_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_polled_dev*) ;
 int FUNC_2 (struct input_polled_dev*) ;
 int FUNC_3 (struct input_polled_dev*) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0)
{
 struct input_polled_dev *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->open)
  VAR_1->open(VAR_1);


 if (VAR_1->poll_interval > 0) {
  VAR_1->poll(VAR_1);
  FUNC_1(VAR_1);
 }

 return 0;
}
