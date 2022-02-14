
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int idt_vectoring_info; int vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vcpu_vmx *VAR_2)
{
 FUNC_0(&VAR_2->vcpu, VAR_2->idt_vectoring_info,
      VAR_1,
      VAR_0);
}
