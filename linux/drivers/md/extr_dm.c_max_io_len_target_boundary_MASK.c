
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {scalar_t__ len; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (struct dm_target*,scalar_t__) ;

__attribute__((used)) static sector_t FUNC_1(sector_t VAR_0, struct dm_target *VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_1, VAR_0);

 return VAR_1->len - VAR_2;
}
