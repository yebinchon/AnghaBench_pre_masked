
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static long
FUNC_4(unsigned long VAR_2, unsigned long VAR_3)
{
 long VAR_4;

 do {
  unsigned long VAR_5 = FUNC_3(VAR_0, VAR_3 - VAR_2);

  if (FUNC_2(VAR_1))
   return 0;

  VAR_4 = FUNC_0(VAR_2, VAR_2 + VAR_5);
  if (VAR_4)
   return VAR_4;

  FUNC_1();
  VAR_2 += VAR_5;
 } while (VAR_2 < VAR_3);

 return 0;
}
