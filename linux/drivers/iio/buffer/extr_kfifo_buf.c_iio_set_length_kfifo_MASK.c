
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {unsigned int length; } ;


 int FUNC_0 (struct iio_buffer*) ;

__attribute__((used)) static int FUNC_1(struct iio_buffer *VAR_0, unsigned int VAR_1)
{

 if (VAR_1 < 2)
  VAR_1 = 2;
 if (VAR_0->length != VAR_1) {
  VAR_0->length = VAR_1;
  FUNC_0(VAR_0);
 }
 return 0;
}
