
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct efa_comp_ctx {scalar_t__ occupied; TYPE_2__* user_cqe; } ;
struct efa_com_admin_queue {int depth; int efa_dev; } ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {TYPE_1__ acq_common_descriptor; } ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static inline void FUNC_2(struct efa_com_admin_queue *VAR_1,
     struct efa_comp_ctx *VAR_2)
{
 u16 VAR_3 = VAR_2->user_cqe->acq_common_descriptor.command &
       VAR_0;
 u16 VAR_4 = VAR_3 & (VAR_1->depth - 1);

 FUNC_1(VAR_1->efa_dev, "Put completion command_id %#x\n", VAR_3);
 VAR_2->occupied = 0;
 FUNC_0(VAR_1, VAR_4);
}
