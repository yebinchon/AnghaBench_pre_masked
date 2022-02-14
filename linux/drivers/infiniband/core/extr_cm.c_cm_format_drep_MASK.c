
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int remote_id; int local_id; } ;
struct cm_id_private {TYPE_1__ id; int tid; } ;
struct cm_drep_msg {int private_data; int remote_comm_id; int local_comm_id; int hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,void const*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cm_drep_msg *VAR_1,
     struct cm_id_private *VAR_2,
     const void *VAR_3,
     u8 VAR_4)
{
 FUNC_0(&VAR_1->hdr, VAR_0, VAR_2->tid);
 VAR_1->local_comm_id = VAR_2->id.local_id;
 VAR_1->remote_comm_id = VAR_2->id.remote_id;

 if (VAR_3 && VAR_4)
  FUNC_1(VAR_1->private_data, VAR_3, VAR_4);
}
