
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int quad_part; } ;
struct TYPE_5__ {int quad_part; } ;
struct TYPE_7__ {int quad_part; } ;
struct vm_system_aperture_param {TYPE_2__ sys_high; TYPE_1__ sys_low; TYPE_3__ sys_default; } ;
struct hubp {int dummy; } ;
struct dcn21_hubp {int dummy; } ;
struct TYPE_8__ {int quad_part; } ;
typedef TYPE_4__ PHYSICAL_ADDRESS_LOC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 int VAR_6 ;
 struct dcn21_hubp* FUNC_2 (struct hubp*) ;

void FUNC_3(struct hubp *VAR_7,
  struct vm_system_aperture_param *VAR_8)
{
 struct dcn21_hubp *VAR_9 = FUNC_2(VAR_7);

 PHYSICAL_ADDRESS_LOC VAR_10;
 PHYSICAL_ADDRESS_LOC VAR_11;
 PHYSICAL_ADDRESS_LOC VAR_12;


 VAR_10.quad_part = VAR_8->sys_default.quad_part >> 12;


 VAR_11.quad_part = VAR_8->sys_low.quad_part >> 18;
 VAR_12.quad_part = VAR_8->sys_high.quad_part >> 18;

 FUNC_0(VAR_2, 0,
   VAR_5, VAR_11.quad_part);

 FUNC_0(VAR_1, 0,
   VAR_4, VAR_12.quad_part);

 FUNC_1(VAR_0, 0,
   VAR_3, 1,
   VAR_6, 0x3);
}
