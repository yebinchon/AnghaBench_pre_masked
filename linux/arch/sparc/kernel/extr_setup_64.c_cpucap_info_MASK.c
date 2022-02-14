
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 unsigned long VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (struct seq_file*,char*,char*,scalar_t__) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;
 unsigned long VAR_3 ;

void FUNC_4(struct seq_file *VAR_4)
{
 unsigned long VAR_5 = VAR_3;
 int VAR_6, VAR_7 = 0;

 FUNC_3(VAR_4, "cpucaps\t\t: ");
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  unsigned long VAR_8 = 1UL << VAR_6;
  if (VAR_2[VAR_6] && (VAR_5 & VAR_8)) {
   FUNC_1(VAR_4, "%s%s",
       VAR_7 ? "," : "", VAR_2[VAR_6]);
   VAR_7++;
  }
 }
 if (VAR_5 & VAR_0) {
  unsigned long VAR_9;

  __asm__ __volatile__("rd %%asr26, %0" : "=r" (VAR_9));
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
   unsigned long VAR_10 = 1UL << VAR_6;
   if (VAR_9 & VAR_10) {
    FUNC_1(VAR_4, "%s%s",
        VAR_7 ? "," : "", VAR_1[VAR_6]);
    VAR_7++;
   }
  }
 }
 FUNC_2(VAR_4, '\n');
}
