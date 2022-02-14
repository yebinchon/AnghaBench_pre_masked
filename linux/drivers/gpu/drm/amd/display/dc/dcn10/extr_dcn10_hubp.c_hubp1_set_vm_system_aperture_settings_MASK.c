
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
struct dcn10_hubp {int dummy; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 struct dcn10_hubp* FUNC_2 (struct hubp*) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_3(struct hubp *VAR_14,
  struct vm_system_aperture_param *VAR_15)
{
 struct dcn10_hubp *VAR_16 = FUNC_2(VAR_14);
 PHYSICAL_ADDRESS_LOC VAR_17;
 PHYSICAL_ADDRESS_LOC VAR_18;
 PHYSICAL_ADDRESS_LOC VAR_19;

 VAR_17.quad_part = VAR_15->sys_default.quad_part >> 12;
 VAR_18.quad_part = VAR_15->sys_low.quad_part >> 12;
 VAR_19.quad_part = VAR_15->sys_high.quad_part >> 12;

 FUNC_1(VAR_1, 0,
  VAR_8, VAR_13,
  VAR_7, VAR_17.high_part);
 FUNC_0(VAR_0, 0,
  VAR_6, VAR_17.low_part);

 FUNC_0(VAR_5, 0,
   VAR_12, VAR_18.high_part);
 FUNC_0(VAR_4, 0,
   VAR_11, VAR_18.low_part);

 FUNC_0(VAR_3, 0,
   VAR_10, VAR_19.high_part);
 FUNC_0(VAR_2, 0,
   VAR_9, VAR_19.low_part);
}
