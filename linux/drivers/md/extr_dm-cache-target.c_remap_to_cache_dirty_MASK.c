
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct cache*,struct bio*) ;
 int FUNC_2 (struct cache*,int ) ;
 int FUNC_3 (struct cache*,int ) ;
 int FUNC_4 (struct cache*,struct bio*,int ) ;
 int FUNC_5 (struct cache*,int ) ;

__attribute__((used)) static void FUNC_6(struct cache *VAR_1, struct bio *VAR_2,
     dm_oblock_t VAR_3, dm_cblock_t VAR_4)
{
 FUNC_1(VAR_1, VAR_2);
 FUNC_4(VAR_1, VAR_2, VAR_4);
 if (FUNC_0(VAR_2) == VAR_0) {
  FUNC_5(VAR_1, VAR_4);
  FUNC_2(VAR_1, FUNC_3(VAR_1, VAR_3));
 }
}
