
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct intel_engine_pool {struct list_head* cache_list; } ;


 int FUNC_0 (struct list_head*) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static struct list_head *
FUNC_2(struct intel_engine_pool *VAR_1, size_t VAR_2)
{
 int VAR_3;






 VAR_3 = FUNC_1(VAR_2 >> VAR_0) - 1;
 if (VAR_3 >= FUNC_0(VAR_1->cache_list))
  VAR_3 = FUNC_0(VAR_1->cache_list) - 1;

 return &VAR_1->cache_list[VAR_3];
}
