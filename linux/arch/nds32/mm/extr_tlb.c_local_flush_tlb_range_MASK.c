
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
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct vm_area_struct *VAR_4,
      unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;

 if ((VAR_6 - VAR_5) > 0x400000) {
  FUNC_3();
  FUNC_0();
  return;
 }

 FUNC_5(&VAR_3, VAR_7);
 VAR_8 = FUNC_1(VAR_0);
 VAR_9 = (VAR_8 & ~VAR_2) | VAR_4->vm_mm->context.id;
 FUNC_2(VAR_9, VAR_0);
 while (VAR_5 < VAR_6) {
  FUNC_4(VAR_5);
  FUNC_0();
  VAR_5 += VAR_1;
 }
 FUNC_2(VAR_8, VAR_0);
 FUNC_6(&VAR_3, VAR_7);
}
