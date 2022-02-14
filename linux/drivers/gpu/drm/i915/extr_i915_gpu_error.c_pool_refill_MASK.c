
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct pagevec*,struct page*) ;
 scalar_t__ FUNC_2 (struct pagevec*) ;

__attribute__((used)) static int FUNC_3(struct pagevec *VAR_1, gfp_t VAR_2)
{
 while (FUNC_2(VAR_1)) {
  struct page *VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  if (!VAR_3)
   return -VAR_0;

  FUNC_1(VAR_1, VAR_3);
 }

 return 0;
}
