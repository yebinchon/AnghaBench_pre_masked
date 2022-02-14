
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* stfle_fac_list; } ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;

void FUNC_5(void)
{
 static char VAR_3[80] = "Missing facilities: ";
 unsigned long VAR_4;
 char VAR_5[6];
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = 1;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_4 = ~VAR_1.stfle_fac_list[VAR_6] & VAR_2[VAR_6];
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (!(VAR_4 & (1UL << (VAR_0 - 1 - VAR_7))))
    continue;
   if (!VAR_8)
    FUNC_2(VAR_3, ",");





   if (FUNC_3(VAR_3) > 70) {
    FUNC_2(VAR_3, "\n");
    FUNC_1(VAR_3);
    *VAR_3 = '\0';
   }
   FUNC_4(VAR_5, VAR_6 * VAR_0 + VAR_7);
   FUNC_2(VAR_3, VAR_5);
   VAR_8 = 0;
  }
 }
 FUNC_2(VAR_3, "\n");
 FUNC_1(VAR_3);
}
