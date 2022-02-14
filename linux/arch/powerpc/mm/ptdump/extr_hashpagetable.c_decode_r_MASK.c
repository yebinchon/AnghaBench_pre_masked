
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_psize_def {int* penc; unsigned long shift; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct mmu_psize_def* VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_4, unsigned long VAR_5, unsigned long *VAR_6, int *VAR_7,
  unsigned long *VAR_8)
{
 struct mmu_psize_def VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;
 int VAR_13 = -2, VAR_14 = 0, VAR_15;
 VAR_10 = (VAR_5 & VAR_0) >> VAR_1;
 VAR_12 = VAR_10 & 0xff;

 VAR_9 = VAR_3[VAR_4];
 while (VAR_14 < VAR_2) {
  VAR_13 = VAR_9.penc[VAR_14];
  if ((VAR_13 != -1) && (VAR_3[VAR_14].shift)) {
   VAR_15 = VAR_3[VAR_14].shift - VAR_1;
   VAR_11 = (0x1 << (VAR_15)) - 1;
   if ((VAR_12 & VAR_11) == VAR_13) {
    *VAR_7 = FUNC_0(VAR_14);
    *VAR_8 = VAR_12 & VAR_11;
    *VAR_6 = VAR_10 >> VAR_15;
    return;
   }
  }
  VAR_14++;
 }
}
