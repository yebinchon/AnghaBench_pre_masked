
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef unsigned int phys_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 struct page* FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static inline void FUNC_5(phys_addr_t VAR_3, size_t VAR_4,
  void (*VAR_5)(unsigned long VAR_6, unsigned long VAR_7))
{
 struct page *VAR_8 = FUNC_3(VAR_3 >> VAR_1);
 unsigned VAR_9 = VAR_3 & ~VAR_0;
 size_t VAR_10 = VAR_4;
 unsigned long VAR_11;

 do {
  size_t VAR_12 = VAR_10;

  if (FUNC_0(VAR_8)) {
   void *VAR_13;

   if (VAR_9 + VAR_12 > VAR_2) {
    if (VAR_9 >= VAR_2) {
     VAR_8 += VAR_9 >> VAR_1;
     VAR_9 &= ~VAR_0;
    }
    VAR_12 = VAR_2 - VAR_9;
   }

   VAR_13 = FUNC_1(VAR_8);
   VAR_11 = (unsigned long)(VAR_13 + VAR_9);
   VAR_5(VAR_11, VAR_11 + VAR_12);
   FUNC_2(VAR_13);
  } else {
   VAR_11 = (unsigned long)FUNC_4(VAR_3);
   VAR_5(VAR_11, VAR_11 + VAR_4);
  }
  VAR_9 = 0;
  VAR_8++;
  VAR_10 -= VAR_12;
 } while (VAR_10);
}
