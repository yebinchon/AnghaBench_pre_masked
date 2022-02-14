
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_i2c {int msg_idx; int completion; scalar_t__ msg_num; int * msg; scalar_t__ msg_ptr; int state; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct synquacer_i2c *VAR_2, int VAR_3)
{





 FUNC_1(0, VAR_2->base + VAR_1);

 VAR_2->state = VAR_0;

 VAR_2->msg_ptr = 0;
 VAR_2->msg = ((void*)0);
 VAR_2->msg_idx++;
 VAR_2->msg_num = 0;
 if (VAR_3)
  VAR_2->msg_idx = VAR_3;

 FUNC_0(&VAR_2->completion);
}
