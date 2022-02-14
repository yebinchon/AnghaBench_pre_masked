
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int rd_msg_spinlock; scalar_t__ rd_msg_fifo_tail; scalar_t__ rd_msg_fifo_head; int dev_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_device*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ishtp_device *VAR_1)
{
 unsigned long VAR_2;


 VAR_1->dev_state = VAR_0;


 FUNC_1(&VAR_1->rd_msg_spinlock, VAR_2);
 VAR_1->rd_msg_fifo_head = VAR_1->rd_msg_fifo_tail = 0;
 FUNC_2(&VAR_1->rd_msg_spinlock, VAR_2);


 FUNC_0(VAR_1, 1);
}
