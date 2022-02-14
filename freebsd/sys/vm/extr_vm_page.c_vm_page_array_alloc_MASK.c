
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct vm_page {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static vm_paddr_t
FUNC_2(vm_offset_t *VAR_5, vm_paddr_t VAR_6, vm_paddr_t VAR_7)
{
 vm_paddr_t VAR_8;






 *VAR_5 += VAR_0;




 VAR_8 = FUNC_1(VAR_6 - VAR_7 * sizeof(struct vm_page));
 VAR_3 = (vm_page_t)FUNC_0(VAR_5, VAR_8, VAR_6,
     VAR_1 | VAR_2);
 VAR_4 = VAR_7;

 return (VAR_8);
}
