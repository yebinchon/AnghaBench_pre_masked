
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmmu_vmsa_domain {TYPE_1__* mmu; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ipmmu_vmsa_domain*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ipmmu_vmsa_domain *VAR_3)
{
 unsigned int VAR_4 = 0;

 while (FUNC_2(VAR_3, VAR_0) & VAR_1) {
  FUNC_0();
  if (++VAR_4 == VAR_2) {
   FUNC_1(VAR_3->mmu->dev,
   "TLB sync timed out -- MMU may be deadlocked\n");
   return;
  }
  FUNC_3(1);
 }
}
