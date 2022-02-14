
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_3__ {int realbits; } ;
struct iio_chan_spec {size_t channel; int output; int type; TYPE_1__ scan_type; } ;
struct ad5592r_state {int* cached_dac; int** scale_avail; int cached_gp_ctrl; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* write_dac ) (struct ad5592r_state*,size_t,int) ;int (* reg_read ) (struct ad5592r_state*,int ,int *) ;int (* reg_write ) (struct ad5592r_state*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 struct ad5592r_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ad5592r_state*,size_t,int) ;
 int FUNC_4 (struct ad5592r_state*,int ,int *) ;
 int FUNC_5 (struct ad5592r_state*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
 struct iio_chan_spec const *VAR_6, int VAR_7, int VAR_8, long VAR_9)
{
 struct ad5592r_state *VAR_10 = FUNC_0(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 129:

  if (VAR_7 >= (1 << VAR_6->scan_type.realbits) || VAR_7 < 0)
   return -VAR_3;

  if (!VAR_6->output)
   return -VAR_3;

  FUNC_1(&VAR_5->mlock);
  VAR_11 = VAR_10->ops->write_dac(VAR_10, VAR_6->channel, VAR_7);
  if (!VAR_11)
   VAR_10->cached_dac[VAR_6->channel] = VAR_7;
  FUNC_2(&VAR_5->mlock);
  return VAR_11;
 case 128:
  if (VAR_6->type == VAR_4) {
   bool VAR_12;

   if (VAR_7 == VAR_10->scale_avail[0][0] &&
    VAR_8 == VAR_10->scale_avail[0][1])
    VAR_12 = 0;
   else if (VAR_7 == VAR_10->scale_avail[1][0] &&
     VAR_8 == VAR_10->scale_avail[1][1])
    VAR_12 = 1;
   else
    return -VAR_3;

   FUNC_1(&VAR_5->mlock);

   VAR_11 = VAR_10->ops->reg_read(VAR_10, VAR_0,
      &VAR_10->cached_gp_ctrl);
   if (VAR_11 < 0) {
    FUNC_2(&VAR_5->mlock);
    return VAR_11;
   }

   if (VAR_6->output) {
    if (VAR_12)
     VAR_10->cached_gp_ctrl |=
      VAR_2;
    else
     VAR_10->cached_gp_ctrl &=
      ~VAR_2;
   } else {
    if (VAR_12)
     VAR_10->cached_gp_ctrl |=
      VAR_1;
    else
     VAR_10->cached_gp_ctrl &=
      ~VAR_1;
   }

   VAR_11 = VAR_10->ops->reg_write(VAR_10, VAR_0,
       VAR_10->cached_gp_ctrl);
   FUNC_2(&VAR_5->mlock);

   return VAR_11;
  }
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
