
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lpid; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_1)
{
 int VAR_2 = VAR_1->arch.lpid;

 if (VAR_0 == 2)
  VAR_2 >>= 1;

 FUNC_0(VAR_2);
}
