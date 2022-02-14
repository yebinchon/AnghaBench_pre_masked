
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_ctx {int nr_paths; unsigned long long region_size; TYPE_2__* path_list; } ;
struct dm_target {struct switch_ctx* private; } ;
typedef int status_type_t ;
struct TYPE_4__ {scalar_t__ start; TYPE_1__* dmdev; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int,unsigned long long) ;



__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1,
     unsigned VAR_2, char *VAR_3, unsigned VAR_4)
{
 struct switch_ctx *VAR_5 = VAR_0->private;
 unsigned VAR_6 = 0;
 int VAR_7;

 switch (VAR_1) {
 case 129:
  VAR_3[0] = '\0';
  break;

 case 128:
  FUNC_0("%u %u 0", VAR_5->nr_paths, VAR_5->region_size);
  for (VAR_7 = 0; VAR_7 < VAR_5->nr_paths; VAR_7++)
   FUNC_0(" %s %llu", VAR_5->path_list[VAR_7].dmdev->name,
          (unsigned long long)VAR_5->path_list[VAR_7].start);
  break;
 }
}
