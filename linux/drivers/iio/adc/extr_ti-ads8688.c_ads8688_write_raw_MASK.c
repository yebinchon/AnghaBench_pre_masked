
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ads8688_state {size_t* range; int vref_mv; int lock; } ;
struct TYPE_3__ {int offset; int scale; size_t range; int reg; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;


 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int ) ;
 struct ads8688_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct ads8688_state *VAR_8 = FUNC_2(VAR_3);
 unsigned int VAR_9 = 0;
 int VAR_10 = -VAR_1, VAR_11, VAR_12 = 0;

 FUNC_3(&VAR_8->lock);
 switch (VAR_7) {
 case 128:

  VAR_12 = VAR_2[VAR_8->range[VAR_4->channel]].offset;
  if (VAR_12 == 0 && VAR_6 == VAR_2[0].scale * VAR_8->vref_mv) {
   FUNC_4(&VAR_8->lock);
   return -VAR_1;
  }


  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++)
   if (VAR_6 == VAR_2[VAR_11].scale * VAR_8->vref_mv &&
       VAR_12 == VAR_2[VAR_11].offset) {
    VAR_10 = FUNC_1(VAR_3, VAR_4,
     VAR_2[VAR_11].reg);
    break;
   }
  break;
 case 129:




  if (!(VAR_2[0].offset == VAR_5 ||
      VAR_2[3].offset == VAR_5)) {
   FUNC_4(&VAR_8->lock);
   return -VAR_1;
  }





  if (VAR_5 == 0 &&
      VAR_8->range[VAR_4->channel] == VAR_0) {
   FUNC_4(&VAR_8->lock);
   return -VAR_1;
  }

  VAR_9 = VAR_2[VAR_8->range[VAR_4->channel]].scale;


  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++)
   if (VAR_5 == VAR_2[VAR_11].offset &&
       VAR_9 == VAR_2[VAR_11].scale) {
    VAR_10 = FUNC_1(VAR_3, VAR_4,
     VAR_2[VAR_11].reg);
    break;
   }
  break;
 }

 if (!VAR_10)
  VAR_8->range[VAR_4->channel] = VAR_2[VAR_11].range;

 FUNC_4(&VAR_8->lock);

 return VAR_10;
}
