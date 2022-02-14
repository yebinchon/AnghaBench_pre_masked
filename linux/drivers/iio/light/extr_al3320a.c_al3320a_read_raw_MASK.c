
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct al3320a_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int** VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct al3320a_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_8,
       struct iio_chan_spec const *VAR_9, int *VAR_10,
       int *VAR_11, long VAR_12)
{
 struct al3320a_data *VAR_13 = FUNC_2(VAR_8);
 int VAR_14;

 switch (VAR_12) {
 case 129:





  VAR_14 = FUNC_1(VAR_13->client,
            VAR_3);
  if (VAR_14 < 0)
   return VAR_14;
  *VAR_10 = VAR_14;
  return VAR_5;
 case 128:
  VAR_14 = FUNC_0(VAR_13->client,
            VAR_2);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_14 = (VAR_14 & VAR_0) >> VAR_1;
  *VAR_10 = VAR_7[VAR_14][0];
  *VAR_11 = VAR_7[VAR_14][1];

  return VAR_6;
 }
 return -VAR_4;
}
