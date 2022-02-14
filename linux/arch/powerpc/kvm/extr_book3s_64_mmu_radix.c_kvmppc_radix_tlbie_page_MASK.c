
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int) ;
 long FUNC_4 (int ,int ,unsigned int,unsigned long) ;
 int FUNC_5 (char*,long) ;
 int FUNC_6 (unsigned int,unsigned long,unsigned long) ;
 int FUNC_7 (unsigned int) ;

void FUNC_8(struct kvm *VAR_3, unsigned long VAR_4,
        unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7 = VAR_2;
 int VAR_8;
 long VAR_9;
 unsigned long VAR_10;

 if (VAR_5)
  VAR_7 = 1UL << VAR_5;
 else
  VAR_5 = VAR_1;

 VAR_4 &= ~(VAR_7 - 1);

 if (!FUNC_2()) {
  FUNC_6(VAR_6, VAR_4, VAR_7);
  return;
 }

 VAR_8 = FUNC_7(VAR_5);
 VAR_10 = VAR_4 | (FUNC_3(VAR_8) << FUNC_1(58));
 VAR_9 = FUNC_4(VAR_0, FUNC_0(0, 0, 1),
    VAR_6, VAR_10);
 if (VAR_9)
  FUNC_5("KVM: TLB page invalidation hcall failed, rc=%ld\n", VAR_9);
}
