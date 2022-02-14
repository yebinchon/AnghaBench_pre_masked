
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct efa_comp_ctx {int wait_event; int comp_size; scalar_t__ user_cqe; int comp_status; int status; } ;
struct efa_com_admin_queue {int state; int efa_dev; } ;
struct TYPE_2__ {int command; int status; } ;
struct efa_admin_acq_entry {TYPE_1__ acq_common_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct efa_comp_ctx* FUNC_2 (struct efa_com_admin_queue*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,struct efa_admin_acq_entry*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct efa_com_admin_queue *VAR_4,
         struct efa_admin_acq_entry *VAR_5)
{
 struct efa_comp_ctx *VAR_6;
 u16 VAR_7;

 VAR_7 = VAR_5->acq_common_descriptor.command &
   VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_7, 0);
 if (!VAR_6) {
  FUNC_3(VAR_4->efa_dev,
     "comp_ctx is NULL. Changing the admin queue running state\n");
  FUNC_0(VAR_2, &VAR_4->state);
  return;
 }

 VAR_6->status = VAR_3;
 VAR_6->comp_status = VAR_5->acq_common_descriptor.status;
 if (VAR_6->user_cqe)
  FUNC_4(VAR_6->user_cqe, VAR_5, VAR_6->comp_size);

 if (!FUNC_5(VAR_1, &VAR_4->state))
  FUNC_1(&VAR_6->wait_event);
}
