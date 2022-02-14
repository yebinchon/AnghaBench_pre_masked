
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int * gfns; } ;
struct TYPE_4__ {TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gfn_t ;


 size_t FUNC_0 (struct kvm_vcpu*,int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (size_t) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0, gfn_t VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_3 = FUNC_0(VAR_0, VAR_1);
 while (1) {
  VAR_0->arch.apf.gfns[VAR_2] = ~0;
  do {
   VAR_3 = FUNC_2(VAR_3);
   if (VAR_0->arch.apf.gfns[VAR_3] == ~0)
    return;
   VAR_4 = FUNC_1(VAR_0->arch.apf.gfns[VAR_3]);





  } while ((VAR_2 <= VAR_3) ? (VAR_2 < VAR_4 && VAR_4 <= VAR_3) : (VAR_2 < VAR_4 || VAR_4 <= VAR_3));
  VAR_0->arch.apf.gfns[VAR_2] = VAR_0->arch.apf.gfns[VAR_3];
  VAR_2 = VAR_3;
 }
}
