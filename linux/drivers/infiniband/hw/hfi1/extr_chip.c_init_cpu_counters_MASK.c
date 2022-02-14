
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rc_qacks; void* rc_delayed_comp; int * rc_acks; } ;
struct TYPE_4__ {TYPE_1__ rvp; } ;
struct hfi1_pportdata {TYPE_2__ ibport_data; } ;
struct hfi1_devdata {int num_pports; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct hfi1_devdata *VAR_2)
{
 struct hfi1_pportdata *VAR_3;
 int VAR_4;

 VAR_3 = (struct hfi1_pportdata *)(VAR_2 + 1);
 for (VAR_4 = 0; VAR_4 < VAR_2->num_pports; VAR_4++, VAR_3++) {
  VAR_3->ibport_data.rvp.rc_acks = ((void*)0);
  VAR_3->ibport_data.rvp.rc_qacks = ((void*)0);
  VAR_3->ibport_data.rvp.rc_acks = FUNC_0(VAR_1);
  VAR_3->ibport_data.rvp.rc_qacks = FUNC_0(VAR_1);
  VAR_3->ibport_data.rvp.rc_delayed_comp = FUNC_0(VAR_1);
  if (!VAR_3->ibport_data.rvp.rc_acks ||
      !VAR_3->ibport_data.rvp.rc_delayed_comp ||
      !VAR_3->ibport_data.rvp.rc_qacks)
   return -VAR_0;
 }

 return 0;
}
