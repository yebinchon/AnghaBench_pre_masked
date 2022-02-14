
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int modes; int id; int buffer; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int VAR_1 ;
 int FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->modes & VAR_0)
  FUNC_5(VAR_3);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);

 FUNC_2(VAR_3->buffer);

 FUNC_1(&VAR_1, VAR_3->id);
 FUNC_6(VAR_3);
}
