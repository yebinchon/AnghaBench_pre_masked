
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_7(mmu_t VAR_2, vm_page_t VAR_3, int VAR_4, int VAR_5)
{
 vm_offset_t VAR_6;







 FUNC_5(&VAR_0);
 VAR_6 = VAR_1;

 FUNC_3(VAR_2, VAR_6, FUNC_1(VAR_3));
 FUNC_2((caddr_t)VAR_6 + VAR_4, VAR_5);
 FUNC_4(VAR_2, VAR_6);

 FUNC_6(&VAR_0);

}
