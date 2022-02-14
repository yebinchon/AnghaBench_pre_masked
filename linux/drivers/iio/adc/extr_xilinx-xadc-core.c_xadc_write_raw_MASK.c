
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct xadc* FUNC_0 (struct iio_dev*) ;
 unsigned long FUNC_1 (struct xadc*) ;
 int FUNC_2 (struct xadc*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5,
 struct iio_chan_spec const *VAR_6, int VAR_7, int VAR_8, long VAR_9)
{
 struct xadc *VAR_10 = FUNC_0(VAR_5);
 unsigned long VAR_11 = FUNC_1(VAR_10);
 unsigned int VAR_12;

 if (!VAR_11)
  return -VAR_0;

 if (VAR_9 != VAR_1)
  return -VAR_0;

 if (VAR_7 <= 0)
  return -VAR_0;


 if (VAR_7 > 150000)
  VAR_7 = 150000;

 VAR_7 *= 26;


 if (VAR_7 < 1000000)
  VAR_7 = 1000000;





 VAR_12 = VAR_11 / VAR_7;
 if (VAR_11 / VAR_12 / 26 > 150000)
  VAR_12++;
 if (VAR_12 < 2)
  VAR_12 = 2;
 else if (VAR_12 > 0xff)
  VAR_12 = 0xff;

 return FUNC_2(VAR_10, VAR_4, VAR_2,
  VAR_12 << VAR_3);
}
