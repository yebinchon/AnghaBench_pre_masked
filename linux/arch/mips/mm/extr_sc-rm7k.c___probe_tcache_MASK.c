
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 unsigned long VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_7 = (unsigned long) &VAR_3;
 VAR_7 &= ~((8 * 1024 * 1024) - 1);
 VAR_8 = VAR_7 + (8 * 1024 * 1024);

 FUNC_3(VAR_5);

 FUNC_5(VAR_2);


 VAR_9 = (256 * 1024);
 for (VAR_6 = VAR_7; VAR_6 <= VAR_8; VAR_6 = (VAR_7 + VAR_9)) {
  unsigned long *VAR_10 = (unsigned long *) VAR_6;
  __asm__ __volatile__("nop" : : "r" (*VAR_10));
  VAR_9 <<= 1;
 }


 FUNC_7(0);
 FUNC_6(0);
 FUNC_0(VAR_1, VAR_7);


 VAR_9 = (512 * 1024);
 for (VAR_6 = VAR_7 + (512 * 1024); VAR_6 <= VAR_8; VAR_6 = VAR_7 + VAR_9) {
  FUNC_0(VAR_0, VAR_6);
  if (!FUNC_4())
   break;
  VAR_9 <<= 1;
 }

 VAR_6 -= VAR_7;
 VAR_4 = VAR_6;

 FUNC_1(VAR_2);

 FUNC_2(VAR_5);
}
