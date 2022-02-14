
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {TYPE_1__* setup_ops; } ;
struct TYPE_2__ {int (* validate_scan_mask ) (struct iio_dev*,unsigned long const*) ;} ;


 int FUNC_0 (struct iio_dev*,unsigned long const*) ;

__attribute__((used)) static bool FUNC_1(struct iio_dev *VAR_0,
 const unsigned long *VAR_1)
{
 if (!VAR_0->setup_ops->validate_scan_mask)
  return 1;

 return VAR_0->setup_ops->validate_scan_mask(VAR_0, VAR_1);
}
