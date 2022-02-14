
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int dummy; } ;
struct TYPE_3__ {TYPE_2__* walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_4__ {int (* gva_to_gpa ) (struct kvm_vcpu*,int,int ,struct x86_exception*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int,void*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct kvm_vcpu*,int,int ,struct x86_exception*) ;

__attribute__((used)) static int FUNC_3(gva_t VAR_6, void *VAR_7, unsigned int VAR_8,
          struct kvm_vcpu *VAR_9, u32 VAR_10,
          struct x86_exception *VAR_11)
{
 void *VAR_12 = VAR_7;
 int VAR_13 = VAR_3;

 while (VAR_8) {
  gpa_t VAR_14 = VAR_9->arch.walk_mmu->gva_to_gpa(VAR_9, VAR_6, VAR_10,
           VAR_11);
  unsigned VAR_15 = VAR_6 & (VAR_1-1);
  unsigned VAR_16 = FUNC_1(VAR_8, (unsigned)VAR_1 - VAR_15);
  int VAR_17;

  if (VAR_14 == VAR_2)
   return VAR_5;
  VAR_17 = FUNC_0(VAR_9, VAR_14 >> VAR_0, VAR_12,
            VAR_15, VAR_16);
  if (VAR_17 < 0) {
   VAR_13 = VAR_4;
   goto out;
  }

  VAR_8 -= VAR_16;
  VAR_12 += VAR_16;
  VAR_6 += VAR_16;
 }
out:
 return VAR_13;
}
