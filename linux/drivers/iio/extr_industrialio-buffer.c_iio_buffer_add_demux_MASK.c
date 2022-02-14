
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_demux_table {unsigned int from; unsigned int length; unsigned int to; int l; } ;
struct iio_buffer {int demux_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_demux_table* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct iio_buffer *VAR_2,
 struct iio_demux_table **VAR_3, unsigned int VAR_4, unsigned int VAR_5,
 unsigned int VAR_6)
{

 if (*VAR_3 && (*VAR_3)->from + (*VAR_3)->length == VAR_4 &&
  (*VAR_3)->to + (*VAR_3)->length == VAR_5) {
  (*VAR_3)->length += VAR_6;
 } else {
  *VAR_3 = FUNC_0(sizeof(**VAR_3), VAR_1);
  if (*VAR_3 == ((void*)0))
   return -VAR_0;
  (*VAR_3)->from = VAR_4;
  (*VAR_3)->to = VAR_5;
  (*VAR_3)->length = VAR_6;
  FUNC_1(&(*VAR_3)->l, &VAR_2->demux_list);
 }

 return 0;
}
