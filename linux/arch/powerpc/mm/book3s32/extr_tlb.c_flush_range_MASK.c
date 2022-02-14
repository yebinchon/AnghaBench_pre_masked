
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int id; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int,unsigned long,int ,int) ;
 int FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct mm_struct *VAR_5, unsigned long VAR_6,
   unsigned long VAR_7)
{
 pmd_t *VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 unsigned int VAR_11 = VAR_5->context.id;

 if (!VAR_0) {
  FUNC_0();
  return;
 }
 VAR_6 &= VAR_1;
 if (VAR_6 >= VAR_7)
  return;
 VAR_7 = (VAR_7 - 1) | ~VAR_1;
 VAR_8 = FUNC_4(FUNC_6(FUNC_2(VAR_5, VAR_6), VAR_6), VAR_6);
 for (;;) {
  VAR_9 = ((VAR_6 + VAR_4) & VAR_3) - 1;
  if (VAR_9 > VAR_7)
   VAR_9 = VAR_7;
  if (!FUNC_3(*VAR_8)) {
   VAR_10 = ((VAR_9 - VAR_6) >> VAR_2) + 1;
   FUNC_1(VAR_11, VAR_6, FUNC_5(*VAR_8), VAR_10);
  }
  if (VAR_9 == VAR_7)
   break;
  VAR_6 = VAR_9 + 1;
  ++VAR_8;
 }
}
