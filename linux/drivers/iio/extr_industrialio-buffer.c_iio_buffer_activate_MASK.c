
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int buffer_list; } ;
struct iio_buffer {int buffer_list; } ;


 int FUNC_0 (struct iio_buffer*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_0,
 struct iio_buffer *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->buffer_list, &VAR_0->buffer_list);
}
