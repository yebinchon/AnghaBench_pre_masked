
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5758_state {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct ad5758_state*,int ,int) ;
 struct ad5758_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
       struct iio_chan_spec const *VAR_3,
       int VAR_4, int VAR_5, long VAR_6)
{
 struct ad5758_state *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 128:
  FUNC_2(&VAR_7->lock);
  VAR_8 = FUNC_0(VAR_7, VAR_0, VAR_4);
  FUNC_3(&VAR_7->lock);
  return VAR_8;
 default:
  return -VAR_1;
 }
}
