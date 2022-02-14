
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpic {int mmio; int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct openpic *VAR_1)
{
 FUNC_0(VAR_1->kvm, VAR_0, &VAR_1->mmio);
}
