
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smi_info {TYPE_2__* curr_msg; int si_sm; TYPE_1__* handlers; TYPE_2__* waiting_msg; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;
struct TYPE_4__ {int data_size; int data; } ;
struct TYPE_3__ {int (* start_transaction ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct smi_info*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smi_info*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static enum si_sm_result FUNC_4(struct smi_info *VAR_4)
{
 int VAR_5;

 if (!VAR_4->waiting_msg) {
  VAR_4->curr_msg = ((void*)0);
  VAR_5 = VAR_2;
 } else {
  int VAR_6;

  VAR_4->curr_msg = VAR_4->waiting_msg;
  VAR_4->waiting_msg = ((void*)0);
  FUNC_1("Start2");
  VAR_6 = FUNC_0(&VAR_3,
    0, VAR_4);
  if (VAR_6 & VAR_0) {
   VAR_5 = VAR_1;
   goto out;
  }
  VAR_6 = VAR_4->handlers->start_transaction(
   VAR_4->si_sm,
   VAR_4->curr_msg->data,
   VAR_4->curr_msg->data_size);
  if (VAR_6)
   FUNC_2(VAR_4, VAR_6);

  VAR_5 = VAR_1;
 }
out:
 return VAR_5;
}
