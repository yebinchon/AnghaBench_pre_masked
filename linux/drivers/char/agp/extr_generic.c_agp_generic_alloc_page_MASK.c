
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_bridge_data {int dummy; } ;
struct TYPE_2__ {int current_memory_agp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

struct page *FUNC_4(struct agp_bridge_data *VAR_4)
{
 struct page * VAR_5;

 VAR_5 = FUNC_0(VAR_1 | VAR_0 | VAR_2);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_3(VAR_5);

 FUNC_2(VAR_5);
 FUNC_1(&VAR_3->current_memory_agp);
 return VAR_5;
}
