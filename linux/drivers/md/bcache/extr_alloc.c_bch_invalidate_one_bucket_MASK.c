
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int buckets; int free_inc; } ;
struct bucket {int dummy; } ;


 int FUNC_0 (struct cache*,struct bucket*) ;
 int FUNC_1 (int *,struct bucket*) ;

__attribute__((used)) static void FUNC_2(struct cache *VAR_0, struct bucket *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_1(&VAR_0->free_inc, VAR_1 - VAR_0->buckets);
}
