
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct efa_com_admin_queue {size_t comp_ctx_pool_next; int comp_ctx_lock; int * comp_ctx_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u16 FUNC_2(struct efa_com_admin_queue *VAR_0)
{
 u16 VAR_1;

 FUNC_0(&VAR_0->comp_ctx_lock);
 VAR_1 = VAR_0->comp_ctx_pool[VAR_0->comp_ctx_pool_next];
 VAR_0->comp_ctx_pool_next++;
 FUNC_1(&VAR_0->comp_ctx_lock);

 return VAR_1;
}
