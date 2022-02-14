
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,unsigned long,unsigned long,scalar_t__) ;
 int FUNC_5 (unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static bool FUNC_7(unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4 = VAR_3 + VAR_1;
 unsigned long VAR_5 = VAR_2;






 for (; VAR_3 < VAR_4; VAR_3++) {
  if (FUNC_0(!FUNC_3(VAR_5)))
   return 0;

  if (!FUNC_5(VAR_3)) {
   FUNC_4("section %ld pfn[%lx, %lx) not present\n",
    VAR_3, VAR_5, VAR_5 + VAR_0);
   return 0;
  } else if (!FUNC_6(VAR_3)) {
   FUNC_4("section %ld pfn[%lx, %lx) no valid memmap\n",
    VAR_3, VAR_5, VAR_5 + VAR_0);
   return 0;
  } else if (FUNC_1(VAR_3)) {
   FUNC_4("section %ld pfn[%lx, %lx) is already online\n",
    VAR_3, VAR_5, VAR_5 + VAR_0);
   return 0;
  }
  VAR_5 += VAR_0;
 }

 return 1;
}
