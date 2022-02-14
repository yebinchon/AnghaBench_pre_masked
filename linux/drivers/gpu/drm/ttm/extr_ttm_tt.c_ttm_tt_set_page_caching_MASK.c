
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*,int) ;
 int FUNC_2 (struct page*,int) ;
 int FUNC_3 (struct page*,int) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_3,
       enum ttm_caching_state VAR_4,
       enum ttm_caching_state VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_0(VAR_3))
  return 0;

 if (VAR_4 != VAR_0) {



  VAR_6 = FUNC_2(VAR_3, 1);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_5 == VAR_2)
  VAR_6 = FUNC_3(VAR_3, 1);
 else if (VAR_5 == VAR_1)
  VAR_6 = FUNC_1(VAR_3, 1);

 return VAR_6;
}
