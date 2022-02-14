
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_6__ {int hsdev; } ;
struct TYPE_5__ {int report_id; int logical_minimum; } ;
struct als_state {int scale_pre_decml; int scale_post_decml; int scale_precision; int value_offset; TYPE_2__ common_attributes; TYPE_1__ als_illum; } ;
typedef int s32 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int*,int*) ;
 int FUNC_2 (TYPE_2__*,int*,int*) ;
 struct als_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int ,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
         struct iio_chan_spec const *VAR_6,
         int *VAR_7, int *VAR_8,
         long VAR_9)
{
 struct als_state *VAR_10 = FUNC_3(VAR_5);
 int VAR_11 = -1;
 u32 VAR_12;
 int VAR_13;
 s32 VAR_14;

 *VAR_7 = 0;
 *VAR_8 = 0;
 switch (VAR_9) {
 case 130:
  switch (VAR_6->scan_index) {
  case 133:
  case 134:
   VAR_11 = VAR_10->als_illum.report_id;
   VAR_14 = VAR_10->als_illum.logical_minimum;
   VAR_12 = VAR_2;
   break;
  default:
   VAR_11 = -1;
   break;
  }
  if (VAR_11 >= 0) {
   FUNC_0(&VAR_10->common_attributes,
      1);
   *VAR_7 = FUNC_4(
     VAR_10->common_attributes.hsdev,
     VAR_1, VAR_12,
     VAR_11,
     VAR_4,
     VAR_14 < 0);
   FUNC_0(&VAR_10->common_attributes,
      0);
  } else {
   *VAR_7 = 0;
   return -VAR_0;
  }
  VAR_13 = VAR_3;
  break;
 case 128:
  *VAR_7 = VAR_10->scale_pre_decml;
  *VAR_8 = VAR_10->scale_post_decml;
  VAR_13 = VAR_10->scale_precision;
  break;
 case 131:
  *VAR_7 = VAR_10->value_offset;
  VAR_13 = VAR_3;
  break;
 case 129:
  VAR_13 = FUNC_2(
    &VAR_10->common_attributes, VAR_7, VAR_8);
  break;
 case 132:
  VAR_13 = FUNC_1(
    &VAR_10->common_attributes, VAR_7, VAR_8);
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }

 return VAR_13;
}
