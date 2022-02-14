
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int work_mutex; } ;
struct dm_target {struct multipath* private; } ;


 int FUNC_0 (struct multipath*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct multipath *VAR_1 = VAR_0->private;

 FUNC_1(&VAR_1->work_mutex);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->work_mutex);
}
