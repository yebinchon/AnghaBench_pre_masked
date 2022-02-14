
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_mm; } ;
struct TYPE_3__ {unsigned long id; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (unsigned long) ;
 int VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;

 FUNC_4(&VAR_2, VAR_5);
 VAR_6 = FUNC_1(VAR_0);
 VAR_7 = (VAR_6 & ~VAR_1) | VAR_3->vm_mm->context.id;
 FUNC_2(VAR_7, VAR_0);
 FUNC_3(VAR_4);
 FUNC_0();
 FUNC_2(VAR_6, VAR_0);
 FUNC_5(&VAR_2, VAR_5);
}
