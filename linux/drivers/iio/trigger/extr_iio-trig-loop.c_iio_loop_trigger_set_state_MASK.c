
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dev; int name; } ;
struct iio_loop_info {int task; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_0 ;
 struct iio_loop_info* FUNC_3 (struct iio_trigger*) ;
 int FUNC_4 (int ,struct iio_trigger*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iio_trigger *VAR_1, bool VAR_2)
{
 struct iio_loop_info *VAR_3 = FUNC_3(VAR_1);

 if (VAR_2) {
  VAR_3->task = FUNC_4(VAR_0,
           VAR_1, VAR_1->name);
  if (FUNC_0(VAR_3->task)) {
   FUNC_2(&VAR_1->dev,
    "failed to create trigger loop thread\n");
   return FUNC_1(VAR_3->task);
  }
 } else {
  FUNC_5(VAR_3->task);
 }

 return 0;
}
