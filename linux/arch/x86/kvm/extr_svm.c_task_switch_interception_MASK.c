
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int nmi_injected; } ;
struct TYPE_11__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_3__* vmcb; } ;
struct TYPE_9__ {int exit_int_info; unsigned long long exit_info_2; scalar_t__ exit_info_1; } ;
struct TYPE_10__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;


 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int,int,int,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_13)
{
 u16 VAR_14;
 int VAR_15;
 int VAR_16 = VAR_13->vmcb->control.exit_int_info &
  VAR_6;
 int VAR_17 = VAR_13->vmcb->control.exit_int_info & VAR_2;
 uint32_t VAR_18 =
  VAR_13->vmcb->control.exit_int_info & VAR_6;
 uint32_t VAR_19 =
  VAR_13->vmcb->control.exit_int_info & VAR_8;
 bool VAR_20 = 0;
 u32 VAR_21 = 0;

 VAR_14 = (u16)VAR_13->vmcb->control.exit_info_1;

 if (VAR_13->vmcb->control.exit_info_2 &
     (1ULL << VAR_4))
  VAR_15 = VAR_11;
 else if (VAR_13->vmcb->control.exit_info_2 &
   (1ULL << VAR_5))
  VAR_15 = VAR_12;
 else if (VAR_19)
  VAR_15 = VAR_10;
 else
  VAR_15 = VAR_9;

 if (VAR_15 == VAR_10) {
  switch (VAR_18) {
  case 128:
   VAR_13->vcpu.arch.nmi_injected = 0;
   break;
  case 130:
   if (VAR_13->vmcb->control.exit_info_2 &
       (1ULL << VAR_3)) {
    VAR_20 = 1;
    VAR_21 =
     (u32)VAR_13->vmcb->control.exit_info_2;
   }
   FUNC_0(&VAR_13->vcpu);
   break;
  case 129:
   FUNC_1(&VAR_13->vcpu);
   break;
  default:
   break;
  }
 }

 if (VAR_15 != VAR_10 ||
     VAR_16 == VAR_7 ||
     (VAR_16 == 130 &&
      (VAR_17 == VAR_1 || VAR_17 == VAR_0))) {
  if (!FUNC_3(&VAR_13->vcpu))
   return 0;
 }

 if (VAR_16 != VAR_7)
  VAR_17 = -1;

 return FUNC_2(&VAR_13->vcpu, VAR_14, VAR_17, VAR_15,
          VAR_20, VAR_21);
}
