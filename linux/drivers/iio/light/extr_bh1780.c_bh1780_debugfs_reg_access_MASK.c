
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct bh1780_data {int dummy; } ;


 int FUNC_0 (struct bh1780_data*,int ) ;
 int FUNC_1 (struct bh1780_data*,int ,int ) ;
 struct bh1780_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2,
         unsigned int *VAR_3)
{
 struct bh1780_data *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 if (!VAR_3)
  return FUNC_1(VAR_4, (u8)VAR_1, (u8)VAR_2);

 VAR_5 = FUNC_0(VAR_4, (u8)VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_3 = VAR_5;

 return 0;
}
