
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int loops_per_jiffy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct cpuinfo_x86 *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_2 == 3) {
  unsigned char VAR_6, VAR_7;

  FUNC_3(VAR_5);
  VAR_6 = FUNC_1(VAR_0);
  FUNC_5(VAR_0, (VAR_6 & 0x0f) | 0x10);
  VAR_7 = FUNC_1(VAR_1);
  if (VAR_7 & 2)
   FUNC_5(VAR_1, VAR_7 & 0xfd);
  FUNC_5(VAR_0, VAR_6);
  FUNC_2(VAR_5);

  if (VAR_7 & 2) {
   FUNC_4("Recalibrating delay loop with SLOP bit reset\n");
   FUNC_0();
   VAR_4->loops_per_jiffy = VAR_3;
  }
 }
}
