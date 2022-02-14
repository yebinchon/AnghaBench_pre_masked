
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_c {TYPE_1__* stripe; } ;
struct dm_target {int table; } ;
struct TYPE_2__ {unsigned long long physical_start; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_target*,char*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_1, struct stripe_c *VAR_2,
        unsigned int VAR_3, char **VAR_4)
{
 unsigned long long VAR_5;
 char VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_4[1], "%llu%c", &VAR_5, &VAR_6) != 1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_4[0], FUNC_1(VAR_1->table),
       &VAR_2->stripe[VAR_3].dev);
 if (VAR_7)
  return VAR_7;

 VAR_2->stripe[VAR_3].physical_start = VAR_5;

 return 0;
}
