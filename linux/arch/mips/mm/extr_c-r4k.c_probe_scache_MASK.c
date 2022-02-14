
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linesz; int ways; scalar_t__ waybit; } ;
struct cpuinfo_mips {TYPE_1__ scache; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned long) ;
 struct cpuinfo_mips VAR_7 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = FUNC_3();
 struct cpuinfo_mips *VAR_15 = &VAR_7;

 if (VAR_14 & VAR_0)
  return 0;

 VAR_11 = (unsigned long) &VAR_6;
 VAR_11 &= ~((4 * 1024 * 1024) - 1);
 VAR_12 = VAR_11 + (4 * 1024 * 1024);





 FUNC_2(VAR_9);


 VAR_13 = (64 * 1024);
 for (VAR_10 = VAR_11; VAR_10 < VAR_12; VAR_10 = (VAR_11 + VAR_13)) {
  unsigned long *VAR_16 = (unsigned long *) VAR_10;
  __asm__ __volatile__("nop" : : "r" (*VAR_16));
  VAR_13 <<= 1;
 }


 FUNC_6(0);
 FUNC_5(0);
 __asm__ __volatile__("nop; nop; nop; nop;");
 FUNC_0(VAR_3, VAR_11);
 FUNC_0(VAR_2, VAR_11);
 FUNC_0(VAR_4, VAR_11);


 VAR_13 = (128 * 1024);
 for (VAR_10 = VAR_11 + (128 * 1024); VAR_10 < VAR_12; VAR_10 = VAR_11 + VAR_13) {
  FUNC_0(VAR_1, VAR_10);
  __asm__ __volatile__("nop; nop; nop; nop;");
  if (!FUNC_4())
   break;
  VAR_13 <<= 1;
 }
 FUNC_1(VAR_9);
 VAR_10 -= VAR_11;

 VAR_8 = VAR_10;
 VAR_15->scache.linesz = 16 << ((VAR_14 & VAR_5) >> 22);
 VAR_15->scache.ways = 1;
 VAR_15->scache.waybit = 0;

 return 1;
}
