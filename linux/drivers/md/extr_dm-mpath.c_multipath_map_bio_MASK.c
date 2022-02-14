
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int dummy; } ;
struct dm_target {struct multipath* private; } ;
struct dm_mpath_io {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct multipath*,struct bio*,struct dm_mpath_io*) ;
 int FUNC_1 (struct bio*,struct dm_mpath_io**) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_0, struct bio *VAR_1)
{
 struct multipath *VAR_2 = VAR_0->private;
 struct dm_mpath_io *VAR_3 = ((void*)0);

 FUNC_1(VAR_1, &VAR_3);
 return FUNC_0(VAR_2, VAR_1, VAR_3);
}
