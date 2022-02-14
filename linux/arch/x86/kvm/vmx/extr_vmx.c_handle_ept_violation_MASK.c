
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {unsigned long exit_qualification; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gpa_t ;
struct TYPE_4__ {int idt_vectoring_info; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ,int *,int ) ;
 TYPE_2__* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_19)
{
 unsigned long VAR_20;
 gpa_t VAR_21;
 u64 VAR_22;

 VAR_20 = FUNC_4(VAR_6);







 if (!(FUNC_1(VAR_19)->idt_vectoring_info & VAR_17) &&
   VAR_18 &&
   (VAR_20 & VAR_10))
  FUNC_5(VAR_7, VAR_8);

 VAR_21 = FUNC_3(VAR_9);
 FUNC_2(VAR_21, VAR_20);


 VAR_22 = (VAR_20 & VAR_1)
       ? VAR_15 : 0;

 VAR_22 |= (VAR_20 & VAR_2)
        ? VAR_16 : 0;

 VAR_22 |= (VAR_20 & VAR_0)
        ? VAR_11 : 0;

 VAR_22 |= (VAR_20 &
         (VAR_4 | VAR_5 |
   VAR_3))
        ? VAR_14 : 0;

 VAR_22 |= (VAR_20 & 0x100) != 0 ?
        VAR_12 : VAR_13;

 VAR_19->arch.exit_qualification = VAR_20;
 return FUNC_0(VAR_19, VAR_21, VAR_22, ((void*)0), 0);
}
