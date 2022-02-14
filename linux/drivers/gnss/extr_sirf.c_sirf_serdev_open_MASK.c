
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int serdev_count; int serdev_mutex; int serdev; int speed; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct sirf_data *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(&VAR_0->serdev_mutex);
 if (++VAR_0->serdev_count == 1) {
  VAR_1 = FUNC_2(VAR_0->serdev);
  if (VAR_1) {
   VAR_0->serdev_count--;
   goto out_unlock;
  }

  FUNC_3(VAR_0->serdev, VAR_0->speed);
  FUNC_4(VAR_0->serdev, 0);
 }

out_unlock:
 FUNC_1(&VAR_0->serdev_mutex);

 return VAR_1;
}
