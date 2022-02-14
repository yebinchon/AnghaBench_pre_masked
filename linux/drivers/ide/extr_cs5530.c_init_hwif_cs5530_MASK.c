
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ide_hwif_t ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (int *) ;
 int ** VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4 (ide_hwif_t *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_2 + 0);
 if (FUNC_0(VAR_3))
  FUNC_3(VAR_0[(VAR_3 >> 31) & 1][0], VAR_2 + 0);
 if (FUNC_0(FUNC_2(VAR_2 + 8)))
  FUNC_3(VAR_0[(VAR_3 >> 31) & 1][0], VAR_2 + 8);
}
