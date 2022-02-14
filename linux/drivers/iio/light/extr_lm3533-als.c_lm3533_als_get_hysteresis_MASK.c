
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lm3533_als {int thresh_mutex; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct lm3533_als* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,unsigned int,int,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2, unsigned VAR_3,
        u8 *VAR_4)
{
 struct lm3533_als *VAR_5 = FUNC_0(VAR_2);
 u8 VAR_6;
 u8 VAR_7;
 int VAR_8;

 if (VAR_3 > VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_5->thresh_mutex);
 VAR_8 = FUNC_1(VAR_2, VAR_3, 0, &VAR_6);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_1(VAR_2, VAR_3, 1, &VAR_7);
 if (VAR_8)
  goto out;

 *VAR_4 = VAR_7 - VAR_6;
out:
 FUNC_3(&VAR_5->thresh_mutex);

 return VAR_8;
}
