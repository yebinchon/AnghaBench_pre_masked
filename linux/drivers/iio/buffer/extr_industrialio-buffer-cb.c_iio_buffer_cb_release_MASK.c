
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scan_mask; } ;
struct iio_cb_buffer {TYPE_1__ buffer; } ;
struct iio_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 struct iio_cb_buffer* FUNC_1 (struct iio_buffer*) ;
 int FUNC_2 (struct iio_cb_buffer*) ;

__attribute__((used)) static void FUNC_3(struct iio_buffer *VAR_0)
{
 struct iio_cb_buffer *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->buffer.scan_mask);
 FUNC_2(VAR_1);
}
