
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct max1027_state {int spi; scalar_t__ buffer; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct max1027_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
          unsigned VAR_2, unsigned VAR_3,
          unsigned *VAR_4)
{
 struct max1027_state *VAR_5 = FUNC_0(VAR_1);
 u8 *VAR_6 = (u8 *)VAR_5->buffer;

 if (VAR_4 != ((void*)0))
  return -VAR_0;

 *VAR_6 = (u8)VAR_3;
 return FUNC_1(VAR_5->spi, VAR_6, 1);
}
