
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpio_desc*,int) ;
 int FUNC_1 (struct iio_channel*,int*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_channel *VAR_3,
     struct gpio_desc *VAR_4, struct gpio_desc *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 FUNC_0(VAR_4, 1);
 FUNC_0(VAR_5, 1);

 FUNC_2(VAR_1, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_9 = FUNC_1(VAR_3, &VAR_8);
  if (VAR_9 < 0) {
   VAR_7 = VAR_9;
   goto error_iio_read;
  }

  VAR_7 += VAR_8;
 }

 VAR_7 /= VAR_2;

error_iio_read:
 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_5, 0);

 return VAR_7;
}
