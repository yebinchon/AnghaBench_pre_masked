
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_ctx {int nr_paths; TYPE_1__* path_list; } ;
struct dm_target {int len; struct switch_ctx* private; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;
struct TYPE_2__ {int start; int dmdev; } ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
      iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct switch_ctx *VAR_3 = VAR_0->private;
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_paths; VAR_4++) {
  VAR_5 = VAR_1(VAR_0, VAR_3->path_list[VAR_4].dmdev,
    VAR_3->path_list[VAR_4].start, VAR_0->len, VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
