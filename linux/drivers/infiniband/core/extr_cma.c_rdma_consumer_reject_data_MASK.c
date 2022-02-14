
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rdma_cm_id {int dummy; } ;
struct TYPE_3__ {void* private_data; scalar_t__ private_data_len; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct rdma_cm_event {TYPE_2__ param; int status; } ;


 scalar_t__ FUNC_0 (struct rdma_cm_id*,int ) ;

const void *FUNC_1(struct rdma_cm_id *VAR_0,
          struct rdma_cm_event *VAR_1, u8 *VAR_2)
{
 const void *VAR_3;

 if (FUNC_0(VAR_0, VAR_1->status)) {
  *VAR_2 = VAR_1->param.conn.private_data_len;
  VAR_3 = VAR_1->param.conn.private_data;
 } else {
  *VAR_2 = 0;
  VAR_3 = ((void*)0);
 }
 return VAR_3;
}
