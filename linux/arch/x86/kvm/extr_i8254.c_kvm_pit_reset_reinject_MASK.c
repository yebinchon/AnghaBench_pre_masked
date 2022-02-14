
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_ack; int pending; } ;
struct kvm_pit {TYPE_1__ pit_state; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct kvm_pit *VAR_0)
{
 FUNC_0(&VAR_0->pit_state.pending, 0);
 FUNC_0(&VAR_0->pit_state.irq_ack, 1);
}
