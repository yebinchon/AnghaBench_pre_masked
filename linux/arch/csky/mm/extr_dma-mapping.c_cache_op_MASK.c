
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int phys_addr_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(phys_addr_t VAR_1, size_t VAR_2,
       void (*VAR_3)(unsigned long VAR_4, unsigned long VAR_5))
{
 struct page *VAR_6 = FUNC_6(VAR_1);
 void *VAR_7 = FUNC_1(FUNC_5(VAR_6));
 unsigned long VAR_8 = FUNC_4(VAR_1);
 size_t VAR_9 = VAR_2;

 do {
  size_t VAR_10 = VAR_9;

  if (VAR_8 + VAR_10 > VAR_0)
   VAR_10 = VAR_0 - VAR_8;

  if (FUNC_0(VAR_6)) {
   VAR_7 = FUNC_2(VAR_6);

   VAR_3((unsigned long)VAR_7 + VAR_8,
     (unsigned long)VAR_7 + VAR_8 + VAR_10);

   FUNC_3(VAR_7);
  } else {
   VAR_3((unsigned long)VAR_7 + VAR_8,
     (unsigned long)VAR_7 + VAR_8 + VAR_10);
  }
  VAR_8 = 0;

  VAR_6++;
  VAR_7 += VAR_0;
  VAR_9 -= VAR_10;
 } while (VAR_9);
}
