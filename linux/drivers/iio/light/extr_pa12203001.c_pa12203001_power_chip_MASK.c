
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pa12203001_data {int lock; } ;
struct iio_dev {int dummy; } ;


 struct pa12203001_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pa12203001_data*,int ) ;
 int FUNC_4 (struct pa12203001_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0, u8 VAR_1)
{
 struct pa12203001_data *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_4(VAR_2, VAR_1);

out:
 FUNC_2(&VAR_2->lock);
 return VAR_3;
}
