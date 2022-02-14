
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcb_control_area {int int_vector; int int_ctl; } ;
struct vcpu_svm {TYPE_1__* vmcb; } ;
struct TYPE_2__ {struct vmcb_control_area control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct vcpu_svm *VAR_4, int VAR_5)
{
 struct vmcb_control_area *VAR_6;


 VAR_6 = &VAR_4->vmcb->control;
 VAR_6->int_vector = VAR_5;
 VAR_6->int_ctl &= ~VAR_1;
 VAR_6->int_ctl |= VAR_3 |
  (( 0xf) << VAR_2);
 FUNC_0(VAR_4->vmcb, VAR_0);
}
