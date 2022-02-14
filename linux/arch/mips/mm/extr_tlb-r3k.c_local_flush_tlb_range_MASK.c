
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
struct TYPE_3__ {unsigned long tlbsize; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (TYPE_1__*) ;
 unsigned long FUNC_1 (int,struct mm_struct*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct vm_area_struct *VAR_5, unsigned long VAR_6,
      unsigned long VAR_7)
{
 unsigned long VAR_8 = FUNC_0(&VAR_4);
 struct mm_struct *VAR_9 = VAR_5->vm_mm;
 int VAR_10 = FUNC_8();

 if (FUNC_1(VAR_10, VAR_9) != 0) {
  unsigned long VAR_11, VAR_12;





  FUNC_4(VAR_12);
  VAR_11 = (VAR_7 - VAR_6 + (VAR_3 - 1)) >> VAR_2;
  if (VAR_11 <= VAR_4.tlbsize) {
   int VAR_13 = FUNC_6() & VAR_8;
   int VAR_14 = FUNC_1(VAR_10, VAR_9) & VAR_8;

   VAR_6 &= VAR_1;
   VAR_7 += VAR_3 - 1;
   VAR_7 &= VAR_1;
   while (VAR_6 < VAR_7) {
    int VAR_15;

    FUNC_11(VAR_6 | VAR_14);
    VAR_6 += VAR_3;
    FUNC_9();
    VAR_15 = FUNC_7();
    FUNC_12(0);
    FUNC_11(VAR_0);
    if (VAR_15 < 0)
     continue;
    FUNC_10();
   }
   FUNC_11(VAR_13);
  } else {
   FUNC_2(VAR_9);
  }
  FUNC_3(VAR_12);
 }
}
