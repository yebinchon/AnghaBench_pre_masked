
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*,unsigned long,...) ;
 unsigned int FUNC_3 () ;
 unsigned long FUNC_4 () ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned long) ;

void FUNC_9(void)
{
 unsigned int VAR_9 = FUNC_3();
 unsigned int VAR_10 = VAR_9;

 if (VAR_8 >= 0) {
  FUNC_2("34K return prediction stack override set to %d.\n",
   VAR_8);
  if (VAR_8)
   VAR_10 |= (1 << 2);
  else
   VAR_10 &= ~(1 << 2);
 }
 if (VAR_7 >= 0) {
  FUNC_2("34K ALU/LSU sync override set to %d.\n", VAR_7);
  if (VAR_7)
   VAR_10 |= (1 << 5);
  else
   VAR_10 &= ~(1 << 5);
 }
 if (VAR_6) {
  FUNC_2("CP0.Config7 forced to 0x%08x.\n", VAR_5);
  VAR_10 = VAR_5;
 }
 if (VAR_9 != VAR_10) {
  __asm__ __volatile("sync");
  FUNC_6(VAR_10);
  FUNC_1();
  FUNC_2("Config7: 0x%08x\n", FUNC_3());
 }

 if (VAR_4 != 0) {







  unsigned long VAR_11;
  unsigned long VAR_12;


  VAR_11 = FUNC_5();
  FUNC_8(VAR_11 | (0x1 << 26));
  FUNC_1();



  FUNC_0(VAR_2, (0x80000008));
  FUNC_1();
  VAR_12 = FUNC_4();
  VAR_12 &= 0xfffe0000;

  VAR_12 |= 0x00000c00;

  FUNC_7(VAR_12);
  FUNC_1();

  FUNC_0(VAR_3, (0x80000008));

  FUNC_7((VAR_4 & 0xfffffc00) | 0x1 );
  FUNC_1();

  FUNC_0(VAR_3, (0x80000000));
  FUNC_8(VAR_11);
  FUNC_1();
  FUNC_2("Mapped %ld ITC cells starting at 0x%08x\n",
   ((VAR_12 & 0x7fe00000) >> 20), VAR_4);
 }
}
