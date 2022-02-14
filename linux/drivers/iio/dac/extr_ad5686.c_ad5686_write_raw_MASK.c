
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_2__ {int realbits; int shift; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct ad5686_state {int (* write ) (struct ad5686_state*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;

 struct ad5686_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ad5686_state*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
       struct iio_chan_spec const *VAR_3,
       int VAR_4,
       int VAR_5,
       long VAR_6)
{
 struct ad5686_state *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 128:
  if (VAR_4 > (1 << VAR_3->scan_type.realbits) || VAR_4 < 0)
   return -VAR_1;

  FUNC_1(&VAR_2->mlock);
  VAR_8 = VAR_7->write(VAR_7,
    VAR_0,
    VAR_3->address,
    VAR_4 << VAR_3->scan_type.shift);
  FUNC_2(&VAR_2->mlock);
  break;
 default:
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
