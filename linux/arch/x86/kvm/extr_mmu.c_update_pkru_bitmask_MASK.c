
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {unsigned int pkru_mask; int permissions; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_5, struct kvm_mmu *VAR_6,
    bool VAR_7)
{
 unsigned VAR_8;
 bool VAR_9;

 if (VAR_7) {
  VAR_6->pkru_mask = 0;
  return;
 }


 if (!FUNC_3(VAR_5, VAR_4) || !FUNC_1(VAR_5)) {
  VAR_6->pkru_mask = 0;
  return;
 }

 VAR_9 = FUNC_2(VAR_5);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->permissions); ++VAR_8) {
  unsigned VAR_10, VAR_11;
  bool VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

  VAR_10 = VAR_8 << 1;
  VAR_14 = VAR_10 & VAR_0;
  VAR_15 = VAR_10 & VAR_2;
  VAR_16 = VAR_10 & VAR_3;


  VAR_17 = VAR_10 & VAR_1;





  VAR_12 = (!VAR_14 && VAR_17);




  VAR_13 = VAR_12 && VAR_16 && (VAR_15 || VAR_9);


  VAR_11 = !!VAR_12;

  VAR_11 |= (!!VAR_13) << 1;

  VAR_6->pkru_mask |= (VAR_11 & 3) << VAR_10;
 }
}
