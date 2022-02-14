
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iw_cm_id {int m_remote_addr; int m_local_addr; } ;
struct iw_cm_event {int ord; int ird; scalar_t__ private_data_len; void* private_data; int remote_addr; int local_addr; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct i40iw_cm_node {int ord_size; int ird_size; TYPE_1__ pdata; scalar_t__ pdata_buf; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct i40iw_cm_node *VAR_0,
       struct iw_cm_id *VAR_1,
       struct iw_cm_event *VAR_2)
{
 FUNC_0(&VAR_2->local_addr, &VAR_1->m_local_addr,
        sizeof(VAR_2->local_addr));
 FUNC_0(&VAR_2->remote_addr, &VAR_1->m_remote_addr,
        sizeof(VAR_2->remote_addr));
 if (VAR_0) {
  VAR_2->private_data = (void *)VAR_0->pdata_buf;
  VAR_2->private_data_len = (u8)VAR_0->pdata.size;
  VAR_2->ird = VAR_0->ird_size;
  VAR_2->ord = VAR_0->ord_size;
 }
}
