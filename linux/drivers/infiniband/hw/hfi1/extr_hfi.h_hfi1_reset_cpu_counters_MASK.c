
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rc_qacks; void* z_rc_qacks; int rc_acks; void* z_rc_acks; } ;
struct TYPE_4__ {TYPE_1__ rvp; } ;
struct hfi1_pportdata {TYPE_2__ ibport_data; } ;
struct hfi1_devdata {int num_pports; int send_schedule; void* z_send_schedule; int rcv_limit; void* z_rcv_limit; int int_counter; void* z_int_counter; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct hfi1_devdata *VAR_0)
{
 struct hfi1_pportdata *VAR_1;
 int VAR_2;

 VAR_0->z_int_counter = FUNC_0(VAR_0->int_counter);
 VAR_0->z_rcv_limit = FUNC_0(VAR_0->rcv_limit);
 VAR_0->z_send_schedule = FUNC_0(VAR_0->send_schedule);

 VAR_1 = (struct hfi1_pportdata *)(VAR_0 + 1);
 for (VAR_2 = 0; VAR_2 < VAR_0->num_pports; VAR_2++, VAR_1++) {
  VAR_1->ibport_data.rvp.z_rc_acks =
   FUNC_0(VAR_1->ibport_data.rvp.rc_acks);
  VAR_1->ibport_data.rvp.z_rc_qacks =
   FUNC_0(VAR_1->ibport_data.rvp.rc_qacks);
 }
}
