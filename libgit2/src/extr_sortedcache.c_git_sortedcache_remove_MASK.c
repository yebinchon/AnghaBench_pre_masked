
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item_path_offset; int free_item_payload; int (* free_item ) (int ,char*) ;int map; int items; } ;
typedef TYPE_1__ git_sortedcache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(git_sortedcache *VAR_2, size_t VAR_3)
{
 char *VAR_4;






 if ((VAR_4 = FUNC_2(&VAR_2->items, VAR_3)) == ((void*)0)) {
  FUNC_0(VAR_1, "removing item out of range");
  return VAR_0;
 }

 (void)FUNC_3(&VAR_2->items, VAR_3);

 FUNC_1(VAR_2->map, VAR_4 + VAR_2->item_path_offset);

 if (VAR_2->free_item)
  VAR_2->free_item(VAR_2->free_item_payload, VAR_4);

 return 0;
}
