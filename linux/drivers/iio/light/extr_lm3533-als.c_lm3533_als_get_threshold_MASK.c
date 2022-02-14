
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_als {int lm3533; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct lm3533_als* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2, unsigned VAR_3,
       bool VAR_4, u8 *VAR_5)
{
 struct lm3533_als *VAR_6 = FUNC_1(VAR_2);
 u8 VAR_7;
 int VAR_8;

 if (VAR_3 > VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 VAR_8 = FUNC_3(VAR_6->lm3533, VAR_7, VAR_5);
 if (VAR_8)
  FUNC_0(&VAR_2->dev, "failed to get threshold\n");

 return VAR_8;
}
