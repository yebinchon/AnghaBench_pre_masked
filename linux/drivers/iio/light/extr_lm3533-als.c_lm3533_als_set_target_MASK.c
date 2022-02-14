
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_als {int lm3533; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct lm3533_als* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3, unsigned VAR_4,
       unsigned VAR_5, u8 VAR_6)
{
 struct lm3533_als *VAR_7 = FUNC_1(VAR_3);
 u8 VAR_8;
 int VAR_9;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 if (VAR_5 > VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_4, VAR_5);
 VAR_9 = FUNC_3(VAR_7->lm3533, VAR_8, VAR_6);
 if (VAR_9)
  FUNC_0(&VAR_3->dev, "failed to set target current\n");

 return VAR_9;
}
