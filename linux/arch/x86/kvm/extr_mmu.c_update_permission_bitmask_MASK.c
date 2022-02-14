
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int* permissions; int nx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_9,
          struct kvm_mmu *VAR_10, bool VAR_11)
{
 unsigned VAR_12;

 const u8 VAR_13 = FUNC_1(VAR_0);
 const u8 VAR_14 = FUNC_1(VAR_2);
 const u8 VAR_15 = FUNC_1(VAR_1);

 bool VAR_16 = FUNC_3(VAR_9, VAR_8) != 0;
 bool VAR_17 = FUNC_3(VAR_9, VAR_7) != 0;
 bool VAR_18 = FUNC_2(VAR_9);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->permissions); ++VAR_12) {
  unsigned VAR_19 = VAR_12 << 1;







  u8 VAR_20 = (VAR_19 & VAR_6) ? (u8)~VAR_14 : 0;

  u8 VAR_21 = (VAR_19 & VAR_5) ? (u8)~VAR_15 : 0;

  u8 VAR_22 = (VAR_19 & VAR_3) ? (u8)~VAR_13 : 0;

  u8 VAR_23 = 0;

  u8 VAR_24 = 0;

  if (!VAR_11) {

   u8 VAR_25 = (VAR_19 & VAR_5) ? 0 : VAR_15;


   if (!VAR_10->nx)
    VAR_22 = 0;


   if (!VAR_18)
    VAR_20 = (VAR_19 & VAR_5) ? VAR_20 : 0;


   if (VAR_16)
    VAR_23 = (VAR_19 & VAR_3) ? VAR_25 : 0;
   if (VAR_17)
    VAR_24 = (VAR_19 & (VAR_4|VAR_3)) ? 0 : VAR_25;
  }

  VAR_10->permissions[VAR_12] = VAR_22 | VAR_21 | VAR_20 | VAR_23 | VAR_24;
 }
}
