
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unstripe_c {scalar_t__ dev; } ;
struct dm_target {int dummy; } ;


 int FUNC_0 (struct dm_target*,scalar_t__) ;
 int FUNC_1 (struct unstripe_c*) ;

__attribute__((used)) static void FUNC_2(struct unstripe_c *VAR_0, struct dm_target *VAR_1)
{
 if (VAR_0->dev)
  FUNC_0(VAR_1, VAR_0->dev);
 FUNC_1(VAR_0);
}
