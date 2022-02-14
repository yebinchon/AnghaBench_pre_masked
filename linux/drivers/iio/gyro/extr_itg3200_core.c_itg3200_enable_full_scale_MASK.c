
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,int ,int *) ;
 int FUNC_1 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_3);
 if (VAR_4)
  goto err_ret;

 VAR_3 |= VAR_0;
 return FUNC_1(VAR_2, VAR_1, VAR_3);

err_ret:
 return VAR_4;
}
