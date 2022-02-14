
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_page_pool {int order; } ;
struct shrinker {int dummy; } ;
struct shrink_control {int nr_to_scan; } ;
struct TYPE_2__ {struct ttm_page_pool* pools; } ;
typedef int DEFINE_MUTEX ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct ttm_page_pool*,unsigned int,int) ;

__attribute__((used)) static unsigned long
FUNC_4(struct shrinker *VAR_3, struct shrink_control *VAR_4)
{
 static DEFINE_MUTEX(VAR_5);
 static unsigned VAR_6;
 unsigned VAR_7;
 unsigned VAR_8;
 struct ttm_page_pool *VAR_9;
 int VAR_10 = VAR_4->nr_to_scan;
 unsigned long VAR_11 = 0;
 unsigned int VAR_12;

 if (!FUNC_0(&VAR_5))
  return VAR_1;
 VAR_8 = ++VAR_6 % VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  unsigned VAR_13 = VAR_10;
  unsigned VAR_14;

  if (VAR_10 == 0)
   break;

  VAR_9 = &VAR_2->pools[(VAR_7 + VAR_8)%VAR_0];
  VAR_14 = (1 << VAR_9->order);

  VAR_12 = FUNC_2(VAR_13, VAR_14) >> VAR_9->order;
  VAR_10 = FUNC_3(VAR_9, VAR_12, 1);
  VAR_11 += (VAR_12 - VAR_10) << VAR_9->order;
  if (VAR_11 >= VAR_4->nr_to_scan)
   break;
  VAR_10 <<= VAR_9->order;
 }
 FUNC_1(&VAR_5);
 return VAR_11;
}
