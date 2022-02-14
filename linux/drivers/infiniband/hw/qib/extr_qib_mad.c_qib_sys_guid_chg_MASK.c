
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qib_ibport {int dummy; } ;
struct TYPE_4__ {int new_sys_guid; int lid; } ;
struct TYPE_6__ {TYPE_1__ ntc_145; } ;
struct ib_mad_notice_attr {TYPE_3__ details; int issuer_lid; scalar_t__ toggle_count; int trap_num; int prod_type_lsb; scalar_t__ prod_type_msb; int generic_type; } ;
typedef int data ;
struct TYPE_5__ {int lid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_2 (struct qib_ibport*) ;
 int FUNC_3 (struct qib_ibport*,struct ib_mad_notice_attr*,int) ;

void FUNC_4(struct qib_ibport *VAR_4)
{
 struct ib_mad_notice_attr VAR_5;

 VAR_5.generic_type = VAR_2;
 VAR_5.prod_type_msb = 0;
 VAR_5.prod_type_lsb = VAR_0;
 VAR_5.trap_num = VAR_1;
 VAR_5.issuer_lid = FUNC_0(FUNC_2(VAR_4)->lid);
 VAR_5.toggle_count = 0;
 FUNC_1(&VAR_5.details, 0, sizeof(VAR_5.details));
 VAR_5.details.ntc_145.lid = VAR_5.issuer_lid;
 VAR_5.details.ntc_145.new_sys_guid = VAR_3;

 FUNC_3(VAR_4, &VAR_5, sizeof(VAR_5));
}
