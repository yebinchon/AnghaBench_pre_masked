
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_cb_buffer {int (* cb ) (void const*,int ) ;int private; } ;
struct iio_buffer {int dummy; } ;


 struct iio_cb_buffer* FUNC_0 (struct iio_buffer*) ;
 int FUNC_1 (void const*,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_buffer *VAR_0, const void *VAR_1)
{
 struct iio_cb_buffer *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->cb(VAR_1, VAR_2->private);
}
