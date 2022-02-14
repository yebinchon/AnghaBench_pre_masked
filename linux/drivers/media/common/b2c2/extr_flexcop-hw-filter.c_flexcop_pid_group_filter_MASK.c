
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u16 ;
struct flexcop_device {int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_2__) ;} ;
struct TYPE_4__ {void* Group_mask; void* Group_PID; } ;
struct TYPE_5__ {TYPE_1__ pid_filter_30c_ext_ind_0_7; } ;
typedef TYPE_2__ flexcop_ibi_value ;


 int VAR_0 ;
 int FUNC_0 (struct flexcop_device*,int ,TYPE_2__) ;

__attribute__((used)) static void FUNC_1(struct flexcop_device *VAR_1,
  u16 VAR_2, u16 VAR_3)
{

 flexcop_ibi_value VAR_4;
 VAR_4.pid_filter_30c_ext_ind_0_7.Group_PID = VAR_2;
 VAR_4.pid_filter_30c_ext_ind_0_7.Group_mask = VAR_3;
 VAR_1->write_ibi_reg(VAR_1, VAR_0, VAR_4);
}
