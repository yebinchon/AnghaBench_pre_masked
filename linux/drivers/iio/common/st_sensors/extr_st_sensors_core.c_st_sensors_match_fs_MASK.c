
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fs_avl; } ;
struct st_sensor_settings {TYPE_2__ fs; } ;
struct TYPE_3__ {unsigned int num; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct st_sensor_settings *VAR_2,
     unsigned int VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6 = -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2->fs.fs_avl[VAR_5].num == 0)
   return VAR_6;

  if (VAR_2->fs.fs_avl[VAR_5].num == VAR_3) {
   *VAR_4 = VAR_5;
   VAR_6 = 0;
   break;
  }
 }

 return VAR_6;
}
