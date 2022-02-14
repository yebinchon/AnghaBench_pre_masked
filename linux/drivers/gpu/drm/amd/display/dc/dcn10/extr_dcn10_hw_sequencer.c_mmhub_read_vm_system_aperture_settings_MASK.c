
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int quad_part; } ;
struct TYPE_6__ {int quad_part; } ;
struct TYPE_5__ {int quad_part; } ;
struct vm_system_aperture_param {TYPE_3__ sys_high; TYPE_2__ sys_low; TYPE_1__ sys_default; } ;
struct dcn10_hubp {int dummy; } ;
struct dce_hwseq {int dummy; } ;
typedef int int64_t ;
struct TYPE_8__ {int quad_part; scalar_t__ low_part; scalar_t__ high_part; } ;
typedef TYPE_4__ PHYSICAL_ADDRESS_LOC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct dcn10_hubp *VAR_7,
  struct vm_system_aperture_param *VAR_8,
  struct dce_hwseq *VAR_9)
{
 PHYSICAL_ADDRESS_LOC VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;

 FUNC_0(VAR_2,
   VAR_6, &VAR_10.high_part);
 FUNC_0(VAR_1,
   VAR_5, &VAR_10.low_part);

 FUNC_0(VAR_4,
   VAR_0, &VAR_11);

 FUNC_0(VAR_3,
   VAR_0, &VAR_12);

 VAR_8->sys_default.quad_part = VAR_10.quad_part << 12;
 VAR_8->sys_low.quad_part = (int64_t)VAR_11 << 18;
 VAR_8->sys_high.quad_part = (int64_t)VAR_12 << 18;
}
