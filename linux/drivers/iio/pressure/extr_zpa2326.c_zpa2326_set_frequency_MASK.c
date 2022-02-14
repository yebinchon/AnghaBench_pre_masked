
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zpa2326_private {TYPE_1__* frequency; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int hz; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct zpa2326_private* FUNC_3 (struct iio_dev*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2, int VAR_3)
{
 struct zpa2326_private *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 int VAR_6;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  if (VAR_1[VAR_5].hz == VAR_3)
   break;
 if (VAR_5 == FUNC_0(VAR_1))
  return -VAR_0;


 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_4->frequency = &VAR_1[VAR_5];

 FUNC_2(VAR_2);

 return 0;
}
