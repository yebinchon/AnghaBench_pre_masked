
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {unsigned int low_slices; int high_slices; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,unsigned long,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3, unsigned long VAR_4,
    struct slice_mask *VAR_5)
{
 unsigned long VAR_6 = VAR_3 + VAR_4 - 1;

 VAR_5->low_slices = 0;
 if (VAR_2)
  FUNC_4(VAR_5->high_slices, VAR_2);

 if (FUNC_6(VAR_3)) {
  unsigned long VAR_7 = FUNC_5(VAR_6,
      (unsigned long)(VAR_1 - 1));

  VAR_5->low_slices = (1u << (FUNC_2(VAR_7) + 1))
   - (1u << FUNC_2(VAR_3));
 }

 if (VAR_2 && !FUNC_6(VAR_6)) {
  unsigned long VAR_8 = FUNC_1(VAR_3);
  unsigned long VAR_9 = FUNC_0(VAR_6, (1UL << VAR_0));
  unsigned long VAR_10 = FUNC_1(VAR_9) - VAR_8;

  FUNC_3(VAR_5->high_slices, VAR_8, VAR_10);
 }
}
