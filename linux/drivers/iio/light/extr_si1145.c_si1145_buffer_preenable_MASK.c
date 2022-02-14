
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si1145_data {int lock; } ;
struct iio_dev {int * active_scan_mask; } ;


 struct si1145_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iio_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0)
{
 struct si1145_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_3(VAR_0, *VAR_0->active_scan_mask);
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
