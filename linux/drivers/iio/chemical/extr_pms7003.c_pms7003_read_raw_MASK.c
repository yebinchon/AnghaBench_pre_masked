
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pms7003_frame {scalar_t__ data; } ;
struct pms7003_state {int lock; struct pms7003_frame frame; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ address; int type; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 struct pms7003_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pms7003_state*,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5, int *VAR_6, long VAR_7)
{
 struct pms7003_state *VAR_8 = FUNC_0(VAR_3);
 struct pms7003_frame *VAR_9 = &VAR_8->frame;
 int VAR_10;

 switch (VAR_7) {
 case 129:
  switch (VAR_4->type) {
  case 128:
   FUNC_1(&VAR_8->lock);
   VAR_10 = FUNC_3(VAR_8, VAR_0);
   if (VAR_10) {
    FUNC_2(&VAR_8->lock);
    return VAR_10;
   }

   *VAR_5 = FUNC_4(VAR_9->data + VAR_4->address);
   FUNC_2(&VAR_8->lock);

   return VAR_2;
  default:
   return -VAR_1;
  }
 }

 return -VAR_1;
}
