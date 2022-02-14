
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; int vm_file; } ;
struct hstate {int dummy; } ;


 int FUNC_0 (int ,unsigned long,unsigned long,int ) ;
 struct hstate* FUNC_1 (int ) ;
 int FUNC_2 (struct hstate*) ;

void FUNC_3(struct vm_area_struct *VAR_0, unsigned long VAR_1)
{
 struct hstate *VAR_2 = FUNC_1(VAR_0->vm_file);
 unsigned long VAR_3 = FUNC_2(VAR_2) - 10;

 FUNC_0(VAR_0->vm_mm, VAR_1, VAR_3, 0);
}
