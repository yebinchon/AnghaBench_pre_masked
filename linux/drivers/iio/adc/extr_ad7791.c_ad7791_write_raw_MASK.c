
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad7791_state {int filter; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int**) ;
 int VAR_2 ;

 int** VAR_3 ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad7791_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
 struct iio_chan_spec const *VAR_5, int VAR_6, int VAR_7, long VAR_8)
{
 struct ad7791_state *VAR_9 = FUNC_4(VAR_4);
 int VAR_10, VAR_11;

 VAR_10 = FUNC_2(VAR_4);
 if (VAR_10)
  return VAR_10;

 switch (VAR_8) {
 case 128:
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
   if (VAR_3[VAR_11][0] == VAR_6 &&
       VAR_3[VAR_11][1] == VAR_7)
    break;
  }

  if (VAR_11 == FUNC_0(VAR_3)) {
   VAR_10 = -VAR_2;
   break;
  }

  VAR_9->filter &= ~VAR_0;
  VAR_9->filter |= VAR_11;
  FUNC_1(&VAR_9->sd, VAR_1,
    sizeof(VAR_9->filter),
    VAR_9->filter);
  break;
 default:
  VAR_10 = -VAR_2;
 }

 FUNC_3(VAR_4);
 return VAR_10;
}
