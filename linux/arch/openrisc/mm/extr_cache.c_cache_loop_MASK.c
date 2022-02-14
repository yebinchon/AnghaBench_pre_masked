
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned int const,unsigned long) ;
 unsigned long FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_3, const unsigned int VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_3) << VAR_1;
 unsigned long VAR_6 = VAR_5 & ~(VAR_0 - 1);

 while (VAR_6 < VAR_5 + VAR_2) {
  FUNC_0(VAR_4, VAR_6);
  VAR_6 += VAR_0;
 }
}
