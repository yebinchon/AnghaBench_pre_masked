
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct page*) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_1,
    struct page **VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6 = VAR_1 + 1, VAR_7 = 1;


 VAR_4 = FUNC_0(VAR_2[VAR_1]);
 while (VAR_6 < VAR_3) {
  VAR_5 = FUNC_0(VAR_2[VAR_6++]);
  if ((VAR_4 + VAR_0) == VAR_5) {
   VAR_7++;
   VAR_4 = VAR_5;
   continue;
  }
  break;
 }

 return VAR_7;
}
