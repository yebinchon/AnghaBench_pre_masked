
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_page_pool {int dummy; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_2__ {struct ttm_page_pool* pools; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct ttm_page_pool *FUNC_0(int VAR_4, bool VAR_5,
       enum ttm_caching_state VAR_6)
{
 int VAR_7;

 if (VAR_6 == VAR_2)
  return ((void*)0);

 if (VAR_6 == VAR_3)
  VAR_7 = 0x0;
 else
  VAR_7 = 0x1;

 if (VAR_4 & VAR_0) {
  if (VAR_5)
   return ((void*)0);
  VAR_7 |= 0x2;

 } else if (VAR_5) {
  VAR_7 |= 0x4;
 }

 return &VAR_1->pools[VAR_7];
}
