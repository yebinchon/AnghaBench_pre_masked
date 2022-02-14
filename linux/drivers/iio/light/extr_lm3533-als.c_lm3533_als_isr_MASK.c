
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_als {int zone; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct iio_dev*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iio_dev*) ;
 struct lm3533_als* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{

 struct iio_dev *VAR_6 = VAR_5;
 struct lm3533_als *VAR_7 = FUNC_4(VAR_6);
 u8 VAR_8;
 int VAR_9;


 VAR_9 = FUNC_1(VAR_6, &VAR_8);
 if (VAR_9)
  goto out;

 FUNC_2(&VAR_7->zone, VAR_8);

 FUNC_5(VAR_6,
         FUNC_0(VAR_2,
         0,
         VAR_1,
         VAR_0),
         FUNC_3(VAR_6));
out:
 return VAR_3;
}
