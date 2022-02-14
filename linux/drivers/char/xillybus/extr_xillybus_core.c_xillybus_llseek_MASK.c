
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xilly_channel {int log2_element_size; int chan_num; scalar_t__* rd_leftovers; int wr_mutex; int rd_mutex; TYPE_1__* endpoint; } ;
struct file {int f_pos; struct xilly_channel* private_data; } ;
typedef int loff_t ;
struct TYPE_2__ {int register_mutex; scalar_t__ registers; scalar_t__ fatal_error; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_4, loff_t VAR_5, int VAR_6)
{
 struct xilly_channel *VAR_7 = VAR_4->private_data;
 loff_t VAR_8 = VAR_4->f_pos;
 int VAR_9 = 0;
 if (VAR_7->endpoint->fatal_error)
  return -VAR_1;

 FUNC_1(&VAR_7->wr_mutex);
 FUNC_1(&VAR_7->rd_mutex);

 switch (VAR_6) {
 case 128:
  VAR_8 = VAR_5;
  break;
 case 130:
  VAR_8 += VAR_5;
  break;
 case 129:
  VAR_8 = VAR_5;
  break;
 default:
  VAR_9 = -VAR_0;
  goto end;
 }


 if (VAR_8 & ((1 << VAR_7->log2_element_size) - 1)) {
  VAR_9 = -VAR_0;
  goto end;
 }

 FUNC_1(&VAR_7->endpoint->register_mutex);

 FUNC_0(VAR_8 >> VAR_7->log2_element_size,
    VAR_7->endpoint->registers + VAR_3);

 FUNC_0((VAR_7->chan_num << 1) |
    (6 << 24),
    VAR_7->endpoint->registers + VAR_2);

 FUNC_2(&VAR_7->endpoint->register_mutex);

end:
 FUNC_2(&VAR_7->rd_mutex);
 FUNC_2(&VAR_7->wr_mutex);

 if (VAR_9)
  return VAR_9;

 VAR_4->f_pos = VAR_8;
 VAR_7->rd_leftovers[3] = 0;

 return VAR_8;
}
