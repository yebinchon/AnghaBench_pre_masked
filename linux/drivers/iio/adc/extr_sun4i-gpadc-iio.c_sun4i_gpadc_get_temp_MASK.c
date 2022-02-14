
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_gpadc_iio {int indio_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, int *VAR_2)
{
 struct sun4i_gpadc_iio *VAR_3 = VAR_1;
 int VAR_4, VAR_5, VAR_6;

 if (FUNC_1(VAR_3->indio_dev, &VAR_4))
  return -VAR_0;

 FUNC_2(VAR_3->indio_dev, &VAR_5);
 FUNC_0(VAR_3->indio_dev, &VAR_6);

 *VAR_2 = (VAR_4 + VAR_6) * VAR_5;

 return 0;
}
