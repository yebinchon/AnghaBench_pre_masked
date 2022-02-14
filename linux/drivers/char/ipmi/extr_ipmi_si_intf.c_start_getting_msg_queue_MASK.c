
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_info {int si_state; TYPE_1__* curr_msg; } ;
struct TYPE_2__ {int* data; int data_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smi_info*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct smi_info *VAR_3)
{
 VAR_3->curr_msg->data[0] = (VAR_1 << 2);
 VAR_3->curr_msg->data[1] = VAR_0;
 VAR_3->curr_msg->data_size = 2;

 FUNC_0(VAR_3, VAR_3->curr_msg->data,
        VAR_3->curr_msg->data_size);
 VAR_3->si_state = VAR_2;
}
