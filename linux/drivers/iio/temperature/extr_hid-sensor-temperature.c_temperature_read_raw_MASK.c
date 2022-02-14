
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hsdev; } ;
struct TYPE_5__ {int logical_minimum; int report_id; } ;
struct temperature_state {int scale_pre_decml; int scale_post_decml; int scale_precision; int value_offset; TYPE_2__ common_attributes; TYPE_1__ temperature_attr; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int*,int*) ;
 int FUNC_2 (TYPE_2__*,int*,int*) ;
 struct temperature_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
    struct iio_chan_spec const *VAR_7,
    int *VAR_8, int *VAR_9, long VAR_10)
{
 struct temperature_state *VAR_11 = FUNC_3(VAR_6);

 switch (VAR_10) {
 case 130:
  if (VAR_7->type != VAR_3)
   return -VAR_0;
  FUNC_0(
   &VAR_11->common_attributes, 1);
  *VAR_8 = FUNC_4(
   VAR_11->common_attributes.hsdev,
   VAR_2,
   VAR_1,
   VAR_11->temperature_attr.report_id,
   VAR_5,
   VAR_11->temperature_attr.logical_minimum < 0);
  FUNC_0(
    &VAR_11->common_attributes,
    0);

  return VAR_4;

 case 128:
  *VAR_8 = VAR_11->scale_pre_decml;
  *VAR_9 = VAR_11->scale_post_decml;
  return VAR_11->scale_precision;

 case 131:
  *VAR_8 = VAR_11->value_offset;
  return VAR_4;

 case 129:
  return FUNC_2(
    &VAR_11->common_attributes, VAR_8, VAR_9);

 case 132:
  return FUNC_1(
    &VAR_11->common_attributes, VAR_8, VAR_9);
 default:
  return -VAR_0;
 }
}
