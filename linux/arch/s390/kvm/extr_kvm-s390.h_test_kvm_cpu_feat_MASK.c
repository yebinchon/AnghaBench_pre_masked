
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_feat; } ;
struct kvm {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static inline int FUNC_2(struct kvm *VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0);
 return FUNC_1(VAR_2, VAR_1->arch.cpu_feat);
}
