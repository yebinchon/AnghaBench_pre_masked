
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_oblock_t ;


 scalar_t__ FUNC_0 (struct cache*,struct bio*) ;
 scalar_t__ FUNC_1 (struct cache*,int ) ;
 scalar_t__ FUNC_2 (struct cache*) ;

__attribute__((used)) static bool FUNC_3(struct cache *VAR_0, struct bio *VAR_1, dm_oblock_t VAR_2)
{
 return FUNC_2(VAR_0) &&
  (FUNC_1(VAR_0, VAR_2) || FUNC_0(VAR_0, VAR_1));
}
