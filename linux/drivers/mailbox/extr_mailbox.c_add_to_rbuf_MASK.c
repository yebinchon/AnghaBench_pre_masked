
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int msg_count; int msg_free; int lock; void** msg_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct mbox_chan *VAR_2, void *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_2->lock, VAR_5);


 if (VAR_2->msg_count == VAR_1) {
  FUNC_1(&VAR_2->lock, VAR_5);
  return -VAR_0;
 }

 VAR_4 = VAR_2->msg_free;
 VAR_2->msg_data[VAR_4] = VAR_3;
 VAR_2->msg_count++;

 if (VAR_4 == VAR_1 - 1)
  VAR_2->msg_free = 0;
 else
  VAR_2->msg_free++;

 FUNC_1(&VAR_2->lock, VAR_5);

 return VAR_4;
}
