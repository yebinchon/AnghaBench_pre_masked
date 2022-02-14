
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_als {int lm3533; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct lm3533_als* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2, int *VAR_3)
{
 struct lm3533_als *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5 = VAR_0;
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4->lm3533, VAR_1, &VAR_6);
 if (VAR_7) {
  FUNC_0(&VAR_2->dev, "failed to get int mode\n");
  return VAR_7;
 }

 *VAR_3 = !!(VAR_6 & VAR_5);

 return 0;
}
