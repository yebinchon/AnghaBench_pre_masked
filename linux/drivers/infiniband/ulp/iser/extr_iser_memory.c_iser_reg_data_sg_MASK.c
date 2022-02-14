
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iser_mem_reg {int dummy; } ;
struct iser_fr_desc {int rsc; } ;
struct iser_device {TYPE_3__* reg_ops; } ;
struct iser_data_buf {int dummy; } ;
struct iscsi_iser_task {TYPE_2__* iser_conn; } ;
struct TYPE_6__ {int (* reg_mem ) (struct iscsi_iser_task*,struct iser_data_buf*,int *,struct iser_mem_reg*) ;} ;
struct TYPE_4__ {struct iser_device* device; } ;
struct TYPE_5__ {TYPE_1__ ib_conn; } ;


 int FUNC_0 (struct iser_device*,struct iser_data_buf*,struct iser_mem_reg*) ;
 int FUNC_1 (struct iscsi_iser_task*,struct iser_data_buf*,int *,struct iser_mem_reg*) ;

__attribute__((used)) static int
FUNC_2(struct iscsi_iser_task *VAR_0,
   struct iser_data_buf *VAR_1,
   struct iser_fr_desc *VAR_2,
   bool VAR_3,
   struct iser_mem_reg *VAR_4)
{
 struct iser_device *VAR_5 = VAR_0->iser_conn->ib_conn.device;

 if (VAR_3)
  return FUNC_0(VAR_5, VAR_1, VAR_4);

 return VAR_5->reg_ops->reg_mem(VAR_0, VAR_1, &VAR_2->rsc, VAR_4);
}
