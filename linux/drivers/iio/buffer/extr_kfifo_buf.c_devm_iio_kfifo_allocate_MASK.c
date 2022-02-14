
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct iio_buffer**) ;
 struct iio_buffer** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct iio_buffer**) ;
 struct iio_buffer* FUNC_3 () ;

struct iio_buffer *FUNC_4(struct device *VAR_2)
{
 struct iio_buffer **VAR_3, *VAR_4;

 VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_3();
 if (VAR_4) {
  *VAR_3 = VAR_4;
  FUNC_0(VAR_2, VAR_3);
 } else {
  FUNC_2(VAR_3);
 }

 return VAR_4;
}
