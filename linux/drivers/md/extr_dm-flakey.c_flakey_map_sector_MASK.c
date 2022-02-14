
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flakey_c {scalar_t__ start; } ;
struct dm_target {struct flakey_c* private; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (struct dm_target*,scalar_t__) ;

__attribute__((used)) static sector_t FUNC_1(struct dm_target *VAR_0, sector_t VAR_1)
{
 struct flakey_c *VAR_2 = VAR_0->private;

 return VAR_2->start + FUNC_0(VAR_0, VAR_1);
}
