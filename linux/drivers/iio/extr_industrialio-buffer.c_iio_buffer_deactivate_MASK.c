
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {int pollq; int buffer_list; } ;


 int FUNC_0 (struct iio_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iio_buffer *VAR_0)
{
 FUNC_1(&VAR_0->buffer_list);
 FUNC_2(&VAR_0->pollq);
 FUNC_0(VAR_0);
}
