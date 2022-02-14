
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {int dummy; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xadc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct xadc*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_4,
 struct iio_dev *VAR_5, int VAR_6)
{
 struct xadc *VAR_7 = FUNC_0(VAR_5);

 FUNC_1(VAR_7, VAR_2, VAR_3);
 FUNC_1(VAR_7, VAR_1, VAR_0);

 return 0;
}
