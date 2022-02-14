
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sirf_data {int active; TYPE_1__* serdev; int power_wait; int wakeup; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct sirf_data*,int,unsigned long) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct sirf_data *VAR_1, bool VAR_2,
     unsigned long VAR_3)
{
 int VAR_4;

 if (!VAR_1->wakeup)
  return FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_3(VAR_1->power_wait,
   VAR_1->active == VAR_2, FUNC_1(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_4 == 0) {
  FUNC_0(&VAR_1->serdev->dev, "timeout waiting for active state = %d\n",
    VAR_2);
  return -VAR_0;
 }

 return 0;
}
