
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; int vm_file; } ;
struct hstate {int dummy; } ;


 struct hstate* FUNC_0 (int ) ;
 int FUNC_1 (struct hstate*) ;
 int FUNC_2 (int ,unsigned long,int) ;

void FUNC_3(struct vm_area_struct *VAR_0, unsigned long VAR_1)
{
 int VAR_2;
 struct hstate *VAR_3 = FUNC_0(VAR_0->vm_file);

 VAR_2 = FUNC_1(VAR_3);
 FUNC_2(VAR_0->vm_mm, VAR_1, VAR_2);
}
