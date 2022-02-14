
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct dev_rot_state {int* sampled_vals; int scale_pre_decml; int scale_post_decml; int scale_precision; int value_offset; int common_attributes; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (int *,int*,int*) ;
 struct dev_rot_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
    struct iio_chan_spec const *VAR_4,
    int VAR_5, int *VAR_6, int *VAR_7,
    long VAR_8)
{
 struct dev_rot_state *VAR_9 = FUNC_2(VAR_3);
 int VAR_10;
 int VAR_11;

 VAR_6[0] = 0;
 VAR_6[1] = 0;

 switch (VAR_8) {
 case 130:
  if (VAR_5 >= 4) {
   for (VAR_11 = 0; VAR_11 < 4; ++VAR_11)
    VAR_6[VAR_11] = VAR_9->sampled_vals[VAR_11];
   VAR_10 = VAR_2;
   *VAR_7 = 4;
  } else
   VAR_10 = -VAR_0;
  break;
 case 128:
  VAR_6[0] = VAR_9->scale_pre_decml;
  VAR_6[1] = VAR_9->scale_post_decml;
  return VAR_9->scale_precision;

 case 131:
  *VAR_6 = VAR_9->value_offset;
  return VAR_1;

 case 129:
  VAR_10 = FUNC_1(
   &VAR_9->common_attributes, &VAR_6[0], &VAR_6[1]);
  break;
 case 132:
  VAR_10 = FUNC_0(
   &VAR_9->common_attributes, &VAR_6[0], &VAR_6[1]);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }

 return VAR_10;
}
