
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int u_int ;
typedef int pmap_t ;
typedef int mmu_t ;
typedef int int8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(mmu_t VAR_1, pmap_t VAR_2, vm_offset_t VAR_3, vm_page_t VAR_4,
    vm_prot_t VAR_5, u_int VAR_6, int8_t VAR_7)
{
 int VAR_8;

 FUNC_3(&VAR_0);
 FUNC_0(VAR_2);
 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_0);
 return (VAR_8);
}
