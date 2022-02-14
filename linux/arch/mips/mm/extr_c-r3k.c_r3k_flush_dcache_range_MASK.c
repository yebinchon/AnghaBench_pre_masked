
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 volatile unsigned char *VAR_9;

 VAR_6 = VAR_5 - VAR_4;
 if (VAR_6 > VAR_3 || FUNC_0(VAR_4) != VAR_0) {
  VAR_4 = VAR_0;
  VAR_6 = VAR_3;
 }
 VAR_9 = (char *)VAR_4;

 VAR_8 = FUNC_1();


 FUNC_2((VAR_2|VAR_8)&~VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += 0x080) {
  asm( "sb\t$0, 0x000(%0)\n\t"
   "sb\t$0, 0x004(%0)\n\t"
   "sb\t$0, 0x008(%0)\n\t"
   "sb\t$0, 0x00c(%0)\n\t"
   "sb\t$0, 0x010(%0)\n\t"
   "sb\t$0, 0x014(%0)\n\t"
   "sb\t$0, 0x018(%0)\n\t"
   "sb\t$0, 0x01c(%0)\n\t"
   "sb\t$0, 0x020(%0)\n\t"
   "sb\t$0, 0x024(%0)\n\t"
   "sb\t$0, 0x028(%0)\n\t"
   "sb\t$0, 0x02c(%0)\n\t"
   "sb\t$0, 0x030(%0)\n\t"
   "sb\t$0, 0x034(%0)\n\t"
   "sb\t$0, 0x038(%0)\n\t"
   "sb\t$0, 0x03c(%0)\n\t"
   "sb\t$0, 0x040(%0)\n\t"
   "sb\t$0, 0x044(%0)\n\t"
   "sb\t$0, 0x048(%0)\n\t"
   "sb\t$0, 0x04c(%0)\n\t"
   "sb\t$0, 0x050(%0)\n\t"
   "sb\t$0, 0x054(%0)\n\t"
   "sb\t$0, 0x058(%0)\n\t"
   "sb\t$0, 0x05c(%0)\n\t"
   "sb\t$0, 0x060(%0)\n\t"
   "sb\t$0, 0x064(%0)\n\t"
   "sb\t$0, 0x068(%0)\n\t"
   "sb\t$0, 0x06c(%0)\n\t"
   "sb\t$0, 0x070(%0)\n\t"
   "sb\t$0, 0x074(%0)\n\t"
   "sb\t$0, 0x078(%0)\n\t"
   "sb\t$0, 0x07c(%0)\n\t"
   : : "r" (VAR_9) );
  VAR_9 += 0x080;
 }

 FUNC_2(VAR_8);
}
