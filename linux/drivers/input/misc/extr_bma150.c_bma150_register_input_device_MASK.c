
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int close; int open; } ;
struct bma150_data {struct input_dev* input; } ;


 int VAR_0 ;
 int FUNC_0 (struct bma150_data*,struct input_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,struct bma150_data*) ;

__attribute__((used)) static int FUNC_5(struct bma150_data *VAR_3)
{
 struct input_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_4);

 VAR_4->open = VAR_2;
 VAR_4->close = VAR_1;
 FUNC_4(VAR_4, VAR_3);

 VAR_3->input = VAR_4;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 return 0;
}
