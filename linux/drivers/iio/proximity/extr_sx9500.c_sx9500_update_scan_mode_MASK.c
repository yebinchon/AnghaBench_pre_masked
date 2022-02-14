
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int * buffer; int mutex; } ;
struct iio_dev {int scan_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sx9500_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
       const unsigned long *VAR_3)
{
 struct sx9500_data *VAR_4 = FUNC_0(VAR_2);

 FUNC_3(&VAR_4->mutex);
 FUNC_1(VAR_4->buffer);
 VAR_4->buffer = FUNC_2(VAR_2->scan_bytes, VAR_1);
 FUNC_4(&VAR_4->mutex);

 if (VAR_4->buffer == ((void*)0))
  return -VAR_0;

 return 0;
}
