
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct adis {int dummy; } ;


 int FUNC_0 (struct adis*,int) ;
 struct adis* FUNC_1 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_2(struct iio_trigger *VAR_0,
      bool VAR_1)
{
 struct adis *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
