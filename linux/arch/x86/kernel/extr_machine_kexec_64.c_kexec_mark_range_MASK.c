
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 struct page* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct page*,unsigned int) ;
 int FUNC_2 (struct page*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(unsigned long VAR_1, unsigned long VAR_2, bool VAR_3)
{
 struct page *VAR_4;
 unsigned int VAR_5;





 if (!VAR_2 || VAR_1 > VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_1 >> VAR_0);
 VAR_5 = (VAR_2 >> VAR_0) - (VAR_1 >> VAR_0) + 1;
 if (VAR_3)
  return FUNC_1(VAR_4, VAR_5);
 else
  return FUNC_2(VAR_4, VAR_5);
}
