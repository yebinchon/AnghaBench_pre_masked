
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_13__ {int hflags; int nmi_injected; } ;
struct TYPE_16__ {TYPE_1__ arch; } ;
struct vcpu_svm {unsigned int int3_injected; scalar_t__ nmi_iret_rip; TYPE_4__ vcpu; TYPE_3__* vmcb; int int3_rip; } ;
struct TYPE_14__ {int exit_int_info; int exit_int_info_err; } ;
struct TYPE_15__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct vcpu_svm *VAR_8)
{
 u8 VAR_9;
 int VAR_10;
 u32 VAR_11 = VAR_8->vmcb->control.exit_int_info;
 unsigned VAR_12 = VAR_8->int3_injected;

 VAR_8->int3_injected = 0;





 if ((VAR_8->vcpu.arch.hflags & VAR_1)
     && FUNC_8(&VAR_8->vcpu) != VAR_8->nmi_iret_rip) {
  VAR_8->vcpu.arch.hflags &= ~(VAR_2 | VAR_1);
  FUNC_4(VAR_3, &VAR_8->vcpu);
 }

 VAR_8->vcpu.arch.nmi_injected = 0;
 FUNC_0(&VAR_8->vcpu);
 FUNC_1(&VAR_8->vcpu);

 if (!(VAR_11 & VAR_5))
  return;

 FUNC_4(VAR_3, &VAR_8->vcpu);

 VAR_9 = VAR_11 & VAR_7;
 VAR_10 = VAR_11 & VAR_4;

 switch (VAR_10) {
 case 128:
  VAR_8->vcpu.arch.nmi_injected = 1;
  break;
 case 130:





  if (FUNC_2(VAR_9)) {
   if (VAR_9 == VAR_0 && VAR_12 &&
       FUNC_3(&VAR_8->vcpu, VAR_8->int3_rip))
    FUNC_9(&VAR_8->vcpu,
           FUNC_8(&VAR_8->vcpu) -
           VAR_12);
   break;
  }
  if (VAR_11 & VAR_6) {
   u32 VAR_13 = VAR_8->vmcb->control.exit_int_info_err;
   FUNC_7(&VAR_8->vcpu, VAR_9, VAR_13);

  } else
   FUNC_6(&VAR_8->vcpu, VAR_9);
  break;
 case 129:
  FUNC_5(&VAR_8->vcpu, VAR_9, 0);
  break;
 default:
  break;
 }
}
