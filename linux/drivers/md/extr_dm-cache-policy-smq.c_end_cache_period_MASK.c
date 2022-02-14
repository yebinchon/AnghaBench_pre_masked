
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {scalar_t__ next_cache_period; int cache_stats; int clean; int dirty; int cache_size; int cache_hit_bits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct smq_policy *VAR_2)
{
 if (FUNC_4(VAR_1, VAR_2->next_cache_period)) {
  FUNC_0(VAR_2->cache_hit_bits, FUNC_1(VAR_2->cache_size));

  FUNC_2(&VAR_2->dirty);
  FUNC_2(&VAR_2->clean);
  FUNC_3(&VAR_2->cache_stats);

  VAR_2->next_cache_period = VAR_1 + VAR_0;
 }
}
