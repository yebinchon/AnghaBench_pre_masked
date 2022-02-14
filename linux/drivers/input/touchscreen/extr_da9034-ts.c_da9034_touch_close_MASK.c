
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct da9034_touch {int da9034_dev; int state; int tsi_work; int notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct da9034_touch*,int ) ;
 struct da9034_touch* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct da9034_touch*) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_5)
{
 struct da9034_touch *VAR_6 = FUNC_4(VAR_5);

 FUNC_2(VAR_6->da9034_dev, &VAR_6->notifier,
   VAR_0 | VAR_1);

 FUNC_0(&VAR_6->tsi_work);

 VAR_6->state = VAR_4;
 FUNC_5(VAR_6);
 FUNC_3(VAR_6, 0);


 FUNC_1(VAR_6->da9034_dev,
   VAR_3, VAR_2);
}
