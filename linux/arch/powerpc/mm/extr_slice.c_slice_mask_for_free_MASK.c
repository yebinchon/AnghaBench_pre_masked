
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {unsigned int low_slices; int high_slices; } ;
struct mm_struct {int dummy; } ;


 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mm_struct *VAR_2, struct slice_mask *VAR_3,
    unsigned long VAR_4)
{
 unsigned long VAR_5;

 VAR_3->low_slices = 0;
 if (VAR_0)
  FUNC_2(VAR_3->high_slices, VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (!FUNC_5(VAR_2, VAR_5))
   VAR_3->low_slices |= 1u << VAR_5;

 if (FUNC_3(VAR_4 - 1))
  return;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++)
  if (!FUNC_4(VAR_2, VAR_5))
   FUNC_1(VAR_5, VAR_3->high_slices);
}
