
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_buffer {TYPE_1__* access; int scan_timestamp; int scan_mask; } ;
struct TYPE_2__ {int (* set_bytes_per_datum ) (struct iio_buffer*,unsigned int) ;} ;


 unsigned int FUNC_0 (struct iio_dev*,int ,int ) ;
 int FUNC_1 (struct iio_buffer*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_0,
 struct iio_buffer *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1->access->set_bytes_per_datum)
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_1->scan_mask,
  VAR_1->scan_timestamp);

 VAR_1->access->set_bytes_per_datum(VAR_1, VAR_2);
}
