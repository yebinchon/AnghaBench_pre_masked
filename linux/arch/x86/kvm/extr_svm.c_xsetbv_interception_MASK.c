
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vcpu_svm {int vcpu; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_0)
{
 u64 VAR_1 = FUNC_1(&VAR_0->vcpu);
 u32 VAR_2 = FUNC_0(&VAR_0->vcpu);

 if (FUNC_2(&VAR_0->vcpu, VAR_2, VAR_1) == 0) {
  return FUNC_3(&VAR_0->vcpu);
 }

 return 1;
}
