
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int const type; } ;
struct ad2s1200_state {int lock; int rx; int sdev; int rdvel; int sample; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 struct ad2s1200_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5,
        int *VAR_6,
        int *VAR_7,
        long VAR_8)
{
 struct ad2s1200_state *VAR_9 = FUNC_2(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 128:
  switch (VAR_5->type) {
  case 131:

   *VAR_6 = 0;
   *VAR_7 = 1534355;
   return VAR_3;
  case 130:

   *VAR_6 = 6;
   *VAR_7 = 283185;
   return VAR_2;
  default:
   return -VAR_0;
  }
  break;
 case 129:
  FUNC_3(&VAR_9->lock);
  FUNC_1(VAR_9->sample, 0);


  FUNC_7(1);
  FUNC_1(VAR_9->sample, 1);
  FUNC_1(VAR_9->rdvel, !!(VAR_5->type == 131));

  VAR_10 = FUNC_6(VAR_9->sdev, &VAR_9->rx, 2);
  if (VAR_10 < 0) {
   FUNC_4(&VAR_9->lock);
   return VAR_10;
  }

  switch (VAR_5->type) {
  case 131:
   *VAR_6 = FUNC_0(&VAR_9->rx) >> 4;
   break;
  case 130:
   *VAR_6 = FUNC_5(FUNC_0(&VAR_9->rx) >> 4, 11);
   break;
  default:
   FUNC_4(&VAR_9->lock);
   return -VAR_0;
  }


  FUNC_7(1);
  FUNC_4(&VAR_9->lock);

  return VAR_1;
 default:
  break;
 }

 return -VAR_0;
}
