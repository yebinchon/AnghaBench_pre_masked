
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(pud_t *VAR_3, unsigned long VAR_4, unsigned long VAR_5,
     unsigned long VAR_6)
{
 unsigned long VAR_7;
 pmd_t *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_5(VAR_3, VAR_4);
 do {
  if (FUNC_4(*VAR_8))
   return -VAR_0;
  VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (FUNC_3(*VAR_8)) {
   if (VAR_4 & ~VAR_1 || VAR_4 + VAR_2 > VAR_7) {
    VAR_9 = FUNC_6(VAR_8, VAR_4);
    if (VAR_9)
     return VAR_9;
    continue;
   }
   FUNC_1(VAR_8, VAR_4, VAR_6);
  } else {
   VAR_9 = FUNC_7(VAR_8, VAR_4, VAR_7, VAR_6);
   if (VAR_9)
    return VAR_9;
  }
  VAR_8++;
  VAR_4 = VAR_7;
  FUNC_0();
 } while (VAR_4 < VAR_5);
 return VAR_9;
}
