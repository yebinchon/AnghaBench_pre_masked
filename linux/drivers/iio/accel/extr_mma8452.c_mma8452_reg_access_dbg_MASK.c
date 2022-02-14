
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int client; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 struct mma8452_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct mma8452_data*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      unsigned int *VAR_5)
{
 int VAR_6;
 struct mma8452_data *VAR_7 = FUNC_1(VAR_2);

 if (VAR_3 > VAR_1)
  return -VAR_0;

 if (!VAR_5)
  return FUNC_2(VAR_7, VAR_3, VAR_4);

 VAR_6 = FUNC_0(VAR_7->client, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_5 = VAR_6;

 return 0;
}
