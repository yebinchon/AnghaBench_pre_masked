
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; } ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (void*) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long *VAR_2)
{
 struct page *VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_4 = (unsigned long) VAR_2 / sizeof(unsigned long);
 VAR_4 = (VAR_4 & (VAR_1 - 1)) * VAR_0;
 VAR_5 = ~(VAR_1 * sizeof(pmd_t) - 1);
 VAR_3 = FUNC_0((void *)((unsigned long) VAR_2 & VAR_5));
 return VAR_3->index + VAR_4;
}
