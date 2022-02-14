
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct closure {int dummy; } ;
struct cache_set {int dummy; } ;
struct bio {struct closure* bi_private; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct cache_set*,struct bio*,int ,char const*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct closure*) ;

void FUNC_3(struct cache_set *VAR_0, struct bio *VAR_1,
      blk_status_t VAR_2, const char *VAR_3)
{
 struct closure *VAR_4 = VAR_1->bi_private;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1);
 FUNC_2(VAR_4);
}
