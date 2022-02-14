
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int es; int cache_hit_bits; int hotspot_hit_bits; int table; int hotspot_table; int bg_work; } ;
struct dm_cache_policy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smq_policy*) ;
 int FUNC_4 (int *) ;
 struct smq_policy* FUNC_5 (struct dm_cache_policy*) ;

__attribute__((used)) static void FUNC_6(struct dm_cache_policy *VAR_0)
{
 struct smq_policy *VAR_1 = FUNC_5(VAR_0);

 FUNC_0(VAR_1->bg_work);
 FUNC_2(&VAR_1->hotspot_table);
 FUNC_2(&VAR_1->table);
 FUNC_1(VAR_1->hotspot_hit_bits);
 FUNC_1(VAR_1->cache_hit_bits);
 FUNC_4(&VAR_1->es);
 FUNC_3(VAR_1);
}
