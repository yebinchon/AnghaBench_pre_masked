
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 struct page* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ) ;

__attribute__((used)) static struct page *FUNC_3(struct page **VAR_0, int VAR_1)
{
 struct page *VAR_2;
 struct page *VAR_3;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_0);

 VAR_2 = *VAR_0;

 if (!VAR_2)
  return ((void*)0);

 while (VAR_2) {
  VAR_3 = FUNC_1(VAR_2);
  if (--VAR_1 == 0)
   break;
  if (VAR_3 == ((void*)0))

   return ((void*)0);
  VAR_2 = VAR_3;
 }


 FUNC_2(VAR_2, 0);

 VAR_2 = *VAR_0;
 *VAR_0 = VAR_3;
 return VAR_2;
}
