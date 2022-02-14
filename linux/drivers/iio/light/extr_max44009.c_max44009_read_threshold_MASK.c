
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44009_data {int client; } ;
struct iio_dev {int dummy; } ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 struct max44009_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
       enum iio_event_direction VAR_7)
{
 struct max44009_data *VAR_8 = FUNC_1(VAR_6);
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_8->client, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_11 = VAR_9 & VAR_4;
 VAR_11 <<= VAR_3;





 if (VAR_7 == VAR_0)
  VAR_11 += VAR_5;





 VAR_12 = VAR_9 & VAR_1;
 VAR_12 >>= VAR_2;

 return (1 << VAR_12) * VAR_11;
}
