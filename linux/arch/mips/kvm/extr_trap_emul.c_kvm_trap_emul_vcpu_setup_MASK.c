
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {int pc; struct mips_coproc* cop0; } ;
struct kvm_vcpu {int vcpu_id; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct mips_coproc*,int) ;
 int FUNC_5 (struct mips_coproc*,int) ;
 int FUNC_6 (struct mips_coproc*,int) ;
 int FUNC_7 (struct mips_coproc*,int) ;
 int FUNC_8 (struct mips_coproc*,int) ;
 int FUNC_9 (struct mips_coproc*,int ) ;
 int FUNC_10 (struct mips_coproc*,int) ;
 int FUNC_11 (struct mips_coproc*,int) ;
 int FUNC_12 (struct mips_coproc*,int) ;
 int FUNC_13 (struct mips_coproc*,int) ;
 int FUNC_14 (struct mips_coproc*,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct kvm_vcpu *VAR_21)
{
 struct mips_coproc *VAR_22 = VAR_21->arch.cop0;
 u32 VAR_23, VAR_24;
 int VAR_25 = VAR_21->vcpu_id;


 FUNC_3(VAR_21, 100*1000*1000);







 FUNC_13(VAR_22, 0x00019300);
 VAR_23 = FUNC_15() & VAR_13;
 VAR_23 |= VAR_14 | VAR_1 | VAR_15;



 if (VAR_20)
  VAR_23 |= VAR_16;
 FUNC_4(VAR_22, VAR_23);


 VAR_24 = (FUNC_16() & ~0x7f);


 if (FUNC_1()) {
  VAR_24 &= ~VAR_6;
  VAR_24 |= ((FUNC_2(FUNC_1()) - 1) <<
       VAR_7) & VAR_6;
 }


 VAR_24 &= ~(0x3f << 25);
 VAR_24 |= ((VAR_3 - 1) << 25);


 VAR_24 &= ~(VAR_4 | VAR_8 | VAR_9 |
       VAR_10 | VAR_5);
 FUNC_5(VAR_22, VAR_24);


 FUNC_6(VAR_22, VAR_14);



 FUNC_7(VAR_22, VAR_14 | VAR_11);


 FUNC_8(VAR_22, VAR_14);


 FUNC_9(VAR_22, 0);


 FUNC_10(VAR_22, (VAR_12) | (1 << 10));


 FUNC_14(VAR_22, VAR_18 | VAR_19);




 FUNC_12(VAR_22, 0xFC000000);


 FUNC_11(VAR_22, VAR_2 |
           (VAR_25 & VAR_17));


 VAR_21->arch.pc = FUNC_0(0x1fc00000);

 return 0;
}
