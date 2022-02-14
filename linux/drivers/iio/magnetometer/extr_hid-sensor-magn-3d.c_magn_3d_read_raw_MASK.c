
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int hsdev; } ;
struct TYPE_9__ {int scale_pre_decml; int scale_post_decml; int scale_precision; int value_offset; } ;
struct TYPE_8__ {int scale_pre_decml; int scale_post_decml; int scale_precision; int value_offset; } ;
struct magn_3d_state {TYPE_4__ rot_attributes; TYPE_4__ magn_flux_attributes; TYPE_3__ rot_attr; TYPE_2__ magn_flux_attr; TYPE_1__* magn; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
typedef int s32 ;
struct TYPE_7__ {int report_id; int logical_minimum; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int*,int*) ;
 int FUNC_2 (TYPE_4__*,int*,int*) ;
 struct magn_3d_state* FUNC_3 (struct iio_dev*) ;
 int * VAR_4 ;
 int FUNC_4 (int ,int ,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
         struct iio_chan_spec const *VAR_6,
         int *VAR_7, int *VAR_8,
         long VAR_9)
{
 struct magn_3d_state *VAR_10 = FUNC_3(VAR_5);
 int VAR_11 = -1;
 u32 VAR_12;
 int VAR_13;
 s32 VAR_14;

 *VAR_7 = 0;
 *VAR_8 = 0;
 switch (VAR_9) {
 case 132:
  FUNC_0(&VAR_10->magn_flux_attributes, 1);
  VAR_11 = VAR_10->magn[VAR_6->address].report_id;
  VAR_14 = VAR_10->magn[VAR_6->address].logical_minimum;
  VAR_12 = VAR_4[VAR_6->address];
  if (VAR_11 >= 0)
   *VAR_7 = FUNC_4(
    VAR_10->magn_flux_attributes.hsdev,
    VAR_1, VAR_12,
    VAR_11,
    VAR_3,
    VAR_14 < 0);
  else {
   *VAR_7 = 0;
   FUNC_0(
    &VAR_10->magn_flux_attributes,
    0);
   return -VAR_0;
  }
  FUNC_0(&VAR_10->magn_flux_attributes,
     0);
  VAR_13 = VAR_2;
  break;
 case 130:
  switch (VAR_6->type) {
  case 129:
   *VAR_7 = VAR_10->magn_flux_attr.scale_pre_decml;
   *VAR_8 = VAR_10->magn_flux_attr.scale_post_decml;
   VAR_13 = VAR_10->magn_flux_attr.scale_precision;
   break;
  case 128:
   *VAR_7 = VAR_10->rot_attr.scale_pre_decml;
   *VAR_8 = VAR_10->rot_attr.scale_post_decml;
   VAR_13 = VAR_10->rot_attr.scale_precision;
   break;
  default:
   VAR_13 = -VAR_0;
  }
  break;
 case 133:
  switch (VAR_6->type) {
  case 129:
   *VAR_7 = VAR_10->magn_flux_attr.value_offset;
   VAR_13 = VAR_2;
   break;
  case 128:
   *VAR_7 = VAR_10->rot_attr.value_offset;
   VAR_13 = VAR_2;
   break;
  default:
   VAR_13 = -VAR_0;
  }
  break;
 case 131:
  VAR_13 = FUNC_2(
   &VAR_10->magn_flux_attributes, VAR_7, VAR_8);
  break;
 case 134:
  switch (VAR_6->type) {
  case 129:
   VAR_13 = FUNC_1(
    &VAR_10->magn_flux_attributes, VAR_7, VAR_8);
   break;
  case 128:
   VAR_13 = FUNC_1(
    &VAR_10->rot_attributes, VAR_7, VAR_8);
   break;
  default:
   VAR_13 = -VAR_0;
  }
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }

 return VAR_13;
}
