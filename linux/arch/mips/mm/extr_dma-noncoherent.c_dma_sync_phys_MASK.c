
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef unsigned long phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (void*,size_t,int) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct page*) ;
 struct page* FUNC_5 (unsigned long) ;

__attribute__((used)) static inline void FUNC_6(phys_addr_t VAR_3, size_t VAR_4,
  enum dma_data_direction VAR_5)
{
 struct page *VAR_6 = FUNC_5(VAR_3 >> VAR_1);
 unsigned long VAR_7 = VAR_3 & ~VAR_0;
 size_t VAR_8 = VAR_4;

 do {
  size_t VAR_9 = VAR_8;

  if (FUNC_0(VAR_6)) {
   void *VAR_10;

   if (VAR_7 + VAR_9 > VAR_2)
    VAR_9 = VAR_2 - VAR_7;

   VAR_10 = FUNC_2(VAR_6);
   FUNC_1(VAR_10 + VAR_7, VAR_9, VAR_5);
   FUNC_3(VAR_10);
  } else
   FUNC_1(FUNC_4(VAR_6) + VAR_7, VAR_4, VAR_5);
  VAR_7 = 0;
  VAR_6++;
  VAR_8 -= VAR_9;
 } while (VAR_8);
}
