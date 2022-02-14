
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_ctx {size_t nr_paths; int region_table; TYPE_1__* path_list; } ;
struct dm_target {struct switch_ctx* private; } ;
struct TYPE_2__ {int dmdev; } ;


 int FUNC_0 (struct dm_target*,int ) ;
 int FUNC_1 (struct switch_ctx*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct switch_ctx *VAR_1 = VAR_0->private;

 while (VAR_1->nr_paths--)
  FUNC_0(VAR_0, VAR_1->path_list[VAR_1->nr_paths].dmdev);

 FUNC_2(VAR_1->region_table);
 FUNC_1(VAR_1);
}
