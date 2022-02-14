
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct delay_c* private; } ;
struct delay_c {int may_delay; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0)
{
 struct delay_c *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->may_delay, 1);
}
