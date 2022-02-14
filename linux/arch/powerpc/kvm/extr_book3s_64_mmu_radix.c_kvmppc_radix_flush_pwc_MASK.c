
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 long FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (char*,long) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct kvm *VAR_2, unsigned int VAR_3)
{
 long VAR_4;

 if (!FUNC_1()) {
  FUNC_4(VAR_3);
  return;
 }

 VAR_4 = FUNC_2(VAR_0, FUNC_0(1, 0, 1),
    VAR_3, VAR_1);
 if (VAR_4)
  FUNC_3("KVM: TLB PWC invalidation hcall failed, rc=%ld\n", VAR_4);
}
