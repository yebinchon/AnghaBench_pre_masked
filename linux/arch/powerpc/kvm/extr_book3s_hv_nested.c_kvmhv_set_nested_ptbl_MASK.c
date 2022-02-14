
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_nested_guest {int process_table; int shadow_lpid; int shadow_pgtable; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,int ) ;
 unsigned long FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct kvm_nested_guest *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_0 | FUNC_2() |
  FUNC_0(VAR_2->shadow_pgtable) | VAR_1;
 FUNC_1(VAR_2->shadow_lpid, VAR_3, VAR_2->process_table);
}
