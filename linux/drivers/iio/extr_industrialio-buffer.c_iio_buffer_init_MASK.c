
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {int watermark; int ref; int pollq; int buffer_list; int demux_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iio_buffer *VAR_0)
{
 FUNC_0(&VAR_0->demux_list);
 FUNC_0(&VAR_0->buffer_list);
 FUNC_1(&VAR_0->pollq);
 FUNC_2(&VAR_0->ref);
 if (!VAR_0->watermark)
  VAR_0->watermark = 1;
}
