
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scale; int uscale; } ;
struct isl29018_chip {size_t type; size_t int_time; int calibscale; int ucalibscale; int lock; TYPE_1__ scale; int prox_scheme; scalar_t__ suspended; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int const type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct isl29018_chip* FUNC_0 (struct iio_dev*) ;
 int** VAR_4 ;
 int FUNC_1 (struct isl29018_chip*,int*) ;
 int FUNC_2 (struct isl29018_chip*,int*) ;
 int FUNC_3 (struct isl29018_chip*,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int *VAR_7,
        int *VAR_8,
        long VAR_9)
{
 int VAR_10 = -VAR_1;
 struct isl29018_chip *VAR_11 = FUNC_0(VAR_5);

 FUNC_4(&VAR_11->lock);
 if (VAR_11->suspended) {
  VAR_10 = -VAR_0;
  goto read_done;
 }
 switch (VAR_9) {
 case 132:
 case 133:
  switch (VAR_6->type) {
  case 129:
   VAR_10 = FUNC_2(VAR_11, VAR_7);
   break;
  case 130:
   VAR_10 = FUNC_1(VAR_11, VAR_7);
   break;
  case 128:
   VAR_10 = FUNC_3(VAR_11,
        VAR_11->prox_scheme,
        VAR_7);
   break;
  default:
   break;
  }
  if (!VAR_10)
   VAR_10 = VAR_2;
  break;
 case 134:
  if (VAR_6->type == 129) {
   *VAR_7 = 0;
   *VAR_8 = VAR_4[VAR_11->type][VAR_11->int_time];
   VAR_10 = VAR_3;
  }
  break;
 case 131:
  if (VAR_6->type == 129) {
   *VAR_7 = VAR_11->scale.scale;
   *VAR_8 = VAR_11->scale.uscale;
   VAR_10 = VAR_3;
  }
  break;
 case 135:
  if (VAR_6->type == 129) {
   *VAR_7 = VAR_11->calibscale;
   *VAR_8 = VAR_11->ucalibscale;
   VAR_10 = VAR_3;
  }
  break;
 default:
  break;
 }

read_done:
 FUNC_5(&VAR_11->lock);

 return VAR_10;
}
