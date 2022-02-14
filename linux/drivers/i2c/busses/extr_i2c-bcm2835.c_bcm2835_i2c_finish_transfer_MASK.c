
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_i2c_dev {scalar_t__ msg_buf_remaining; int * msg_buf; scalar_t__ num_msgs; int * curr_msg; } ;



__attribute__((used)) static void FUNC_0(struct bcm2835_i2c_dev *VAR_0)
{
 VAR_0->curr_msg = ((void*)0);
 VAR_0->num_msgs = 0;

 VAR_0->msg_buf = ((void*)0);
 VAR_0->msg_buf_remaining = 0;
}
