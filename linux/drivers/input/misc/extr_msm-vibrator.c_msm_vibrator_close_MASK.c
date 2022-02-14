
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_vibrator {int worker; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct msm_vibrator* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct msm_vibrator*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct msm_vibrator *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->worker);
 FUNC_2(VAR_1);
}
