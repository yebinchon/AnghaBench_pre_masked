
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
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_12,
       enum amd_clockgating_state VAR_13)
{
 uint32_t VAR_14, VAR_15 = 0;
 uint32_t VAR_16 = 0;

 if (VAR_12->cg_flags & (VAR_1 | VAR_2)) {
  if (VAR_12->cg_flags & VAR_2) {
   VAR_16 = VAR_11;
   VAR_15 = VAR_9;
  }
  if (VAR_12->cg_flags & VAR_1) {
   VAR_16 |= VAR_10;
   VAR_15 |= VAR_8;
  }
  if (VAR_13 == VAR_0)
   VAR_15 = 0;

  VAR_14 = FUNC_0(VAR_7,
    VAR_5,
    VAR_16,
    VAR_15);
  if (VAR_12->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_12, VAR_14);
 }

 if (VAR_12->cg_flags & (VAR_3 | VAR_4)) {
  if (VAR_12->cg_flags & VAR_4) {
   VAR_16 = VAR_11;
   VAR_15 = VAR_9;
  }

  if (VAR_12->cg_flags & VAR_3) {
   VAR_16 |= VAR_10;
   VAR_15 |= VAR_8;
  }

  if (VAR_13 == VAR_0)
   VAR_15 = 0;

  VAR_14 = FUNC_0(VAR_7,
    VAR_6,
    VAR_16,
    VAR_15);
  if (VAR_12->powerplay.pp_funcs->set_clockgating_by_smu)
   FUNC_1(VAR_12, VAR_14);
 }

 return 0;
}
