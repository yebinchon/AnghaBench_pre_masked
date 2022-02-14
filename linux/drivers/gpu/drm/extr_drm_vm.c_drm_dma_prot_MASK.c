
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm_area_struct {int vm_flags; } ;
typedef int pgprot_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static pgprot_t FUNC_2(uint32_t VAR_0, struct vm_area_struct *VAR_1)
{
 pgprot_t VAR_2 = FUNC_1(VAR_1->vm_flags);




 return VAR_2;
}
