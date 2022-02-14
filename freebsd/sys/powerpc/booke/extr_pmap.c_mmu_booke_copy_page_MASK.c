
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(mmu_t VAR_4, vm_page_t VAR_5, vm_page_t VAR_6)
{
 vm_offset_t VAR_7, VAR_8;






 VAR_7 = VAR_3;
 VAR_8 = VAR_1;

 FUNC_5(&VAR_2);
 FUNC_3(VAR_4, VAR_7, FUNC_1(VAR_5));
 FUNC_3(VAR_4, VAR_8, FUNC_1(VAR_6));

 FUNC_2((caddr_t)VAR_8, (caddr_t)VAR_7, VAR_0);

 FUNC_4(VAR_4, VAR_8);
 FUNC_4(VAR_4, VAR_7);
 FUNC_6(&VAR_2);

}
