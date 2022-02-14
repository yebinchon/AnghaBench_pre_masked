
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {int cg_flags; TYPE_2__ powerplay; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;
struct TYPE_3__ {scalar_t__ set_clockgating_by_smu; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_22,
        enum amd_clockgating_state VAR_23)
{
 uint32_t VAR_24, VAR_25 = 0;
 uint32_t VAR_26 = 0;
 struct amdgpu_device *VAR_27 = (struct amdgpu_device *)VAR_22;

 if (VAR_27->cg_flags & (VAR_6 | VAR_7)) {
  if (VAR_27->cg_flags & VAR_6) {
   VAR_26 = VAR_21;
   VAR_25 = VAR_19;
  }
  if (VAR_27->cg_flags & VAR_7) {
   VAR_26 |= VAR_20;
   VAR_25 |= VAR_18;
  }
  if (VAR_23 == VAR_0)
   VAR_25 = 0;
  VAR_24 = FUNC_0(VAR_17,
          VAR_14,
          VAR_26,
          VAR_25);
  if (VAR_27->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_27, VAR_24);
 }

 if (VAR_27->cg_flags & (VAR_9 | VAR_10)) {
  if (VAR_27->cg_flags & VAR_9) {
   VAR_26 = VAR_21;
   VAR_25 = VAR_19;
  }
  if (VAR_27->cg_flags & VAR_10) {
   VAR_26 |= VAR_20;
   VAR_25 |= VAR_18;
  }
  if (VAR_23 == VAR_0)
   VAR_25 = 0;
  VAR_24 = FUNC_0(VAR_17,
          VAR_16,
          VAR_26,
          VAR_25);
  if (VAR_27->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_27, VAR_24);
 }

 if (VAR_27->cg_flags & (VAR_4 | VAR_5)) {
  if (VAR_27->cg_flags & VAR_4) {
   VAR_26 = VAR_21;
   VAR_25 = VAR_19;
  }
  if (VAR_27->cg_flags & VAR_5) {
   VAR_26 |= VAR_20;
   VAR_25 |= VAR_18;
  }
  if (VAR_23 == VAR_0)
   VAR_25 = 0;
  VAR_24 = FUNC_0(VAR_17,
          VAR_13,
          VAR_26,
          VAR_25);
  if (VAR_27->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_27, VAR_24);
 }


 if (VAR_27->cg_flags & VAR_1) {
  if (VAR_23 == VAR_0)
   VAR_25 = 0;
  else
   VAR_25 = VAR_19;

  VAR_24 = FUNC_0(VAR_17,
          VAR_11,
          VAR_21,
           VAR_25);
  if (VAR_27->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_27, VAR_24);
 }
 if (VAR_27->cg_flags & VAR_2) {
  if (VAR_23 == VAR_0)
   VAR_25 = 0;
  else
   VAR_25 = VAR_18;

  VAR_24 = FUNC_0(VAR_17,
          VAR_11,
          VAR_20,
          VAR_25);
  if (VAR_27->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_27, VAR_24);
 }

 if (VAR_27->cg_flags & VAR_3) {

  if (VAR_23 == VAR_0)
   VAR_25 = 0;
  else
   VAR_25 = VAR_19;

  VAR_24 = FUNC_0(VAR_17,
          VAR_12,
          VAR_21,
          VAR_25);
  if (VAR_27->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_27, VAR_24);
 }

 if (VAR_27->cg_flags & VAR_8) {

  if (VAR_23 == VAR_0)
   VAR_25 = 0;
  else
   VAR_25 = VAR_18;

  VAR_24 = FUNC_0(VAR_17,
          VAR_15,
          VAR_20,
          VAR_25);
  if (VAR_27->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_27, VAR_24);
 }
 return 0;
}
