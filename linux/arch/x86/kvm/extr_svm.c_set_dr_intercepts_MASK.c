
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intercept_dr; } ;
struct vmcb {TYPE_1__ control; } ;
struct vcpu_svm {int dummy; } ;


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
 struct vmcb* FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct vcpu_svm*) ;

__attribute__((used)) static inline void FUNC_2(struct vcpu_svm *VAR_16)
{
 struct vmcb *VAR_17 = FUNC_0(VAR_16);

 VAR_17->control.intercept_dr = (1 << VAR_0)
  | (1 << VAR_2)
  | (1 << VAR_4)
  | (1 << VAR_6)
  | (1 << VAR_8)
  | (1 << VAR_10)
  | (1 << VAR_12)
  | (1 << VAR_14)
  | (1 << VAR_1)
  | (1 << VAR_3)
  | (1 << VAR_5)
  | (1 << VAR_7)
  | (1 << VAR_9)
  | (1 << VAR_11)
  | (1 << VAR_13)
  | (1 << VAR_15);

 FUNC_1(VAR_16);
}
