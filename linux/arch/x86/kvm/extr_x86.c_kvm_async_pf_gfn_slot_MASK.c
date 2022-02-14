
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


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct kvm_vcpu *VAR_1, gfn_t VAR_2)
{
 int VAR_3;
 u32 VAR_4 = FUNC_0(VAR_2);

 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_0) &&
       (VAR_1->arch.apf.gfns[VAR_4] != VAR_2 &&
        VAR_1->arch.apf.gfns[VAR_4] != ~0); VAR_3++)
  VAR_4 = FUNC_1(VAR_4);

 return VAR_4;
}
