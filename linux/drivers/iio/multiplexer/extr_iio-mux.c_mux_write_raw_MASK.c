
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux {int parent; struct iio_chan_spec const* chan; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct mux*) ;
 int FUNC_1 (struct mux*,int) ;
 struct mux* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
    struct iio_chan_spec const *VAR_2,
    int VAR_3, int VAR_4, long VAR_5)
{
 struct mux *VAR_6 = FUNC_2(VAR_1);
 int VAR_7 = VAR_2 - VAR_6->chan;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_3(VAR_6->parent, VAR_3);
  break;

 default:
  VAR_8 = -VAR_0;
 }

 FUNC_0(VAR_6);

 return VAR_8;
}
