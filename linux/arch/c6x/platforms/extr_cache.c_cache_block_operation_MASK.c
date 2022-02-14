
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(unsigned int *VAR_1,
      unsigned int *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6 =
  (FUNC_0((unsigned int) VAR_2)
   - FUNC_1((unsigned int) VAR_1)) >> 2;
 unsigned int VAR_7 = 0;

 for (; VAR_6; VAR_6 -= VAR_7, VAR_1 += VAR_7) {
loop:
  FUNC_5(&VAR_0, VAR_5);




  if (FUNC_7(FUNC_3(VAR_4))) {
   FUNC_6(&VAR_0, VAR_5);


   FUNC_2(VAR_4);


   goto loop;
  }

  FUNC_4(VAR_3, FUNC_1((unsigned int) VAR_1));

  if (VAR_6 > 0xffff)
   VAR_7 = 0xffff;
  else
   VAR_7 = VAR_6;


  FUNC_4(VAR_4, VAR_7 & 0xffff);

  FUNC_6(&VAR_0, VAR_5);


  FUNC_2(VAR_4);
 }
}
