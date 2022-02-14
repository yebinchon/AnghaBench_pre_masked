
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_device {struct iio_dev* device; } ;
struct iio_dev {int name; } ;


 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_sw_device *VAR_0)
{






 struct iio_dev *VAR_1 = VAR_0->device;


 FUNC_1(VAR_1);




 FUNC_3(VAR_1);

 FUNC_2(VAR_1);


 FUNC_4(VAR_1->name);
 FUNC_0(VAR_1);

 return 0;
}
