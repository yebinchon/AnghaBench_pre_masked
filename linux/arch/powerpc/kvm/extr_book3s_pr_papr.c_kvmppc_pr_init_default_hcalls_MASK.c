
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled_hcalls; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 int* VAR_0 ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(struct kvm *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;

 for (VAR_2 = 0; VAR_0[VAR_2]; ++VAR_2) {
  VAR_3 = VAR_0[VAR_2];
  FUNC_0(!FUNC_2(VAR_3));
  FUNC_1(VAR_3 / 4, VAR_1->arch.enabled_hcalls);
 }
}
