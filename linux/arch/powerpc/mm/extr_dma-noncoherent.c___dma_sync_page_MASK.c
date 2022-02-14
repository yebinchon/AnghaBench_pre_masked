
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef unsigned int phys_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (void*,size_t,int) ;
 int FUNC_1 (struct page*,unsigned int,size_t,int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct page* FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(phys_addr_t VAR_2, size_t VAR_3, int VAR_4)
{
 struct page *VAR_5 = FUNC_3(VAR_2 >> VAR_1);
 unsigned VAR_6 = VAR_2 & ~VAR_0;




 unsigned long VAR_7 = (unsigned long)FUNC_2(VAR_5) + VAR_6;
 FUNC_0((void *)VAR_7, VAR_3, VAR_4);

}
