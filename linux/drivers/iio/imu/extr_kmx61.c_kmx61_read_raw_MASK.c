
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kmx61_data {size_t range; int lock; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {int const type; int address; TYPE_1__ scan_type; int scan_index; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kmx61_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct kmx61_data*,int*,int*,int ) ;
 int FUNC_2 (struct kmx61_data*,int ,int ) ;
 int FUNC_3 (struct kmx61_data*,int,int ) ;
 int* VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_6,
     struct iio_chan_spec const *VAR_7, int *VAR_8,
     int *VAR_9, long VAR_10)
{
 int VAR_11;
 u8 VAR_12;
 struct kmx61_data *VAR_13 = FUNC_0(VAR_6);

 switch (VAR_10) {
 case 131:
  switch (VAR_7->type) {
  case 132:
   VAR_12 = VAR_3;
   break;
  case 128:
   VAR_12 = VAR_4;
   break;
  default:
   return -VAR_0;
  }
  FUNC_4(&VAR_13->lock);

  VAR_11 = FUNC_3(VAR_13, 1, VAR_7->address);
  if (VAR_11) {
   FUNC_5(&VAR_13->lock);
   return VAR_11;
  }

  VAR_11 = FUNC_2(VAR_13, VAR_12, VAR_7->scan_index);
  if (VAR_11 < 0) {
   FUNC_3(VAR_13, 0, VAR_7->address);
   FUNC_5(&VAR_13->lock);
   return VAR_11;
  }
  *VAR_8 = FUNC_6(VAR_11 >> VAR_7->scan_type.shift,
         VAR_7->scan_type.realbits - 1);
  VAR_11 = FUNC_3(VAR_13, 0, VAR_7->address);

  FUNC_5(&VAR_13->lock);
  if (VAR_11)
   return VAR_11;
  return VAR_1;
 case 129:
  switch (VAR_7->type) {
  case 132:
   *VAR_8 = 0;
   *VAR_9 = VAR_5[VAR_13->range];
   return VAR_2;
  case 128:

   *VAR_8 = 0;
   *VAR_9 = 1465;
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 130:
  if (VAR_7->type != 132 && VAR_7->type != 128)
   return -VAR_0;

  FUNC_4(&VAR_13->lock);
  VAR_11 = FUNC_1(VAR_13, VAR_8, VAR_9, VAR_7->address);
  FUNC_5(&VAR_13->lock);
  if (VAR_11)
   return -VAR_0;
  return VAR_2;
 }
 return -VAR_0;
}
