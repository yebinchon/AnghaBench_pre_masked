
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int input; int poll_interval_max; int poll_interval_min; int poll_interval; int poll; int close; int open; struct bma150_data* private; } ;
struct bma150_data {int input; struct input_polled_dev* input_polled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bma150_data*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct input_polled_dev* FUNC_1 () ;
 int FUNC_2 (struct input_polled_dev*) ;
 int FUNC_3 (struct input_polled_dev*) ;

__attribute__((used)) static int FUNC_4(struct bma150_data *VAR_7)
{
 struct input_polled_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1();
 if (!VAR_8)
  return -VAR_3;

 VAR_8->private = VAR_7;
 VAR_8->open = VAR_6;
 VAR_8->close = VAR_5;
 VAR_8->poll = VAR_4;
 VAR_8->poll_interval = VAR_0;
 VAR_8->poll_interval_min = VAR_2;
 VAR_8->poll_interval_max = VAR_1;

 FUNC_0(VAR_7, VAR_8->input);

 VAR_7->input_polled = VAR_8;
 VAR_7->input = VAR_8->input;

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_8);
  return VAR_9;
 }

 return 0;
}
