
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int quad_part; } ;
struct TYPE_6__ {int quad_part; } ;
struct TYPE_5__ {int quad_part; } ;
struct vm_system_aperture_param {TYPE_3__ sys_high; TYPE_2__ sys_low; TYPE_1__ sys_default; } ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
struct TYPE_8__ {int quad_part; int low_part; int high_part; } ;
typedef TYPE_4__ PHYSICAL_ADDRESS_LOC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 int VAR_9 ;
 struct dcn20_hubp* FUNC_3 (struct hubp*) ;

void FUNC_4(struct hubp *VAR_10,
  struct vm_system_aperture_param *VAR_11)
{
 struct dcn20_hubp *VAR_12 = FUNC_3(VAR_10);

 PHYSICAL_ADDRESS_LOC VAR_13;
 PHYSICAL_ADDRESS_LOC VAR_14;
 PHYSICAL_ADDRESS_LOC VAR_15;


 VAR_13.quad_part = VAR_11->sys_default.quad_part >> 12;


 VAR_14.quad_part = VAR_11->sys_low.quad_part >> 18;
 VAR_15.quad_part = VAR_11->sys_high.quad_part >> 18;

 FUNC_2(VAR_2,
  VAR_3, 1,
  VAR_2, VAR_13.high_part);

 FUNC_0(VAR_1, 0,
   VAR_1, VAR_13.low_part);

 FUNC_0(VAR_5, 0,
   VAR_8, VAR_14.quad_part);

 FUNC_0(VAR_4, 0,
   VAR_7, VAR_15.quad_part);

 FUNC_1(VAR_0, 0,
   VAR_6, 1,
   VAR_9, 0x3);
}
