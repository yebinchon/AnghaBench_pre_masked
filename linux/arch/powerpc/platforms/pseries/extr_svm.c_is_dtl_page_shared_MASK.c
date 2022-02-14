
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 long VAR_0 ;
 struct page** VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct page *VAR_2)
{
 long VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3] == VAR_2)
   return 1;

 return 0;
}
