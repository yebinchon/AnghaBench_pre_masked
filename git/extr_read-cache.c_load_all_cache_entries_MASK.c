
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int version; int cache_nr; int ce_mem_pool; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct index_state*,int ,int ,int ,char const*,unsigned long,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct index_state *VAR_0,
   const char *VAR_1, size_t VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (VAR_0->version == 4) {
  FUNC_3(&VAR_0->ce_mem_pool,
    FUNC_1(VAR_0->cache_nr));
 } else {
  FUNC_3(&VAR_0->ce_mem_pool,
    FUNC_0(VAR_2, VAR_0->cache_nr));
 }

 VAR_4 = FUNC_2(VAR_0, VAR_0->ce_mem_pool,
     0, VAR_0->cache_nr, VAR_1, VAR_3, ((void*)0));
 return VAR_4;
}
