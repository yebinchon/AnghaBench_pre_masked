
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kvm_vcore; } ;
struct TYPE_4__ {TYPE_1__ kvm_hstate; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__** VAR_0 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 int VAR_2 = FUNC_3();
 int VAR_3, VAR_4;

 if (VAR_1 <= 1)
  return;
 for (VAR_4 = 0; VAR_4 < 1000000; ++VAR_4) {






  for (VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3)
   if (VAR_0[VAR_2 + VAR_3]->kvm_hstate.kvm_vcore)
    break;
  if (VAR_3 == VAR_1) {
   FUNC_1();
   return;
  }
  FUNC_0();
 }
 FUNC_1();
 for (VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3)
  if (VAR_0[VAR_2 + VAR_3]->kvm_hstate.kvm_vcore)
   FUNC_2("KVM: CPU %d seems to be stuck\n", VAR_2 + VAR_3);
}
