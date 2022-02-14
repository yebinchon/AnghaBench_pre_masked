
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct iio_trigger*) ;
 int FUNC_1 (struct iio_dev*,int ,int *) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_2,
  bool VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_1, &VAR_6);
 if (VAR_5)
  goto error_ret;

 if (VAR_3)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_6);
 if (VAR_5)
  goto error_ret;

error_ret:
 return VAR_5;

}
