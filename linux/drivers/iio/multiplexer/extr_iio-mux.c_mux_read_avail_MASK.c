
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux {int parent; struct iio_chan_spec const* chan; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct mux*) ;
 int FUNC_1 (struct mux*,int) ;
 struct mux* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int const**,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
     struct iio_chan_spec const *VAR_3,
     const int **VAR_4, int *VAR_5, int *VAR_6,
     long VAR_7)
{
 struct mux *VAR_8 = FUNC_2(VAR_2);
 int VAR_9 = VAR_3 - VAR_8->chan;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_7) {
 case 128:
  *VAR_5 = VAR_1;
  VAR_10 = FUNC_3(VAR_8->parent, VAR_4, VAR_6);
  break;

 default:
  VAR_10 = -VAR_0;
 }

 FUNC_0(VAR_8);

 return VAR_10;
}
