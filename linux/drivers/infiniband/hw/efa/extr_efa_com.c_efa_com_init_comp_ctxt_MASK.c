
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct efa_comp_ctx {int wait_event; } ;
struct efa_com_admin_queue {int depth; size_t* comp_ctx; size_t* comp_ctx_pool; scalar_t__ comp_ctx_pool_next; int comp_ctx_lock; int dmadev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t*) ;
 void* FUNC_1 (int ,size_t,int ) ;
 struct efa_comp_ctx* FUNC_2 (struct efa_com_admin_queue*,size_t,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct efa_com_admin_queue *VAR_2)
{
 size_t VAR_3 = VAR_2->depth * sizeof(*VAR_2->comp_ctx_pool);
 size_t VAR_4 = VAR_2->depth * sizeof(struct efa_comp_ctx);
 struct efa_comp_ctx *VAR_5;
 u16 VAR_6;

 VAR_2->comp_ctx = FUNC_1(VAR_2->dmadev, VAR_4, VAR_1);
 VAR_2->comp_ctx_pool = FUNC_1(VAR_2->dmadev, VAR_3, VAR_1);
 if (!VAR_2->comp_ctx || !VAR_2->comp_ctx_pool) {
  FUNC_0(VAR_2->dmadev, VAR_2->comp_ctx_pool);
  FUNC_0(VAR_2->dmadev, VAR_2->comp_ctx);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->depth; VAR_6++) {
  VAR_5 = FUNC_2(VAR_2, VAR_6, 0);
  if (VAR_5)
   FUNC_3(&VAR_5->wait_event);

  VAR_2->comp_ctx_pool[VAR_6] = VAR_6;
 }

 FUNC_4(&VAR_2->comp_ctx_lock);

 VAR_2->comp_ctx_pool_next = 0;

 return 0;
}
