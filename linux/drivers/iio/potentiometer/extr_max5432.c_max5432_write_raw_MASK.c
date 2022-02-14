
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max5432_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct max5432_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
   struct iio_chan_spec const *VAR_4,
   int VAR_5, int VAR_6, long VAR_7)
{
 struct max5432_data *VAR_8 = FUNC_1(VAR_3);
 u8 VAR_9;

 if (VAR_7 != VAR_1)
  return -VAR_0;

 if (VAR_5 < 0 || VAR_5 > VAR_2)
  return -VAR_0;

 if (VAR_6 != 0)
  return -VAR_0;


 VAR_9 = VAR_5 << 3;
 return FUNC_0(VAR_8->client, VAR_4->address,
   VAR_9);
}
