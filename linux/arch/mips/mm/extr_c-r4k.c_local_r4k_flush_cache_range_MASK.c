
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(void * VAR_4)
{
 struct vm_area_struct *VAR_5 = VAR_4;
 int VAR_6 = VAR_5->vm_flags & VAR_1;

 if (!FUNC_0(VAR_5->vm_mm, VAR_0))
  return;






 if (VAR_2 || (VAR_6 && !VAR_3))
  FUNC_1();

 if (VAR_6)
  FUNC_2();
}
