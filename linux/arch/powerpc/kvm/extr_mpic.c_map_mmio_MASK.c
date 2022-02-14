
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpic {int mmio; int reg_base; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct openpic *VAR_3)
{
 FUNC_1(&VAR_3->mmio, &VAR_2);

 FUNC_0(VAR_3->kvm, VAR_0,
    VAR_3->reg_base, VAR_1,
    &VAR_3->mmio);
}
