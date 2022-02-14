
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int isolate_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (unsigned long) ;
 int VAR_5 ;
 struct page** VAR_6 ;
 struct page* FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static isolate_status_t
FUNC_7(unsigned long VAR_7)
{
 int VAR_8;
 struct page *VAR_9;


 if (!FUNC_4(VAR_7))
  return VAR_1;

 if (!FUNC_6(VAR_7 >> VAR_4))
  return VAR_1;


 VAR_9 = FUNC_5(VAR_7>>VAR_4);


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  if (VAR_6[VAR_8] == VAR_9)
   return VAR_2;


 if (VAR_5 == VAR_3)
  return VAR_0;


 if (FUNC_1(VAR_9) || FUNC_0(VAR_9))
  return VAR_0;


 FUNC_3(VAR_9);
 FUNC_2(VAR_9);
 VAR_6[VAR_5++] = VAR_9;

 return VAR_2;
}
