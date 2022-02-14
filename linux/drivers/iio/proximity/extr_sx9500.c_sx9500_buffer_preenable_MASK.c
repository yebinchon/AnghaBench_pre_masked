
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int mutex; } ;
struct iio_dev {int active_scan_mask; } ;


 int VAR_0 ;
 struct sx9500_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sx9500_data*,int) ;
 int FUNC_4 (struct sx9500_data*,int) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1)
{
 struct sx9500_data *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0, VAR_4;

 FUNC_1(&VAR_2->mutex);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (FUNC_5(VAR_4, VAR_1->active_scan_mask)) {
   VAR_3 = FUNC_4(VAR_2, VAR_4);
   if (VAR_3)
    break;
  }

 if (VAR_3)
  for (VAR_4 = VAR_4 - 1; VAR_4 >= 0; VAR_4--)
   if (FUNC_5(VAR_4, VAR_1->active_scan_mask))
    FUNC_3(VAR_2, VAR_4);

 FUNC_2(&VAR_2->mutex);

 return VAR_3;
}
