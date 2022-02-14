
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_2__ {int storagebits; char sign; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct adis {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adis*) ;
 int FUNC_1 (struct adis*,int ,unsigned int*,int) ;
 struct adis* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,int) ;

int FUNC_6(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2, unsigned int VAR_3, int *VAR_4)
{
 struct adis *VAR_5 = FUNC_2(VAR_1);
 unsigned int VAR_6;
 int VAR_7;

 FUNC_3(&VAR_1->mlock);

 VAR_7 = FUNC_1(VAR_5, VAR_2->address, &VAR_6,
   VAR_2->scan_type.storagebits / 8);
 if (VAR_7)
  goto err_unlock;

 if (VAR_6 & VAR_3) {
  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7)
   goto err_unlock;
 }

 if (VAR_2->scan_type.sign == 's')
  *VAR_4 = FUNC_5(VAR_6, VAR_2->scan_type.realbits - 1);
 else
  *VAR_4 = VAR_6 & ((1 << VAR_2->scan_type.realbits) - 1);

 VAR_7 = VAR_0;
err_unlock:
 FUNC_4(&VAR_1->mlock);
 return VAR_7;
}
