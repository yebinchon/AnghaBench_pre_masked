
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct ad7606_state {int (* write_scale ) (struct iio_dev*,int,int) ;int* range; int (* write_os ) (struct iio_dev*,int) ;int lock; int * oversampling_avail; int oversampling; int num_os_ratios; int sw_mode_en; int num_scales; int * scale_avail; } ;


 int VAR_0 ;


 int FUNC_0 (int,int *,int ) ;
 struct ad7606_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iio_dev*,int,int) ;
 int FUNC_5 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3,
       int VAR_4,
       long VAR_5)
{
 struct ad7606_state *VAR_6 = FUNC_1(VAR_1);
 int VAR_7, VAR_8, VAR_9 = 0;

 switch (VAR_5) {
 case 128:
  FUNC_2(&VAR_6->lock);
  VAR_7 = FUNC_0(VAR_4, VAR_6->scale_avail, VAR_6->num_scales);
  if (VAR_6->sw_mode_en)
   VAR_9 = VAR_2->address;
  VAR_8 = VAR_6->write_scale(VAR_1, VAR_9, VAR_7);
  if (VAR_8 < 0) {
   FUNC_3(&VAR_6->lock);
   return VAR_8;
  }
  VAR_6->range[VAR_9] = VAR_7;
  FUNC_3(&VAR_6->lock);

  return 0;
 case 129:
  if (VAR_4)
   return -VAR_0;
  VAR_7 = FUNC_0(VAR_3, VAR_6->oversampling_avail,
     VAR_6->num_os_ratios);
  FUNC_2(&VAR_6->lock);
  VAR_8 = VAR_6->write_os(VAR_1, VAR_7);
  if (VAR_8 < 0) {
   FUNC_3(&VAR_6->lock);
   return VAR_8;
  }
  VAR_6->oversampling = VAR_6->oversampling_avail[VAR_7];
  FUNC_3(&VAR_6->lock);

  return 0;
 default:
  return -VAR_0;
 }
}
