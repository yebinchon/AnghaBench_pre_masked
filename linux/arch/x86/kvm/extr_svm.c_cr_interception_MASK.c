
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {unsigned long cr2; } ;
struct TYPE_19__ {TYPE_3__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_2__* vmcb; } ;
struct TYPE_16__ {int exit_info_1; scalar_t__ exit_code; } ;
struct TYPE_17__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_6 ;
 int FUNC_1 (struct vcpu_svm*,unsigned long) ;
 int FUNC_2 (struct vcpu_svm*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 unsigned long FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 unsigned long FUNC_6 (TYPE_4__*) ;
 unsigned long FUNC_7 (TYPE_4__*) ;
 unsigned long FUNC_8 (TYPE_4__*) ;
 unsigned long FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,int,unsigned long) ;
 int FUNC_11 (TYPE_4__*,unsigned long) ;
 int FUNC_12 (TYPE_4__*,unsigned long) ;
 int FUNC_13 (TYPE_4__*,unsigned long) ;
 int FUNC_14 (TYPE_4__*,unsigned long) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct vcpu_svm *VAR_7)
{
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (!FUNC_15(VAR_6))
  return FUNC_2(VAR_7);

 if (FUNC_16((VAR_7->vmcb->control.exit_info_1 & VAR_0) == 0))
  return FUNC_2(VAR_7);

 VAR_8 = VAR_7->vmcb->control.exit_info_1 & VAR_1;
 if (VAR_7->vmcb->control.exit_code == VAR_2)
  VAR_9 = VAR_4 - VAR_3;
 else
  VAR_9 = VAR_7->vmcb->control.exit_code - VAR_3;

 VAR_11 = 0;
 if (VAR_9 >= 16) {
  VAR_9 -= 16;
  VAR_10 = FUNC_9(&VAR_7->vcpu, VAR_8);
  switch (VAR_9) {
  case 0:
   if (!FUNC_1(VAR_7, VAR_10))
    VAR_11 = FUNC_11(&VAR_7->vcpu, VAR_10);
   else
    return 1;

   break;
  case 3:
   VAR_11 = FUNC_12(&VAR_7->vcpu, VAR_10);
   break;
  case 4:
   VAR_11 = FUNC_13(&VAR_7->vcpu, VAR_10);
   break;
  case 8:
   VAR_11 = FUNC_14(&VAR_7->vcpu, VAR_10);
   break;
  default:
   FUNC_0(1, "unhandled write to CR%d", VAR_9);
   FUNC_5(&VAR_7->vcpu, VAR_5);
   return 1;
  }
 } else {
  switch (VAR_9) {
  case 0:
   VAR_10 = FUNC_6(&VAR_7->vcpu);
   break;
  case 2:
   VAR_10 = VAR_7->vcpu.arch.cr2;
   break;
  case 3:
   VAR_10 = FUNC_7(&VAR_7->vcpu);
   break;
  case 4:
   VAR_10 = FUNC_8(&VAR_7->vcpu);
   break;
  case 8:
   VAR_10 = FUNC_4(&VAR_7->vcpu);
   break;
  default:
   FUNC_0(1, "unhandled read from CR%d", VAR_9);
   FUNC_5(&VAR_7->vcpu, VAR_5);
   return 1;
  }
  FUNC_10(&VAR_7->vcpu, VAR_8, VAR_10);
 }
 return FUNC_3(&VAR_7->vcpu, VAR_11);
}
