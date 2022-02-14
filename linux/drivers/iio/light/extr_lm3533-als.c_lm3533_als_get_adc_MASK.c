
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
 int FUNC_2 (int ,int,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2, bool VAR_3,
        int *VAR_4)
{
 struct lm3533_als *VAR_5 = FUNC_1(VAR_2);
 u8 VAR_6;
 u8 VAR_7;
 int VAR_8;

 if (VAR_3)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;

 VAR_8 = FUNC_2(VAR_5->lm3533, VAR_6, &VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_2->dev, "failed to read adc\n");
  return VAR_8;
 }

 *VAR_4 = VAR_7;

 return 0;
}
