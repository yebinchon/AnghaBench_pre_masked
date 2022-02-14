
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ length; } ;
struct TYPE_10__ {int dirty; int stamp; TYPE_1__ entries; int entries_map; int tree_pool; int * tree; } ;
typedef TYPE_2__ git_index ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;

int FUNC_8(git_index *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(VAR_0);

 VAR_0->dirty = 1;
 VAR_0->tree = ((void*)0);
 FUNC_5(&VAR_0->tree_pool);

 FUNC_2(VAR_0->entries_map);
 while (!VAR_1 && VAR_0->entries.length > 0)
  VAR_1 = FUNC_7(VAR_0, VAR_0->entries.length - 1);
 FUNC_6(VAR_0);

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);

 FUNC_1(&VAR_0->stamp, ((void*)0));

 return VAR_1;
}
