
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_state {int lock; struct ms5611_osr const* pressure_osr; struct ms5611_osr const* temp_osr; } ;
struct ms5611_osr {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ms5611_state* FUNC_3 (struct iio_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ms5611_osr* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7,
       int VAR_8, int VAR_9, long VAR_10)
{
 struct ms5611_state *VAR_11 = FUNC_3(VAR_6);
 const struct ms5611_osr *VAR_12 = ((void*)0);
 int VAR_13;

 if (VAR_10 != VAR_1)
  return -VAR_0;

 if (VAR_7->type == VAR_3)
  VAR_12 = FUNC_4(VAR_8, VAR_5,
          FUNC_0(VAR_5));
 else if (VAR_7->type == VAR_2)
  VAR_12 = FUNC_4(VAR_8, VAR_4,
          FUNC_0(VAR_4));
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_6);
 if (VAR_13)
  return VAR_13;

 FUNC_5(&VAR_11->lock);

 if (VAR_7->type == VAR_3)
  VAR_11->temp_osr = VAR_12;
 else
  VAR_11->pressure_osr = VAR_12;

 FUNC_6(&VAR_11->lock);
 FUNC_2(VAR_6);

 return 0;
}
