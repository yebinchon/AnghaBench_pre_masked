
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si1145_data {int autonomous; int lock; int client; int meas_rate; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 struct si1145_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct si1145_data*,int ) ;
 int FUNC_6 (struct si1145_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_trigger *VAR_6, bool VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_2(VAR_6);
 struct si1145_data *VAR_9 = FUNC_1(VAR_8);
 int VAR_10 = 0, VAR_11;

 FUNC_3(&VAR_9->lock);

 if (VAR_7) {
  VAR_9->autonomous = 1;
  VAR_10 = FUNC_0(VAR_9->client,
    VAR_4, VAR_2);
  if (VAR_10 < 0)
   goto disable;
  VAR_10 = FUNC_0(VAR_9->client,
    VAR_5, VAR_3);
  if (VAR_10 < 0)
   goto disable;
  VAR_10 = FUNC_6(VAR_9, VAR_9->meas_rate);
  if (VAR_10 < 0)
   goto disable;
  VAR_10 = FUNC_5(VAR_9, VAR_0);
  if (VAR_10 < 0)
   goto disable;
 } else {
disable:

  VAR_11 = FUNC_5(VAR_9, VAR_1);
  if (VAR_11 < 0 && !VAR_10)
   VAR_10 = VAR_11;
  VAR_11 = FUNC_6(VAR_9, 0);
  if (VAR_11 < 0 && !VAR_10)
   VAR_10 = VAR_11;
  VAR_11 = FUNC_0(VAR_9->client,
      VAR_5, 0);
  if (VAR_11 < 0 && !VAR_10)
   VAR_10 = VAR_11;
  VAR_11 = FUNC_0(VAR_9->client,
      VAR_4, 0);
  if (VAR_11 < 0 && !VAR_10)
   VAR_10 = VAR_11;
  VAR_9->autonomous = 0;
 }

 FUNC_4(&VAR_9->lock);
 return VAR_10;
}
