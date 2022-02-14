
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct da9034_touch {int state; int da9034_dev; int notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct da9034_touch*,int) ;
 struct da9034_touch* FUNC_4 (struct input_dev*) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_8)
{
 struct da9034_touch *VAR_9 = FUNC_4(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_0(VAR_9->da9034_dev, &VAR_9->notifier,
   VAR_0 | VAR_1);
 if (VAR_10)
  return -VAR_6;


 VAR_10 = FUNC_1(VAR_9->da9034_dev,
   VAR_3, VAR_2);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_2(VAR_9->da9034_dev, VAR_4, 0x1b);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9->da9034_dev, VAR_5, 0x00);
 if (VAR_10)
  return VAR_10;

 VAR_9->state = VAR_7;
 FUNC_3(VAR_9, 1);

 return 0;
}
