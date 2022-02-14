
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_2 ;
 int FUNC_2 (struct page**,int) ;
 struct page** FUNC_3 (void*) ;
 int FUNC_4 (void*,size_t) ;
 int FUNC_5 (struct device*,struct page*,size_t) ;
 scalar_t__ FUNC_6 (void*,size_t) ;
 scalar_t__ FUNC_7 (void*) ;
 struct page* FUNC_8 (void*) ;
 struct page* FUNC_9 (void*) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_3, size_t VAR_4, void *VAR_5)
{
 size_t VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = VAR_6 >> VAR_2;
 struct page *VAR_8 = ((void*)0), **VAR_9 = ((void*)0);


 if (FUNC_0(VAR_0) &&
     FUNC_6(VAR_5, VAR_6))
  return;

 if (FUNC_0(VAR_1) && FUNC_7(VAR_5)) {




  VAR_9 = FUNC_3(VAR_5);
  if (!VAR_9)
   VAR_8 = FUNC_9(VAR_5);
  FUNC_4(VAR_5, VAR_6);
 } else {

  VAR_8 = FUNC_8(VAR_5);
 }

 if (VAR_9)
  FUNC_2(VAR_9, VAR_7);
 if (VAR_8)
  FUNC_5(VAR_3, VAR_8, VAR_6);
}
