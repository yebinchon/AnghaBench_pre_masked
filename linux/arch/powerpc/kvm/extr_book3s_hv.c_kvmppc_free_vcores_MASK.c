
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ online_vcores; int * vcores; } ;
struct kvm {TYPE_1__ arch; } ;


 long VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_1)
{
 long int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  FUNC_0(VAR_1->arch.vcores[VAR_2]);
 VAR_1->arch.online_vcores = 0;
}
