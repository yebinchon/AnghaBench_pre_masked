
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {int dummy; } ;


 int FUNC_0 (struct dm_snapshot*) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0)
{
 struct dm_snapshot *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1);
}
