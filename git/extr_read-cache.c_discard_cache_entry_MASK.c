
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {scalar_t__ mem_pool_allocated; int ce_namelen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct cache_entry*,int,int ) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(struct cache_entry *VAR_0)
{
 if (VAR_0 && FUNC_3())
  FUNC_2(VAR_0, 0xCD, FUNC_0(VAR_0->ce_namelen));

 if (VAR_0 && VAR_0->mem_pool_allocated)
  return;

 FUNC_1(VAR_0);
}
