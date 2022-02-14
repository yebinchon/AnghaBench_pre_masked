
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned long,int,int,int,int) ;
 int FUNC_2 (char*,...) ;
 unsigned long FUNC_3 () ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(int VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;

 VAR_13 = FUNC_0(&VAR_6);
 VAR_10 = FUNC_3() & VAR_13;

 for (VAR_9 = VAR_7; VAR_9 <= VAR_8; VAR_9++) {
  FUNC_6(VAR_9<<8);
  __asm__ __volatile__(
   ".set\tnoreorder\n\t"
   "tlbr\n\t"
   "nop\n\t"
   ".set\treorder");
  VAR_11 = FUNC_3();
  VAR_12 = FUNC_4();


  if ((VAR_11 & VAR_1) != VAR_0 &&
      (VAR_12 & VAR_3 ||
       (VAR_11 & VAR_13) == VAR_10)) {



   FUNC_2("Index: %2d ", VAR_9);

   FUNC_1("va=%08lx asid=%08lx"
    "  [pa=%06lx n=%d d=%d v=%d g=%d]",
    VAR_11 & VAR_1,
    VAR_11 & VAR_13,
    VAR_12 & VAR_1,
    (VAR_12 & VAR_4) ? 1 : 0,
    (VAR_12 & VAR_2) ? 1 : 0,
    (VAR_12 & VAR_5) ? 1 : 0,
    (VAR_12 & VAR_3) ? 1 : 0);
  }
 }
 FUNC_2("\n");

 FUNC_5(VAR_10);
}
