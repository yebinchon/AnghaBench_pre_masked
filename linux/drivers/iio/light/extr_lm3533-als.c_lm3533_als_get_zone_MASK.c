
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_als {int zone; int flags; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int *) ;
 int FUNC_1 (int *) ;
 struct lm3533_als* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1, u8 *VAR_2)
{
 struct lm3533_als *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (FUNC_3(VAR_0, &VAR_3->flags)) {
  *VAR_2 = FUNC_1(&VAR_3->zone);
 } else {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
