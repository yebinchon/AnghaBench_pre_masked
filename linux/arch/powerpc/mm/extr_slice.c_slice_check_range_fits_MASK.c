
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct slice_mask {int low_slices; int high_slices; } ;
struct mm_struct {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static bool FUNC_6(struct mm_struct *VAR_3,
      const struct slice_mask *VAR_4,
      unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_5 + VAR_6 - 1;
 u64 VAR_8 = 0;

 if (FUNC_4(VAR_5)) {
  unsigned long VAR_9 = FUNC_3(VAR_7,
      (unsigned long)(VAR_1 - 1));

  VAR_8 = (1u << (FUNC_2(VAR_9) + 1))
    - (1u << FUNC_2(VAR_5));
 }
 if ((VAR_8 & VAR_4->low_slices) != VAR_8)
  return 0;

 if (VAR_2 && !FUNC_4(VAR_7)) {
  unsigned long VAR_10 = FUNC_1(VAR_5);
  unsigned long VAR_11 = FUNC_0(VAR_7, (1UL << VAR_0));
  unsigned long VAR_12 = FUNC_1(VAR_11) - VAR_10;
  unsigned long VAR_13;

  for (VAR_13 = VAR_10; VAR_13 < VAR_10 + VAR_12; VAR_13++) {
   if (!FUNC_5(VAR_13, VAR_4->high_slices))
    return 0;
  }
 }

 return 1;
}
