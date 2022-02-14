
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irqchip_mode; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct kvm *VAR_1)
{
 int VAR_2 = VAR_1->arch.irqchip_mode;


 FUNC_0();
 return VAR_2 != VAR_0;
}
