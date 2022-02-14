
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kvm; } ;
struct vcpu_svm {scalar_t__ asid_generation; TYPE_1__ vcpu; } ;
struct svm_cpu_data {scalar_t__ asid_generation; } ;


 int FUNC_0 (struct vcpu_svm*,struct svm_cpu_data*) ;
 struct svm_cpu_data* FUNC_1 (int ,int) ;
 void FUNC_2 (struct vcpu_svm*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct vcpu_svm *VAR_1)
{
 int VAR_2 = FUNC_3();

 struct svm_cpu_data *VAR_3 = FUNC_1(VAR_0, VAR_2);

 if (FUNC_4(VAR_1->vcpu.kvm))
  return FUNC_2(VAR_1, VAR_2);


 if (VAR_1->asid_generation != VAR_3->asid_generation)
  FUNC_0(VAR_1, VAR_3);
}
