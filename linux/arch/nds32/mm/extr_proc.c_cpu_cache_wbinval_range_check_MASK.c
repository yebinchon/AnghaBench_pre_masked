
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_mm; } ;
struct TYPE_2__ {unsigned long line_size; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int ,unsigned long) ;

void FUNC_7(struct vm_area_struct *VAR_4,
       unsigned long VAR_5, unsigned long VAR_6,
       bool VAR_7, bool VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11;

 if (!VAR_7 && !VAR_8)
  return;
 VAR_9 = VAR_1[VAR_0].line_size;
 VAR_5 = VAR_5 & ~(VAR_9 - 1);
 VAR_6 = (VAR_6 + VAR_9 - 1) & ~(VAR_9 - 1);

 if ((VAR_6 - VAR_5) > (8 * VAR_3)) {
  if (VAR_8)
   FUNC_0();
  if (VAR_7)
   FUNC_3();
  return;
 }

 VAR_10 = (VAR_5 + VAR_3) & VAR_2;
 VAR_11 = ((VAR_6 - 1) & VAR_2);

 if ((VAR_5 & VAR_2) == VAR_11) {
  if (FUNC_6(VAR_4->vm_mm, VAR_5)) {
   if (VAR_8)
    FUNC_2(VAR_5, VAR_6);
   if (VAR_7)
    FUNC_5(VAR_5, VAR_6);
  }
  return;
 }

 if (FUNC_6(VAR_4->vm_mm, VAR_5)) {
  if (VAR_8)
   FUNC_2(VAR_5, VAR_10);
  if (VAR_7)
   FUNC_5(VAR_5, VAR_10);
 }

 if (FUNC_6(VAR_4->vm_mm, VAR_6 - 1)) {
  if (VAR_8)
   FUNC_2(VAR_11, VAR_6);
  if (VAR_7)
   FUNC_5(VAR_11, VAR_6);
 }

 while (VAR_10 < VAR_11) {
  if (FUNC_6(VAR_4->vm_mm, VAR_10)) {
   if (VAR_8)
    FUNC_1(VAR_10);
   if (VAR_7)
    FUNC_4(VAR_10);
  }
  VAR_10 += VAR_3;
 }
}
