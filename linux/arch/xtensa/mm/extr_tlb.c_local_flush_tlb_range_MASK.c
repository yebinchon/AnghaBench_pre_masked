
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct TYPE_2__ {scalar_t__* asid; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

void FUNC_10(struct vm_area_struct *VAR_6,
  unsigned long VAR_7, unsigned long VAR_8)
{
 int VAR_9 = FUNC_9();
 struct mm_struct *VAR_10 = VAR_6->vm_mm;
 unsigned long VAR_11;

 if (VAR_10->context.asid[VAR_9] == VAR_0)
  return;

 FUNC_7("[tlbrange<%02lx,%08lx,%08lx>]\n",
   (unsigned long)VAR_10->context.asid[VAR_9], VAR_7, VAR_8);
 FUNC_6(VAR_11);

 if (VAR_8-VAR_7 + (VAR_3-1) <= VAR_5 << VAR_2) {
  int VAR_12 = FUNC_1();

  FUNC_8(FUNC_0(VAR_10->context.asid[VAR_9]));
  VAR_7 &= VAR_1;
  if (VAR_6->vm_flags & VAR_4)
   while(VAR_7 < VAR_8) {
    FUNC_3(VAR_7);
    FUNC_2(VAR_7);
    VAR_7 += VAR_3;
   }
  else
   while(VAR_7 < VAR_8) {
    FUNC_2(VAR_7);
    VAR_7 += VAR_3;
   }

  FUNC_8(VAR_12);
 } else {
  FUNC_4(VAR_10);
 }
 FUNC_5(VAR_11);
}
