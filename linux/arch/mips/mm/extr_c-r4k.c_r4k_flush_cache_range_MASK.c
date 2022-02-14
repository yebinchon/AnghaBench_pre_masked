
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_4,
 unsigned long VAR_5, unsigned long VAR_6)
{
 int VAR_7 = VAR_4->vm_flags & VAR_1;

 if (VAR_2 || VAR_7)
  FUNC_0(VAR_0, VAR_3, VAR_4);
}
