
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unstripe_c {int dummy; } ;
struct dm_target {struct unstripe_c* private; } ;


 int FUNC_0 (struct unstripe_c*,struct dm_target*) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0)
{
 struct unstripe_c *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1, VAR_0);
}
