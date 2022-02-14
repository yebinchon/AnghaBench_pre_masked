
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ epoch; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline u64 FUNC_3(struct kvm *VAR_0)
{
 u64 VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0() + VAR_0->arch.epoch;
 FUNC_2();
 return VAR_1;
}
