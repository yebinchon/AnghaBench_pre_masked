
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int hsdev; } ;
struct TYPE_5__ {int report_id; int units; int unit_expo; int logical_minimum; } ;
struct prox_state {TYPE_2__ common_attributes; TYPE_1__ prox_attr; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
typedef int s32 ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int*,int*) ;
 int FUNC_3 (TYPE_2__*,int*,int*) ;
 struct prox_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
         struct iio_chan_spec const *VAR_6,
         int *VAR_7, int *VAR_8,
         long VAR_9)
{
 struct prox_state *VAR_10 = FUNC_4(VAR_5);
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
   VAR_11 = VAR_10->prox_attr.report_id;
   VAR_14 = VAR_10->prox_attr.logical_minimum;
   VAR_12 = VAR_1;
   break;
  default:
   VAR_11 = -1;
   break;
  }
  if (VAR_11 >= 0) {
   FUNC_1(&VAR_10->common_attributes,
      1);
   *VAR_7 = FUNC_5(
    VAR_10->common_attributes.hsdev,
    VAR_2, VAR_12,
    VAR_11,
    VAR_4,
    VAR_14 < 0);
   FUNC_1(&VAR_10->common_attributes,
      0);
  } else {
   *VAR_7 = 0;
   return -VAR_0;
  }
  VAR_13 = VAR_3;
  break;
 case 128:
  *VAR_7 = VAR_10->prox_attr.units;
  VAR_13 = VAR_3;
  break;
 case 131:
  *VAR_7 = FUNC_0(
    VAR_10->prox_attr.unit_expo);
  VAR_13 = VAR_3;
  break;
 case 129:
  VAR_13 = FUNC_3(
    &VAR_10->common_attributes, VAR_7, VAR_8);
  break;
 case 132:
  VAR_13 = FUNC_2(
    &VAR_10->common_attributes, VAR_7, VAR_8);
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }

 return VAR_13;
}
