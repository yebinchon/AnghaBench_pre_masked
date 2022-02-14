
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct uma_bucket_zone {int ubz_entries; } ;
struct TYPE_5__ {int uz_count_max; int uz_count; int uz_count_min; int uz_max_items; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct uma_bucket_zone* VAR_0 ;
 int VAR_1 ;

int
FUNC_2(uma_zone_t VAR_2, int VAR_3)
{
 struct uma_bucket_zone *VAR_4;





 VAR_4 = &VAR_0[0];
 for (; VAR_4->ubz_entries != 0; VAR_4++)
  if (VAR_4->ubz_entries * 2 * VAR_1 > VAR_3)
   break;
 if (VAR_4 == &VAR_0[0])
  VAR_3 = VAR_4->ubz_entries * 2 * VAR_1;
 else
  VAR_4--;

 FUNC_0(VAR_2);
 VAR_2->uz_count_max = VAR_2->uz_count = VAR_4->ubz_entries;
 if (VAR_2->uz_count_min > VAR_2->uz_count_max)
  VAR_2->uz_count_min = VAR_2->uz_count_max;
 VAR_2->uz_max_items = VAR_3;
 FUNC_1(VAR_2);

 return (VAR_3);
}
