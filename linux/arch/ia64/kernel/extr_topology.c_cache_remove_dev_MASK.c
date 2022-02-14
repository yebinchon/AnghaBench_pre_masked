
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_5__ {scalar_t__ parent; } ;
struct TYPE_7__ {TYPE_1__ kobj; } ;
struct TYPE_6__ {unsigned long num_cache_leaves; TYPE_1__ kobj; } ;


 TYPE_4__* FUNC_0 (unsigned int,unsigned long) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 unsigned long VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0[VAR_1].num_cache_leaves; VAR_2++)
  FUNC_2(&(FUNC_0(VAR_1,VAR_2)->kobj));

 if (VAR_0[VAR_1].kobj.parent) {
  FUNC_2(&VAR_0[VAR_1].kobj);
  FUNC_3(&VAR_0[VAR_1].kobj,
   0,
   sizeof(struct kobject));
 }

 FUNC_1(VAR_1);

 return 0;
}
