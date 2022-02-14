
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int dfr_reg; int ir_list_lock; int ir_list; int vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_1)
{
 int VAR_2;

 if (!FUNC_2(&VAR_1->vcpu))
  return 0;

 VAR_2 = FUNC_1(&VAR_1->vcpu);
 if (VAR_2)
  return VAR_2;

 FUNC_0(&VAR_1->ir_list);
 FUNC_3(&VAR_1->ir_list_lock);
 VAR_1->dfr_reg = VAR_0;

 return VAR_2;
}
