
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_ctx {size_t nr_paths; TYPE_1__* path_list; } ;
struct dm_target {char* error; int table; struct switch_ctx* private; } ;
struct dm_arg_set {int dummy; } ;
typedef unsigned long long sector_t ;
struct TYPE_2__ {unsigned long long start; int dmdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_target*,int ,int ,int *) ;
 int FUNC_1 (struct dm_target*,int ) ;
 int FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_5(struct dm_arg_set *VAR_1, struct dm_target *VAR_2)
{
 struct switch_ctx *VAR_3 = VAR_2->private;
 unsigned long long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, FUNC_2(VAR_1), FUNC_3(VAR_2->table),
     &VAR_3->path_list[VAR_3->nr_paths].dmdev);
 if (VAR_5) {
  VAR_2->error = "Device lookup failed";
  return VAR_5;
 }

 if (FUNC_4(FUNC_2(VAR_1), 10, &VAR_4) || VAR_4 != (sector_t)VAR_4) {
  VAR_2->error = "Invalid device starting offset";
  FUNC_1(VAR_2, VAR_3->path_list[VAR_3->nr_paths].dmdev);
  return -VAR_0;
 }

 VAR_3->path_list[VAR_3->nr_paths].start = VAR_4;

 VAR_3->nr_paths++;

 return 0;
}
