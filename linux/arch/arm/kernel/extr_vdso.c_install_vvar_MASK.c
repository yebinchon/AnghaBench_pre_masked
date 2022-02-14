
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long,int ,int,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mm_struct *VAR_4, unsigned long VAR_5)
{
 struct vm_area_struct *VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_0,
           VAR_2 | VAR_1,
           &VAR_3);

 return FUNC_0(VAR_6);
}
